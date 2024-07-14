#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int n,cantidad=0;
	cout<<"INGRESE LA CANTIDAD DE ATLETAS: ";
	cin>>n;
	struct info{
		string nombre;
		string pais;
		string disciplina;
		int medallas;
		
	}atleta[n];
	
	for(int i=0; i<n;i++){
		cin.ignore();
		cout<<"INGRESE EL NOMBRE DEL "<<i+1<<"° ATLETA: "<<endl;	
		getline(cin, atleta[i].nombre);
		cout<<"INGRESE EL PAIS DEL "<<i+1<<"° ATLETA: "<<endl;	
		getline(cin, atleta[i].pais);
		cout<<"INGRESE LA DISCIPLINA DEL "<<i+1<<"° ATLETA: "<<endl;	
		getline(cin, atleta[i].disciplina);
		cout<<"INGRESE LA CANTIDAD DE MEDALLAS DEL "<<i+1<<"° ATLETA: "<<endl;	
		cin>>atleta[i].medallas;
		system("cls");
	}
	string paiss;
	cout<<"LOS PAISES DE LOS ATLETAS INGRESADOS FUERON: "<<endl;
	for(int i=0; i<n; i++){
		cout<<atleta[i].pais<<endl;
	}
	cout<<"INGRESE EL PAÍS DEL ATLETA: ";
	cin.ignore();
	getline(cin,paiss);
	for(int i=0;i<n;i++){
		if(paiss==atleta[i].pais){
			if(atleta[i].medallas>cantidad){
				cantidad=atleta[i].medallas;
			}
			//indicar el atleta con mas medallas de ese pais 
		}
	}
	cout<<"El ATLETA CON MAS MEDALLAS DEL PAIS DE: "<<paiss<< ",CON UNA CANTIDAD DE: "<<cantidad<< " MEDALLAS";	
	return 0;
}
