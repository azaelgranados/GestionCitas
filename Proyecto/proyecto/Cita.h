
#include <string>
#include "Paciente.h"

using namespace std;

class Cita
{
private:
    string fecha;
    string hora;
    Paciente paciente;

public:
    Cita(const string &fecha, const string &hora, const Paciente &paciente);
    void mostrarCita() const;
    bool operator<(const Cita &other) const;
    string getFecha() const;
};
