#include "Komplex.h"
#include<math.h>
#include<iostream>

using namespace std;
Komplex::Komplex(double re, double im)
{
	set_re(re);//Setzt Realteil
	set_im(im);//Setzt Imaginärteil
}

void Komplex::set_re(double re)
{
	re_ = re;//setzt Realteil
}

void Komplex::set_im(double im)
{
	im_ = im;//setzt Imaginärteil
}

double Komplex::get_re(void) const
{
	return re_;//Gibt Realteil zurück
}

double Komplex::get_im(void) const
{
	return im_;//Gibt Imaginärteil zurück
}

double Komplex::get_r(void) const
{
	return sqrt(re_*re_+im_*im_);//Bildet Betrag durch ziehen der Wurzel aus der Addition der Quadrate
}

double Komplex::get_phi(void) const
{
	return (atan((im_/re_)) + ((re_<0)?3.14:0.0));//Berechnet phi mit arcustangens und addiert einen Korrekturfaktor wenn nötig
}

Komplex Komplex::add(Komplex &k)
{
	Komplex a(get_re()+k.get_re(), get_im() + k.get_im());//Addiert jeweils die Realteile und die Imaginärteile
	return a;
}

Komplex Komplex::sub(Komplex &k)
{
	Komplex a(get_re()-k.get_re(), get_im() - k.get_im());//Subtrahiert jeweils die Realteile und die Imaginärteile
	return a;
}

void Komplex::ausgabe(void)
{
	std::cout << get_re() << " + j*" << get_im() << "\n";//Gibt den Realteil und den Imaginärteil aus
}

Komplex Komplex::multi(Komplex & k)
{
	Komplex a(get_re() * k.get_re() - get_im() * k.get_im(), get_re() * k.get_im() + get_im() * k.get_re());
	return a;//Multipliziert zwei Komplexe Zahlen und addiert die Realteile und Imaginärteil zusammen
}

Komplex Komplex::konj(void)
{
	return Komplex(get_re(), - get_im());//Bildet die konjungiert Komplexe durch Negierung des Imaginärteils
}

Komplex Komplex::operator+(const Komplex & re)
{
	return Komplex(get_re() + re.re_, get_im() + re.im_);//Addiert jeweils die Realteile und die Imaginärteile
}

Komplex::~Komplex(void)
{
}


Komplex operator*(const Komplex & li, const Komplex & re)
{
	return Komplex (li.get_re()* re.re_ - li.im_ * re.im_, li.re_ * re.im_ + li.im_ * re.re_);
}//Mulitplikation der zwei Komplexen Zahlen und adition der Realteile und Imaginärteile

ostream & operator<< (ostream & o, const Komplex & k)
{
	return o<< k.re_ << " + j*" << k.im_ << "\n";
}//Überladung des Ausgabe Operator

istream & operator>> (istream & i, Komplex & k)
{
	return i >> k.re_ >> k.im_;//Überladung des Eingabeoperators
}

Komplex operator* (double d, const Komplex & k)
{
	return Komplex (d*k.re_, d*k.im_);//Multiplikation einer Kommazahl mit einer Komplexen Zahl
}

Komplex Komplex::operator+=(const Komplex & k)
{
	set_re(get_re() + k.get_re());//Addition der Realteile
	set_im(get_im() + k.get_im());//Addition der Imaginärteile
	return Komplex (get_re(), get_im());
}
