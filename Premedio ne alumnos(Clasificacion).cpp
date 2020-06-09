#include <stdio.h>
#include <conio.h>
#include <iostream>


using namespace std;
string listaAlumnas="";
string listaAlumnos="";
int main(){
	
	int cant,i,peso,sexo,poblacionfemenina=0,poblacionmasculina=0;
	float numchicas=0, numchicos=0,altura, prom1, prom2; 
	string nombre;
	string aux;
	printf("Por favor escriba cuantos alumnos desea ingresar al programa: ");
	scanf("%d", &cant);
	
	for(i=1; i<=cant;i++){
		printf("ingrese el nombre del o la estudiante");
		cin>>nombre;
		printf("Cuanto mide el alumno: ");
		scanf("%f", &altura);
		printf("Escriba 1 si es hombre o 2 si es mujer: ");
		scanf("%d", &sexo);
		printf("Escriba cuanto pesa el alumno: ");
		scanf("%d", &peso);
		if((sexo==2)&&(altura>=1.73)&&(peso>=50)&&(peso<=83)){
			numchicas++;
			poblacionfemenina++;
			aux==listaAlumnas+"la estudiante "+nombre+" es apta";
			listaAlumnas=aux;
		}
		else{
			poblacionfemenina++;
		}
		if((sexo==1)&&(altura>=1.83)&&(peso>=73)&&(peso<=105)){
			cout<<"llega aqui2"<<endl;
			numchicos++;
			poblacionmasculina++;
			aux=listaAlumnos+"el estudiante "+nombre+" es apto";
			listaAlumnos=aux;
		}	
		else{
			poblacionmasculina++;
		}
	}
	
	//mira men esto es un try catch es para evitar que el programa se explote cuando ocurre algun error como en el caso de la division  x/0
	try{
		//pones el bloque de codigo que es posible que explote dentro del try ,try significa lansar es como si haces el intento de arrojar estas ordenes a ves si te las resive bien pc o no
	prom2 = (float)(numchicas/poblacionfemenina)*100;
	prom1 = (float)(numchicos/cant)*100;
	
	}catch(...){
		//en caso de que el programa que esta dentro del try explote el cath que significa atrapar es como resivir el error que devuelve la pc y hacer algo en caso de que ocurra
		cout<<"error de division"<<endl;
	}
	printf("El porcentaje de alumnas con estas aptitudes de la poblacion estudiantil femenina es:%2.f \n",prom2);
	printf("El porcentaje de alumnos con estas aptitudes de la poblacion estudiantil total es:%2.f ", prom1);
	printf("las estidiantes aptas son \n");
	cout<<listaAlumnas<<endl;
	printf("los estidiantes aptos son \n");
	cout<<listaAlumnos;
	
	return 0;
	
	
}
