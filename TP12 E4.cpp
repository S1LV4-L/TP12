#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Socio{
	private:
		string nombre;
		int antig;
	public:
		Socio(){
			cout<<"Ingrese el nombre del socio: ";
			cin.ignore();
			getline(cin, nombre);
			cout<<"Ingrese la antiguedad del socio en el club: ";
			cin>>antig;
		}
		
		string getNombre() const{
			return nombre;
		}
		int getAntig() const{
		    return antig;
		}
};

class Club{
	Socio s1, s2, s3;
	
	public:
		Club() : s1(), s2(), s3() {}
		
		void MA();
};

void Club::MA(){
    Socio mayor=s1;
    
    if(s2.getAntig()>mayor.getAntig()) {
            mayor=s2;
        }
        if(s3.getAntig()>mayor.getAntig()) {
            mayor=s3;
        }
        
    cout<<"El socio mas antiguo es: "<<mayor.getNombre()<<" ("<<mayor.getAntig()<<" años de antiguedad)";
}

int main()
{
	Club a;
	cout<<endl;
	a.MA();
	
	return 0;
}
