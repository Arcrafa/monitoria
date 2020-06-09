/*
Realizar un programa en  C++ que el usuario indique el tamaño  de una matriz (filas y columnas), llene dicha matriz con valores enteros y adicionalmente  el programa debe mostrar:

Los valores múltiplos de 3
El promedio de los valores positivos ubicados en columnas pares 
El  Mayor valor entre los valores negativos ingresados a la matriz.
*/

#include <iostream>
using namespace std;


int main (){
	int filas,columnas;
	
	cout<<"ingrese el numero de filas"<<endl;
	cin>>filas;
	
	cout<<"ingrese el numero de columnas"<<endl;
	cin>>columnas;
	
	int matriz[filas][columnas];
	
	int suma=0,cant=0;
	
	int multiplos[filas*columnas],indice=0;
	
	int mayorN=0;
	for (int x=0;x<filas;x++){
		for(int y=0;y<columnas;y++){
			cout<<"ingrese el valor de la fila: "<<x<<" y columna: "<<y<<endl;
			cin>>matriz[x][y];		
		}
	}
	for (int x=0;x<filas;x++){
		for(int y=0;y<columnas;y++){
			
			cout<<matriz[x][y];
			if(matriz[x][y]%3==0){
				
				multiplos[indice]=matriz[x][y];
				indice++;
			}
			if(x%2!=0 && matriz[x][y]%2!=0){
				cant++;
				suma+=matriz[x][y];
			}
			if((matriz[x][y]<0 && mayorN==0)||(matriz[x][y]<0 && mayorN!=0 && matriz[x][y]>mayorN)) mayorN=matriz[x][y];
			
			
		}
		cout<<endl;
	}
	cout<<"los valores multiplos de 3 son: [";
	for(int x=0;x<indice;x++){
		cout<<multiplos[x]<<",";
	}
	cout<<"]"<<endl;
	
	
	cout<<"El promedio de los valores positivos ubicados en columnas pares es: "<<suma/cant<<endl;
	
	cout<<"El  Mayor valor entre los valores negativos ingresados a la matriz es: "<<mayorN<<endl;
	
	return 0;
}
