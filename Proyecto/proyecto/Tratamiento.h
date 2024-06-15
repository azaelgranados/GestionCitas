
#include <string>

using namespace std;

class Tratamiento
{
private:
    string descripcion;
    string fecha;

public:
    Tratamiento(const string &descripcion, const string &fecha);
    string getDescripcion() const;
    string getFecha() const;
};
