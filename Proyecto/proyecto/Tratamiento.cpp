#include "Tratamiento.h"

Tratamiento::Tratamiento(const string &descripcion, const string &fecha) : descripcion(descripcion), fecha(fecha) {}

string Tratamiento::getDescripcion() const
{
    return descripcion;
}

string Tratamiento::getFecha() const
{
    return fecha;
}
