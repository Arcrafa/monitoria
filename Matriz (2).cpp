/*Realizar un programa en  C++ que el usuario indique el tamaño  de una matriz (filas y columnas), 
llene dicha matriz con valores enteros y adicionalmente  el programa debe mostrar:

    Los valores múltiplos de 3
    El promedio de los valores positivos ubicados en columnas pares 
    El  Mayor valor entre los valores negativos ingresados a la matriz.
*/
#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	//setlocale(LC_ALL,"");
	int f;
	cout << "Digite el número de filas que tendrá la matriz: ";
	cin >> f;
	while (f < 0){
		cout << "Digite un número mayor a 0. \n";
		cin >> f;
	}	
	int c;
	cout << "Digite el número de columnas que tendrá la matriz: ";
	cin >> c;
	while (c <= 0){
		cout << "Digite un número mayor a 0. \n";
		cin >> c;
	}
	
	int matriz[f+1][c+1];
	for(int i = 1;i <= f;i++){
		for(int j = 1;j <= c;j++){
			cout << "Digite el número de la posición [" << i << "][" << j << "] ";
			cin >> matriz[i][j];
				
		}	
	}
	
	cout << "Números multiplos de tres (3) en la matriz: ";
		for(int i = 1;i <= f;i++){
			for(int j = 1;j <= c;j++){
				if(matriz[i][j] % 3 == 0){
				cout << "[" << matriz[i][j] << "]";	
				}	
			}	
		}
	int sumPos = 0, count = 0;
	for(int i = 0;i < f;i++){
		for(int j = 0;j < c;j++){
			if(matriz[i][j] > 0 && j % 2==0){
				sumPos += matriz[i][j]; 
				count++;
			}
		}	
	}
	int prom = sumPos / count;
	cout << "\nPromedio de valores positivos en columnas pares: " << prom << endl;
	int mayor = 0;
	for(int i = 1;i <= f;i++){
		for(int j = 1;j <= c;j++){
			if(matriz[i][j] < 0){
				if(matriz[i][j] > mayor){
					mayor = matriz[i][j];
				}
				if(mayor==0){
					mayor = matriz[i][j];
				}
			}
		}	
	}
	cout << "Mayor valor entre los negativos de la matriz: " << mayor << endl;


	return 0;
}

