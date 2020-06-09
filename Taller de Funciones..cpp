/*Taller 1 sobre Funciones

Realizar un programa en  C++ que lea 2 valores enteros: R y P, y adicionalmente que invoque las siguientes 2 funciones:

Funci�n 1: deber� recibir como par�metro de entrada el valor R que indica la cantidad de alumnos a ser evaluados; 
en la funcion por cada alumno se ingresar� su nota y su c�digo. La funci�n debe mostrar el c�digo de los alumnos con notas mayor a 450 
y retornar� el promedio de notas menores a 300 (mostrar promedio  en el Main)

Funci�n 2: deber� recibir como par�metro de entrada el valor P que indica el numero de veh�culos que pasan por un peaje;
en la funcion por cada veh�culoque pasa por el peaje se debe ingresar  el n�mero de ocupantes.
La funci�n debe mostrar el n�mero mayor de ocupantes en un veh�culo y finalmente imprimir  SI existe o NO existe veh�culos con 6 o 7 ocupantes.  

*/
#include<iostream>
#include<locale.h>

using namespace std;
void peaje(int P);
float promAlumnos(int R);

int main(){
	setlocale(LC_ALL,"");

	int cantVehiculos = 0;
	cout << "Ingrese la cantidad de vehiculos que pasaron por el peaje: ";
	cin >> cantVehiculos;
	peaje(cantVehiculos);
	
	int cantAlumnos = 0;
	cout << "Ingrese la cantidad de alumnos a ser evaluados: ";
	cin >> cantAlumnos;
	system("cls");
	cout << endl << "Promedio de notas inferiores a trecientos(300): "<<promAlumnos(cantAlumnos);
	return 0;
}
void peaje(int P){
	int cantPer [P];
	int mayor = 0;
	bool existe= false;
	for(int i = 0;i < P;i++){
		cout << "Digite la cantidad de pasajeros del auto #"<< i+1<< ": ";
		cin >> cantPer[i];
		if(cantPer[i] > mayor || mayor == 0){
			mayor = cantPer[i];
		}
		if(cantPer[i] == 6 || cantPer[i] == 7){
			existe = true;
		}
	}
	if (existe){
		cout << "Si existe.";
	}
	else{
		cout << "No existe.";
	}
	system("pause");
	system("cls");
}


float promAlumnos(int R){
	int nota [R];
	int codigo [R];
	int cantE = 0;
	int sumnotas = 0; 
	for (int i = 0;i < R;i++){
		cout << "Digite el c�digo del alumno: ";
		cin >> codigo[i];
		cout << "Digite la nota del alumno: ";
		cin >> nota[i]; 
		
	}
	for( int i=0;i<R;i++){
		if(nota[i] > 450){
			cout << "C�digo de alumno con nota mayor a cuatrocientos cincuenta (450): ";
			cout << codigo[i] << endl;
		}
		else if(nota[i] <300){
			sumnotas+= nota[i];
			cantE++;
		}
	}
	float promedio = 0;
	promedio = sumnotas/cantE;
	
	
	return promedio;
}
