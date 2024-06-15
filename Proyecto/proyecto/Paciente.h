
#include <string>
#include <vector>
#include "Tratamiento.h"

using namespace std;

class Paciente
{
private:
    string nombre;
    string telefono;
    string direccion;
    vector<Tratamiento> tratamientos;

public:
    Paciente(const string &nombre, const string &telefono, const string &direccion);
    void agregarTratamiento(const Tratamiento &tratamiento);
    void mostrarInformacion() const;
    string getNombre() const;
};
