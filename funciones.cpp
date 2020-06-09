#include<iostream>


using namespace std;

float alumnos(int R){
	
	int nota [R];
	int codigo [R];
	int nestudiantes = 0;
	int sumnotas = 0; 
	for (int i = 0;i < R;i++){
		cout << "Digite el código del alumno: ";
		cin >> codigo[i];
		cout << "Digite la nota del alumno: ";
		cin >> nota[i]; 
		
	}
	for( int i=0;i<R;i++){
		if(nota[i] > 450){
			cout << "Código de alumno con nota mayor a 450 ";
			cout << codigo[i] << endl;
		}
		else if(nota[i] <300){
			sumnotas+= nota[i];
			nestudiantes++;
		}
	}
	float promedio = 0;
	promedio = sumnotas/nestudiantes;
	return 0;
}

void peaje(int P){
	int cantidad;
	int mayor = 0;
	bool existe= false;
	for(int i = 0;i < P;i++){
		cout << "Digite la cantidad de pasajeros del auto ";
		cin >> cantidad;
		if(cantidad > mayor || mayor == 0){
			mayor = cantidad;
		}
		if(cantidad == 6 || cantidad == 7){
			existe = true;
		}
	}
	if (existe){
		cout << "Si existe.";
	}
	else{
		cout << "No existe.";
	}
}


int main(){
	

	int P ;
	cout << "Ingrese la cantidad de vehiculos que pasaron por el peaje ";
	cin >> P;
	peaje(P);
	
	int R;
	cout << "Ingrese la cantidad de alumnos a ser registrados ";
	cin >> R;
	float promedio;
	promedio=alumnos(R);
	cout << endl << "Promedio de notas inferiores a 300 "<<promedio;
	return 0;
	
}
