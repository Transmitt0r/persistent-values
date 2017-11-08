#include "Komplex.h"
#include<math.h>
#include<iostream>

using namespace std;
Komplex::Komplex(double re, double im)
{
	set_re(re);
	set_im(im);
}

void Komplex::set_re(double re)
{
	re_ = re;
}

void Komplex::set_im(double im)
{
	im_ = im;
}

double Komplex::get_re(void) const
{
	return re_;
}

double Komplex::get_im(void) const
{
	return im_;
}

double Komplex::get_r(void) const
{
	return sqrt(re_*re_+im_*im_);
}

double Komplex::get_phi(void) const
{
	return (atan((im_/re_)) + ((re_<0)?3.14:0.0));
}

Komplex Komplex::add(Komplex &k)
{
	Komplex a(get_re()+k.get_re(), get_im() + k.get_im());
	return a;
}

Komplex Komplex::sub(Komplex &k)
{
	Komplex a(get_re()-k.get_re(), get_im() - k.get_im());
	return a;
}

void Komplex::ausgabe(void)
{
	std::cout << get_re() << " + j*" << get_im() << "\n";
}

Komplex Komplex::multi(Komplex & k)
{
	Komplex a(get_re() * k.get_re() - get_im() * k.get_im(), get_re() * k.get_im() + get_im() * k.get_re());
	return a;
}

Komplex Komplex::konj(void)
{
	return Komplex(get_re(), - get_im());
}

Komplex Komplex::operator+(const Komplex & re)
{
	return Komplex(get_re() + re.re_, get_im() + re.im_);
}

Komplex::~Komplex(void)
{
}


Komplex operator*(const Komplex & li, const Komplex & re)
{
	return Komplex (li.get_re()* re.re_ - li.im_ * re.im_, li.re_ * re.im_ + li.im_ * re.re_);
}

ostream & operator<< (ostream & o, const Komplex & k)
{
	return o<< k.re_ << " + j*" << k.im_ << "\n";
}

istream & operator>> (istream & i, Komplex & k)
{
	return i >> k.re_ >> k.im_;
}

Komplex operator* (double d, const Komplex & k)
{
	return Komplex (d*k.re_, d*k.im_);
}

Komplex Komplex::operator+=(const Komplex & k)
{
	set_re(get_re() + k.get_re());
	set_im(get_im() + k.get_im());
	return Komplex (get_re(), get_im());
}
