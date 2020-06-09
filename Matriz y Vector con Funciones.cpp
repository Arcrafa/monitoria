#include<iostream>
using namespace std;
const int tope = 100; 
int multy(int vector[tope], int tam){
	int multiplicacion = 1;
	cout << "Valores negativos en el vector: ";
	for(int i = 0;i < tam;i++){
		if(i % 2 == 0 && vector[i] > 0){
			multiplicacion *= vector[i];
		}
		if(vector[i] < 0){
			cout << vector[i] << endl;
		}
	}
	
	return multiplicacion;
}
float porcen(int matrix [tope][tope], int f, int c){
	float porcentaje = 0;
	int n = 0;
	for(int j = 0;j < f; j++){
		for(int k = 0;k < c; k++){
			if (k % 2 == 0){
				if (matrix[j][k] < 5){
					porcentaje +=matrix[j][k];
					n++;
				}
			}		
		}
	}
	float promedio = porcentaje / n;
	return promedio;
}

main(){
	int v = 0;
	cout << "Digite el tamaño del vector: ";
	cin >> v;
	int multiplicacion=1;
	int vec[tope];
	for(int i = 0;i < v;i++){
		cout << "Digite el valor de la posición" << i+1 <<endl;
		cin >> vec[i];
		
	}
	for(int i = 0;i < v;i++){
		multiplicacion=vec[i]*multiplicacion;
		
	}
	
	int f = 0, c = 0; 	
	cout << "\nDigite el tamaño de las filas de la matriz ";
	cin >> f;
	cout << "\nDigite el tamaño de las columnas de la matriz ";
	cin >> c;
	int matriz[tope][tope];
	int suma = 0;
	for(int j = 0;j < f; j++){
		for(int k = 0;k < c; k++){
			cout << "Digite el valor de la matriz en la pocisión " << j<<" " << k <<endl;
			cin >> matriz[j][k];
			suma += matriz[j][k];			
		}
	}
	for(int j = 0;j < f; j++){
		for(int k = 0;k < c; k++){
			
			suma += matriz[j][k];			
		}
	}
	if (suma > multiplicacion){
		cout<<porcen(matriz, f, c)<<endl;
	}
	else{
		cout<<multy(vec, v)<<endl;
	}	
}

