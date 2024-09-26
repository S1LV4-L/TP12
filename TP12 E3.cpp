#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Punto{
	private:
		int x;
		int y;
	public:
		Punto();
	    Punto(int xx, int yy);
		void imprimir();
};

Punto::Punto(){
	x=0;
	y=0;
}
Punto::Punto(int xx, int yy){
	x=xx;
	y=yy;
}

void Punto::imprimir(){
	cout<<endl;
	cout<<"X: "<<x<<endl;
	cout<<"Y: "<<y<<endl;
}

int main()
{
	Punto a;
	a.imprimir();
	Punto b(3, 6);
	b.imprimir();
	
	return 0;
}
