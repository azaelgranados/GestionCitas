#include "Cita.h"
#include <iostream>

Cita::Cita(const string &fecha, const string &hora, const Paciente &paciente)
    : fecha(fecha), hora(hora), paciente(paciente) {}

void Cita::mostrarCita() const
{
    cout << "Fecha: " << fecha << ", Hora: " << hora << ", Paciente: " << paciente.getNombre() << endl;
}

bool Cita::operator<(const Cita &other) const
{
    return fecha < other.fecha;
}

string Cita::getFecha() const
{
    return fecha;
}
