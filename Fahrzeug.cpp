#include "Fahrzeug.h"


Fahrzeug::Fahrzeug(void)
{
	gewicht = new double;
}

Fahrzeug::Fahrzeug(double _g)
{
	gewicht = new double;
	set_gewicht(_g);
}

Fahrzeug::Fahrzeug(const Fahrzeug & r)
{
	gewicht = new double;
	set_gewicht(r.get_gewicht());
}

double Fahrzeug::get_gewicht() const
{
	return *gewicht;
}

void Fahrzeug::set_gewicht(double _g)
{
	*gewicht = _g;
}

Fahrzeug Fahrzeug::operator=(Fahrzeug f)
{
	set_gewicht(f.get_gewicht());
	return f;
}

Fahrzeug::~Fahrzeug(void)
{
	delete gewicht;
}
