#include <iostream>
#include <string>

using namespace std;

// Enumeración tipo de animales
enum Tipoanimal {
    nombre,
    peso,
    tamanio,
    color,
    
};

// Clase animal
class animal {
private:
    string nombre;
    string peso;
    double tamanio;
    Tipoanimal;

public:
    // Constructor
    animal(const string& nom, const string& desc, double prec, Tipoanimal) : nombre(nom),
	 peso(peso), tamanio(tamanio), tipoanimal(tipo) {}

    //acceder a los atributos
    string getNombre() const { return nombre; }
    string getpeso() const { return peso; }
    double tamanio() const { return tamanio; }
    Tipoanimal getTipoanimal() const { return tipoanimal; }

   
    // Mmostrar información del animal
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "peso: " << descripcion << endl;
        cout << "tamanio: " << precio << endl;
        cout << "tipoanimal: ";
        switch (tipoanimal) {
            case animal:
                cout << "nombre" << endl;
                break;
            case peso:
                cout << "peso" << endl;
                break;
            case tamanio:
                cout << "tamanio" << endl;
                break;
            case tipoanimal:
                cout << "tipoanimal" << endl;
                break;
        }
    }
};

int main() {
    // Crear una instancia de la clase animal
    animal1("vaca", "300", 1.20, nombre);

    // Mostrar información del animal
    animal1.mostrarInformacion();

    return 0;
}

