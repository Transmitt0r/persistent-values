#pragma once
class Fahrzeug
{
public:
	Fahrzeug(void);
	Fahrzeug(double _g);
	Fahrzeug(const Fahrzeug & r);
	double get_gewicht() const;
	void set_gewicht(double _g);
	Fahrzeug operator = (Fahrzeug);
	~Fahrzeug(void);
protected:
	double* gewicht;
};

