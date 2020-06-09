/*
Realizar un programa en  C++ que el usuario indique el tamaño  de una matriz (filas y columnas), llene dicha matriz con valores enteros y adicionalmente  el programa debe:

CREAR un primer vector con los valores negativos  ubicados en columnas impares.
CREAR un segundo vector con las sumas de cada fila par de la matriz.
MOSTRAR   los  elementos  de cada uno de los vectores obtenidos
*/

#include <iostream>
using namespace std;

int main(){
	
	int filas,columnas;
	
	cout<<"ingrese el numero de filas"<<endl;
	cin>>filas;
	
	cout<<"ingrese el numero de columnas"<<endl;
	cin>>columnas;
	
	int matriz[filas][columnas];
	
	int vector1[filas*columnas],indiceV1=0;
	int vector2[columnas],indiceV2=0;
	
	for (int x=0;x<filas;x++){
		for(int y=0;y<columnas;y++){
			cout<<"ingrese el valor de la fila: "<<x<<" y columna: "<<y<<endl;
			cin>>matriz[x][y];		
		}
	}
	
	cout<<"paso 1"<<endl;
	for (int x=0;x<filas;x++){
		for(int y=0;y<columnas;y++){
			
			if(x%2!=0 && matriz[x][y]<0){
				vector1[indiceV1]=matriz[x][y];
				indiceV1++;
			}			
		}
		
	}
	cout<<"paso 2"<<endl;
	for(int y=0;y<columnas;y++){
		vector2[indiceV2]=0;
		for (int x=0;x<filas;x++){
			if(y%2==0){
				cout<<"paso 2.1"<<endl;	
				vector2[indiceV2]+=matriz[y][x];
			}
			

						
		}
		
		indiceV2++;
		
	}
	cout<<"paso 3"<<endl;
	cout<<"el vector uno es: [";
	for(int x=0;x<indiceV1;x++){
		cout<<vector1[x]<<",";
	}
	cout<<"]"<<endl;
	
	cout<<"el vector dos es: [";
	for(int x=0;x<indiceV2;x++){
		cout<<vector2[x]<<",";
	}
	cout<<"]"<<endl;
	
	return 0;
}



