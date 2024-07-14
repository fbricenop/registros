#include <iostream>
#include <string>
#include <clocale>
using namespace std; 

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int n,x,comparador=0;
	double menor=999999999;
	cout<<"INDIQUE LA CANTIDAD DE EMPLEADOS EN DataTech : ";
	cin>>n;
	
	struct empleado{
		string nombre;
		string sexo;
		double sueldo;
	}empleados[n];

	for(int i=0; i<n;i++){
		cin.ignore();
		cout<<"INGRESE EL NOMBRE DEL "<<i+1<<"° EMPLEADO: "<<endl;
		getline(cin,empleados[i].nombre);
		cout<<endl<<"INGRESE EL SEXO DEL "<<i+1<<"° EMPLEADO"<<endl<<"1)MASCULINO"<<endl<<"2)FEMININO"<<endl;
		cin>>x;
		switch(x){
			case 1:{
				empleados[i].sexo="MASCULINO";
				break;
			}
			case 2:{
				empleados[i].sexo="FEMENINO";
				break;
			}
		}
		cout<<"INGERSE EL SUELDO DEL "<<i+1<<"° EMPLEADO"<<endl; 
		cin>>empleados[i].sueldo;
	}
	
	for(int i=0;i<n;i++){
		if(empleados[i].sueldo>comparador){
			comparador=empleados[i].sueldo;
		}
	}
	
	for(int i=0;i<n;i++){
		if(empleados[i].sueldo<menor){
			menor=empleados[i].sueldo;
		}
	}
	
	cout<<"EL MAYOR SUELDO ES: "<<comparador<<endl;
	cout<<"EL MENOR SUELDO ES: "<<menor<<endl;
	
	//recorrer el arreglo empleados[n] con un for y dentro un condicional que evalue con una variable inciada en 0
	
}
