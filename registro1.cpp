#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	struct empleado{
		string nombres;
		double sueldo;
		string sexo;
	}campo1,campo2,campo3;
	cout<<"INGRESE LA CANTIDAD DE EMPLEADOS: ";
	cin>>n;
	int empleados[n];
	for(int i=0;i<n;i++){
		cout<<"NOMBRE DEL EMPLEADO NUMERO "<<i+1<<": "<<endl;
		cin>>campo1.nombres;	
		cout<<"SEXO DEL EMPLEADO NUMERO "<<i+1<<": "<<endl;
		cin>>campo2.sexo;
		//cout<<campo1.nombres<<endl;
		cout<<"SUELDO DEL EMPLEADO NUMERO "<<i+1<<": "<<endl;
		cin>>campo3.sueldo;
	}
	for(int i=0;i<n;i++){
		for(int i=0;i<n;i++){
			//if()
		}
	}
	
	
	
	
	
	return 0;
}