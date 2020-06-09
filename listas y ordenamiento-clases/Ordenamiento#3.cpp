#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int n;
int *vector;

void llenarVector(int n){
	vector=new int[n];
	srand(time(NULL));
	for(int i=0;i<n;i++){
		vector[i]=1+rand()%(100);
	}
}
void mostrar(int *v,int n){
	for(int i=0;i<n;i++){
		cout<<"["<<v[i]<<"]\t";
	}
	
}
void intercambio(int n){
	int *v=new int[n];
	unsigned ini,fin;
	for(int i=0;i<n;i++){
		v[i]=vector[i];
	}
		
	int aux;
	ini=clock();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(v[j]<v[i]){
				aux=v[j];				
				v[j]=v[i];
				v[i]=aux;	
			}
		}	
	}
	fin=clock();
	double tiempo=(double)(fin-ini)/1000;
	cout<<"Intercambio: "<<tiempo<<endl;
//	mostrar(v,n);
}

void seleccion(int n){
	int *v=new int[n];
	unsigned ini,fin;
	for(int i=0;i<n;i++){
		v[i]=vector[i];
	}
	int aux,menor,pos;
	ini=clock();
	for(int i=0;i<n-1;i++){
		pos=i;
		for(int j=i+1;j<n;j++){	
			if(v[j]<v[pos]){
				pos=j;
			}
		}
		if(pos!=i){
			aux=v[i];
			v[i]=v[pos];
			v[pos]=aux;		

		}
	}
	
	
	fin=clock();
	double tiempo=(double)(fin-ini)/1000;
	cout<<"Seleccion: "<<tiempo<<endl;
	//mostrar(v,n);
}

void insercion(int n){
	int *v=new int[n];
	unsigned ini,fin;
	for(int i=0;i<n;i++){
		v[i]=vector[i];
	}
	ini=clock();
	int j,aux;
	for(int i=0;i<n;i++){
		j=i;
		aux=v[i];
		while(j>0 and aux<v[j-1]){
			v[j]=v[j-1];
			j--;
		}
		v[j]=aux;
	}
	fin=clock();
	double tiempo=(double)(fin-ini)/1000;
	cout<<"Insercion: "<<tiempo<<endl;
//	mostrar(v,n);
}

void burbuja(int n){
	int *v=new int[n];
	int aux;
	bool sw=false;
	unsigned ini,fin;
	for(int i=0;i<n;i++){
		v[i]=vector[i];
	}
	ini=clock();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(v[j]>v[j+1]){//Si el sigiente es mayor intercambia
				sw=true;
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
		if(!sw)
			break;
		else
			sw=false;
	}
	
		fin=clock();
	double tiempo=(double)(fin-ini)/1000;
		cout<<"Burbuja: "<<tiempo<<endl;
//	mostrar(v,n);
	
}

void shell(int n){
	int *v=new int[n];
	int aux,i,j,k;
	bool sw=false;
	unsigned ini,fin;
	for(int i=0;i<n;i++){
		v[i]=vector[i];
	}
	ini=clock();
	for(i=n/2;i>0;i=i/2){
		while(!sw){
			for(j=0;(i+j)<n;j++){
 				if(v[j]>v[i+j]){
					aux=v[j];
					v[j]=v[i+j];
					v[i+j]=aux;
					sw=true;
				}

			}
			if(sw)
				sw=false;
			else
				break;
		}
	
	}
	fin=clock();
	double tiempo=(double)(fin-ini)/1000;
	cout<<"Shell: "<<tiempo<<endl;
//	mostrar(v,n);

}

void quicksort(int *v, int ini, int fin){
	int c= (ini+fin)/2;
	int i=ini, j = fin, aux, piv=v[c];
	
	do{
		while(v[i]<piv) i++;
		while(v[j]>piv)j--;
		if(i<=j){
			aux=v[i];
			v[i]=v[j];
			v[j]=aux;
			i++;
			j--;			
		}
	}while(i<=j);
	
	if(ini<j)
	quicksort(v,ini,j);
	if(i<fin)
	quicksort(v,i,fin);	
	
}


void llamarquicksort(int n){
		int *v=new int[n];
	unsigned ini,fin;
	for(int i=0;i<n;i++){
		v[i]=vector[i];
	}
	ini=clock();
	quicksort(v,0,n-1);
		fin=clock();
	double tiempo=(double)(fin-ini)/1000;
	cout<<"QuickSort: "<<tiempo<<endl;
//	mostrar(v,n);
}

int main(){
	cout<<"Ingrese n elementos";
	cin>>n;
	llenarVector(n);
	mostrar(vector,n);
	cout<<"\n\n";
	intercambio(n);
	cout<<"\n\n";
	seleccion(n);
	cout<<"\n\n";
	insercion(n);
	cout<<"\n\n";
	burbuja(n);
	cout<<"\n\n";
	shell(n);
	cout<<"\n\n";
	llamarquicksort(n);
	}
