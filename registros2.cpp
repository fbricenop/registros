#include <iostream>
#include <string>
#include <clocale>
using namespace std; 

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int n,mas50=0,promedio=0;
	cout<<"INGRESE LA CANTIDAD DE PERSONAS: ";
	cin>>n;
	struct persona{
		string nombre;
		string dni;
		int edad;
	}personas[n];
	for(int i=0; i<n; i++){
		cin.ignore();
		cout<<"INGRESE EL NOMBRE DE LA "<<i+1<<"° PERSONA: "<<endl;
		getline(cin, personas[i].nombre);
		cout<<"INGRESE EL DNI DE LA "<<i+1<<"° PERSONA: "<<endl;
		getline(cin,personas[i].dni);
		cout<<"INGRESE LA EDAD DE LA "<<i+1<<"° PERSONA: "<<endl;
		cin>>personas[i].edad;
		promedio+=personas[i].edad;
	}
	for(int i=0; i<n;i++){
		if(personas[i].edad>50){
			mas50++;
		}
	}
	cout<<endl<<"PERSONAS MAYORES A 50 AÑOS: "<<mas50<<endl;
	cout<<"EL PROMEDIO DE LAS EDADES DE TODAS LAS PERSONAS ES: "<<promedio/n<<endl;
	for(int i=0; i<n;i++){
		cout<<"NOMBRE DE LA PERSONA NUMERO "<<i+1 << personas[i].nombre<<endl;
		cout<<"DNI DE LA PERSONA NUMERO "<<i+1 << personas[i].dni<<endl;
		cout<<"EDAD DE LA PERSONA NUMERO "<<i+1 << personas[i].edad<<endl;
	}
	return 0;
}
