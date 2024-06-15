#include "SistemaGestionCitas.h"
#include <algorithm>

void SistemaGestionCitas::agregarPaciente(const Paciente &paciente)
{
    listaPacientes.push_back(paciente);
}

void SistemaGestionCitas::agregarCita(const Cita &cita)
{
    listaCitas.push_back(cita);
    sort(listaCitas.begin(), listaCitas.end());
}

void SistemaGestionCitas::mostrarCitas() const
{
    for (const auto &cita : listaCitas)
    {
        cita.mostrarCita();
    }
}
