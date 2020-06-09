#include <iostream>
using namespace std;


int main(){
	int n,nimpar=0;
	int secuencia=17,suma=0;
	cout<<"ingrese los n numeros de la secuencia que desea"<<endl;
	cin>>n;
	cout<<"los "<<n<<" primeros numeros de la secuencia son [";
	if(n%2!=0){
		n-=1;
		nimpar=1;
	}
	for(int x=0;x<(n/2);x++){
		suma+=secuencia;
		cout<<secuencia<<",";
		secuencia-=2;
		suma+=secuencia;
		cout<<secuencia<<",";
		secuencia+=3;
		
	}
	if(nimpar==1){
		suma+=secuencia;
		cout<<secuencia<<",";
		secuencia-=2;
	}
	cout<<"]"<<endl;
	cout<<"la suma de los numeros es: "<<suma<<endl;
	
	return 0;
}



