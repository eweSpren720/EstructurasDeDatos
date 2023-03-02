#include <iostream>
#include <vector>

using namespace std;

class Estudiante {
public:
    Estudiante(string nombre, int id) : nombre_(nombre), id_(id) {}
    string nombre() const { return nombre_; }
    int id() const { return id_; }
    int calificacion() const { return calificacion_; }
    void set_calificacion(int calificacion) { calificacion_ = calificacion; }
private:
    string nombre_;
    int id_;
    int calificacion_ = 0;
};

int main() {
    vector<Estudiante> lista_estudiantes;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1.- Agregar estudiante" << endl;
        cout << "2.- Actualizar calificacion" << endl;
        cout << "3.- Buscar estudiante por id" << endl;
        cout << "4.- Salir" << endl;
        cout << "Ingresa una opcion: ";
        int o;
        cin >> o;

        if (o == 1) {
            cout << "Ingresa el nombre: ";
            string nombre;
            cin >> nombre;

            cout << "Ingresa el id: ";
            int id;
            cin >> id;

            Estudiante estudiante(nombre, id);

            cout << "Ingresa la calificacion: ";
            int calificacion;
            cin >> calificacion;

            estudiante.set_calificacion(calificacion);

            lista_estudiantes.push_back(estudiante);

            cout << "Estudiante agregado" << endl;
        } else if (o == 2) {
            cout << "Ingrese el id: ";
            int id;
            cin >> id;

            bool encontrado = false;
            for (auto& estudiante : lista_estudiantes) {
                if (estudiante.id() == id) {
                    encontrado = true;
                    int calificacion;
                    cout << "Ingresa nueva calificacion: ";
                    cin >> calificacion;
                    estudiante.set_calificacion(calificacion);
                    cout << "Calificacion actualizada" << endl;
                    break;
                }
            }

            if (!encontrado) {
                cout << "Estudiante no encontrado." << endl;
            }
        } else if (o == 3) {
            cout << "Ingresa el id del estudiante: ";
            int id;
            cin >> id;

            bool encontrado = false;
            for (auto& estudiante : lista_estudiantes) {
                if (estudiante.id() == id) {
                    encontrado = true;
                    cout << "Nombre: " << estudiante.nombre() << endl;
                    cout << "Calificacion: " << estudiante.calificacion() << endl;
                    break;
                }
            }

            if (!encontrado) {
                cout << "Estudiante no encontrado" << endl;
            }
        } else if (o == 4) {
            break;
        } else {
            cout << "Opcion invalida" << endl;
        }
    }
    return 0;
}

