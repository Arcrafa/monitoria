
/*Ejercicio 1Permalink
#parte1 = Realizar un programa que defina un vector llamado “vector_numeros” de 10 enteros, 
#parte2 = a continuación lo inicialice con valores aleatorios (del 1 al 10)
 y 
#parte3 = posteriormente muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

//decidir en un algoritmo = condicionales

	//un algo o otro algo = if else if  else
	
	//varios casos para una sola variable = case

// repetir cosas   = ciclos

	//n veces	=for
	
	// indefinidamente   =while 
	

int main (){
	
	//parte 1
	int vec_numeros[10];
	
	for(/*desde*/int x=0;/*hasta*/x<10;/*como*/x++){
		//repetir esto
		vec_numeros[x]=/*parte 2*/rand()  % /*intervalo*/100+1;
		
	}
		
	
	for(int x=0;x<10;x++){
		cout<<vec_numeros[x]<<" su cuadrado es: "<<vec_numeros[x]*vec_numeros[x]<<" su cubo es: "<<vec_numeros[x]*vec_numeros[x]*vec_numeros[x]*vec_numeros[x]<<endl;
		
	}
	
	
	return 0;
}


