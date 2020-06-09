#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(){
	
	int tipo=0, numpersonas=0, conductor=0, pormixto=0, perbus=0, a=0;
    //variable para contar el numero de buses
    int numbuses=0;
    //la variable que guardara un promedio debe ser decimal no tiene que iniciar en 0
    float promediopersonas;
	cout<<("Dijite cuantos vehiculos pasaran hoy: ");
	cin>>a;
	
		while(a>0){
		
		a = a-1;
	
		cout<<("\nIngrese 1 si es un Auto \nIngrese 2 si es una Buseta\nIngrese 3 si es un Mixto: ");
		cin>>tipo;
		cout<<("\nPorfavor diga la cantidad de personas dentro del vehiculo: ");
		cin>>numpersonas;
	
		if((tipo==1)and(numpersonas==1)){
			conductor++;
		}
		if(tipo==3){
			pormixto = pormixto + numpersonas;
		}
		if(tipo==2){
			perbus= numpersonas + perbus;
			numbuses++;
		}
		
	}
	promediopersonas = perbus/numbuses;
	cout<< "El total de personas que van en los Mixtos es: "<< pormixto;
	cout<< "\nEl total de personas que van solos es: "<<conductor;
	cout<< "\nEl promedio de personas que van en Busetas es: "<< promediopersonas;
	
	
	getch();
	return 0;
}
