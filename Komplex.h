#pragma once
#include<iostream>
using namespace std;
class Komplex
{
public:
	Komplex(double = 0, double = 0); //Konstruktor
	void set_re(double);		//Setzen des Realteils
	void set_im(double);		//Setzen des Imaginärteils
	double get_re(void) const;	//Rückgabe des Realteil
	double get_im(void) const;	//Rückgabe des Imaginärteil
	double get_r(void) const;	//Rückgabe des Betrags der Komplexen Zahl
	double get_phi(void) const;	//Rückgabe des Phasenwinkels der Komplexen Zahl
	Komplex add(Komplex &);		//Methode zum addieren Komplexer Zahlen
	Komplex sub(Komplex &);		//Methode zum subtrahieren Komplexer Zahlen
	void ausgabe(void);			//Ausgabe Methode
	Komplex multi(Komplex &);	//Methode zur Multipliaktion Komplexer Zahlen
	Komplex konj(void);			//Rückgabe der konjungiert Komplexen Zahl
	Komplex operator + (const Komplex &);	//Überladen des + Operators
	friend Komplex operator*(const Komplex &, const Komplex &);	//befreundete Funktion zur Multiplikation zweier  Komplexen Zahlen(*operator Überladung)
	friend ostream & operator << (ostream & o, const Komplex &);//befreundete Funktion zur Ausgabe einer Komplexen Zahl(<<operator Überladung)
	friend istream & operator >> (istream & i, Komplex &);	//befreundetete Funktion zur Eingabe einer Komplexen Zahl(>>operator Überladung)
	friend Komplex operator *(double, const Komplex &);	//befreudete Funtion zur Multiplikation einer Kommazahl und einer Komplexen Zahl(*operator Überladung)
	Komplex operator += (const Komplex &); //Überladung des +=operator
	~Komplex(void);

private:
	double re_;	//Realteil
	double im_;	//Imaginärteil
};



