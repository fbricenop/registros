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
		switch(month){
			case 1:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==1){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 2:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==2){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 3:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==3){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 4:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==4){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 5:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==5){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 6:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==6){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 7:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==7){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 8:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==8){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}	
				}
				break;
			}
			case 9:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==9){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 10:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==10){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 11:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==11){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
			case 12:{
				for(int i=0; i<n;i++){
					if(persona[i].mes==12){
						cout<<persona[i].nombre<<endl<<persona[i].fecha<<endl<<persona[i].mes<<endl<<persona[i].year<<endl;
					}
				}
				break;
			}
		}
	}while(month!=0);
	return 0;
}
