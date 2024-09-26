#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class asd{
	private:
		int edad;
		vector <int> vec;
	public:
		asd() {
			cout<<"Ingrese la edad: ";
			cin>>edad;
			
			for(int i=0; i<5; i++)
			{
				int val=0;
				
				cout<<"Ingrese un valor para el vector: ";
				cin>>val;
				vec.push_back(val);
			}
		}
		
		void imprimir();
        void imprimir(int hasta);
        void imprimir(int desde,int hasta);
        void age();
        void MdE();
};

void asd::imprimir(){
	for(int i=0; i<vec.size(); i++)
	{
		cout<<vec[i]<<endl;
	}
}
 void asd::imprimir(int hasta){
	if (hasta>vec.size()) hasta=vec.size();
    for (int i=0; i<hasta; ++i) {
        cout<<vec[i]<<endl;
    }
}
 void asd::imprimir(int desde, int hasta){
	if (hasta>vec.size()) hasta=vec.size();
	for(int i=desde-1; i<hasta; i++) {
		cout<<vec[i]<<endl;
	}
}
void asd::age(){
	cout<<"Edad: "<<edad<<endl;
	MdE();
}
void asd::MdE(){
	if(edad>=18)
	{
		cout<<"Es mayor de edad"<<endl;
	}
	else
	{
		cout<<"Es menor de edad"<<endl;
	}
}

int main()
{
	int h, d;
	asd a;
	cout<<endl;
	a.imprimir();
	cout<<endl;
	cout<<"Ingrese un valor hasta donde imprimir"<<endl;
	cin>>h;
	cout<<endl;
	a.imprimir(h);
	cout<<endl;
	h=0;
	cout<<"Ingrese un valor desde y hasta donde imprimir: "<<endl;
	cin>>d;
	cin>>h;
	cout<<endl;
	a.imprimir(d, h);
	cout<<endl;
	a.age();
	
	return 0;
}
