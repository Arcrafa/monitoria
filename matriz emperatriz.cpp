#include<iostream>
using namespace std;

int main(){
	
	int matriz [4][3], mayor=-999999 ,cont=0;
	
	
	for (int x=0;x<4;x++){
		for (int y=0;y<3;y++){
			cout<<"ingrese el dato para la posicion "<<x<<" "<<y<<endl;
			
			cin>>matriz[x][y];
			if(matriz[x][y]>mayor){
				mayor=matriz[x][y];
			}
		}	
	}
	
	for (int x=0;x<4;x++){
		for (int y=0;y<4;y++){
			cout<<matriz[x][y];
			if(matriz[x][y]==mayor){
				cont+=1;
			}
		}	
		cout<<endl;
	}
	cout<<"el numero mayor es: "<<mayor<<endl;
	cout<<" y se encuentra: "<<cont<<"veces en la matriz"<<endl;
	
	return 0;
}
