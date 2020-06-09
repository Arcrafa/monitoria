/*Taller 1 sobre Funciones

Realizar un programa en  C++ que lea 2 valores enteros: R y P, y adicionalmente que invoque las siguientes 2 funciones:

Función 1: deberá recibir como parámetro de entrada el valor R que indica la cantidad de alumnos a ser evaluados; 
en la funcion por cada alumno se ingresará su nota y su código. La función debe mostrar el código de los alumnos con notas mayor a 450 
y retornará el promedio de notas menores a 300 (mostrar promedio  en el Main)

Función 2: deberá recibir como parámetro de entrada el valor P que indica el numero de vehículos que pasan por un peaje;
en la funcion por cada vehículoque pasa por el peaje se debe ingresar  el número de ocupantes.
La función debe mostrar el número mayor de ocupantes en un vehículo y finalmente imprimir  SI existe o NO existe vehículos con 6 o 7 ocupantes.  

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
		cout << "Digite el código del alumno: ";
		cin >> codigo[i];
		cout << "Digite la nota del alumno: ";
		cin >> nota[i]; 
		
	}
	for( int i=0;i<R;i++){
		if(nota[i] > 450){
			cout << "Código de alumno con nota mayor a cuatrocientos cincuenta (450): ";
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
