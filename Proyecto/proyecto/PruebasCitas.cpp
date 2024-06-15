#include <iostream>
#include "SistemaGestionCitas.h"
#include "Paciente.h"
#include "Tratamiento.h"
#include "Cita.h"

using namespace std;

int main()
{
    SistemaGestionCitas sistema;

    Paciente p1("Juan Perez", "555-1234", "Calle Falsa 123");
    Paciente p2("Ana Gomez", "555-5678", "Avenida Siempreviva 742");

    sistema.agregarPaciente(p1);
    sistema.agregarPaciente(p2);

    Tratamiento t1("Limpieza Dental", "2024-06-10");
    Tratamiento t2("Extracción de Molar", "2024-06-12");

    p1.agregarTratamiento(t1);
    p2.agregarTratamiento(t2);

    Cita c1("2024-06-20", "10:00", p1);
    Cita c2("2024-06-18", "12:00", p2);

    sistema.agregarCita(c1);
    sistema.agregarCita(c2);

    cout << "Citas Ordenadas por Fecha:" << endl;
    sistema.mostrarCitas();

    return 0;
}
