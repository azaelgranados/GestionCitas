#include "Paciente.h"
#include <iostream>

Paciente::Paciente(const string &nombre, const string &telefono, const string &direccion)
    : nombre(nombre), telefono(telefono), direccion(direccion) {}

void Paciente::agregarTratamiento(const Tratamiento &tratamiento)
{
    tratamientos.push_back(tratamiento);
}

void Paciente::mostrarInformacion() const
{
    cout << "Nombre: " << nombre << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Tratamientos: " << endl;
    for (const auto &tratamiento : tratamientos)
    {
        cout << "  - " << tratamiento.getDescripcion() << " en " << tratamiento.getFecha() << endl;
    }
}

string Paciente::getNombre() const
{
    return nombre;
}