#pragma once
#include<iostream>
using namespace std;
class Komplex
{
public:
	Komplex(double = 0, double = 0); //Konstruktor
	void set_re(double);		//Setzen des Realteils
	void set_im(double);		//Setzen des Imagin�rteils
	double get_re(void) const;	//R�ckgabe des Realteil
	double get_im(void) const;	//R�ckgabe des Imagin�rteil
	double get_r(void) const;	//R�ckgabe des Betrags der Komplexen Zahl
	double get_phi(void) const;	//R�ckgabe des Phasenwinkels der Komplexen Zahl
	Komplex add(Komplex &);		//Methode zum addieren Komplexer Zahlen
	Komplex sub(Komplex &);		//Methode zum subtrahieren Komplexer Zahlen
	void ausgabe(void);			//Ausgabe Methode
	Komplex multi(Komplex &);	//Methode zur Multipliaktion Komplexer Zahlen
	Komplex konj(void);			//R�ckgabe der konjungiert Komplexen Zahl
	Komplex operator + (const Komplex &);	//�berladen des + Operators
	friend Komplex operator*(const Komplex &, const Komplex &);	//befreundete Funktion zur Multiplikation zweier  Komplexen Zahlen(*operator �berladung)
	friend ostream & operator << (ostream & o, const Komplex &);//befreundete Funktion zur Ausgabe einer Komplexen Zahl(<<operator �berladung)
	friend istream & operator >> (istream & i, Komplex &);	//befreundetete Funktion zur Eingabe einer Komplexen Zahl(>>operator �berladung)
	friend Komplex operator *(double, const Komplex &);	//befreudete Funtion zur Multiplikation einer Kommazahl und einer Komplexen Zahl(*operator �berladung)
	Komplex operator += (const Komplex &); //�berladung des +=operator
	~Komplex(void);

private:
	double re_;	//Realteil
	double im_;	//Imagin�rteil
};



