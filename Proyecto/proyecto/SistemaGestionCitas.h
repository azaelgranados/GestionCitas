
#include <vector>
#include "Cita.h"

using namespace std;

class SistemaGestionCitas
{
private:
    vector<Paciente> listaPacientes;
    vector<Cita> listaCitas;

public:
    void agregarPaciente(const Paciente &paciente);
    void agregarCita(const Cita &cita);
    void mostrarCitas() const;
};
