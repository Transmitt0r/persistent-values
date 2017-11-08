#pragma once
#include<iostream>
using namespace std;
class Komplex
{
public:
	Komplex(double = 0, double = 0); //Konstruktor
	void set_re(double);
	void set_im(double);
	double get_re(void) const;
	double get_im(void) const;
	double get_r(void) const;
	double get_phi(void) const;
	Komplex add(Komplex &);
	Komplex sub(Komplex &);
	void ausgabe(void);
	Komplex multi(Komplex &);
	Komplex konj(void);
	Komplex operator + (const Komplex &);
	friend Komplex operator*(const Komplex &, const Komplex &);
	friend ostream & operator << (ostream & o, const Komplex &);
	friend istream & operator >> (istream & i, Komplex &);
	friend Komplex operator *(double, const Komplex &);
	Komplex operator += (const Komplex &);
	~Komplex(void);

private:
	double re_;
	double im_;
};



