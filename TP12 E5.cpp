#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Persona{
	protected:
		string nombre;
		int edad;
	public:
		Persona(){
			cout<<"Ingrese el nombre de la persona: ";
			cin.ignore();
			getline(cin, nombre);
			cout<<"Ingrese la edad de la persona: ";
			cin>>edad;
		}
		void imprimirPersona() const {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
        }
};

class Empleado : public Persona{
	private:
		int sueldo;
	public:
		Empleado(){
			cout<<"Ingrese el sueldo del empleado: ";
			cin>>sueldo;
		}
		void imprimir() const {
			cout<<"Sueldo: "<<sueldo;
		}
};

int main()
{
	Persona a;
	a.imprimirPersona();
	Empleado aa;
	aa.imprimir();
	
	return 0;
}
