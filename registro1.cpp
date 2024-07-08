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
		cin>>empleados[i].nombres;	
		cout<<"SEXO DEL EMPLEADO NUMERO "<<i+1<<": "<<endl<<"MASCULINO/FEMENINO"<<endl;
		cin>>empleados[i].sexo;
		//cout<<campo1.nombres<<endl;
		cout<<"SUELDO DEL EMPLEADO NUMERO "<<i+1<<": "<<endl;
		cin>>empleados[i].sueldo;
	}
	int menor=emplados[0].sueldo;
	
	for(int i=0;i<n;i++){
		if(menor<empleados[1].sueldo){
			em	
		}
	}
	
	
	
	
	
	return 0;
}