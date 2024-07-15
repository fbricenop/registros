#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");

	int n,month; 
	cout<<"INGRESE LA CANTIDAD DE PERSONAS: ";
	cin>>n;
	struct meses{
		string nombre;
		int fecha;
		int mes;
		int year;
	}persona[n];
	
	for(int i=0;i<n;i++){
		cin.ignore();
		cout<<"INGRESE EL NOMBRE DE LA "<<i+1<<"° PERSONA: "<<endl;	
		getline(cin, persona[i].nombre);
		cout<<"INGRESE LA FECHA DE NACIMIENTO DE LA "<<i+1<<"° PERSONA: "<<endl;	
		cin>>persona[i].fecha;
		cout<<"INGRESE EL MES DE NACIEMIENTO DE LA "<<i+1<<" ° PERSONA: "<<endl;
		cin>>persona[i].mes;
		cout<<"INGRESE EL AÑO DE NACIEMIENTO DE LA "<<i+1<<" ° PERSONA: "<<endl;
		cin>>persona[i].year;
	}
	
	do{
		cout<<"\nINGRESE EL MES DE NACIMIENTO"<<endl;
		cin>>month;
		for(int i=0;i<n;i++){
			if(persona[i].mes==month){
				cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
			}
		}
	}while(month!=0);
	return 0;
}
