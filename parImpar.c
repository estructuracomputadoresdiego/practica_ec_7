#include <stdio.h>

#define TAM 15


//Funcion que lee los valores dados y los almacena en la variable vector_lectura
void lector(int vector_lectura[TAM]){
	
	for (int i = 0; i < TAM; ++i)
	{
		if (i!=0)
		{
			printf("Dame otro numero\n"	);
		}
		else{
			printf("Dame un numero\n");
		}

		scanf("%d",&vector_lectura[i]);
	}
}

//Funcion que recibe las variables vector_lectura y contador, y modifica el contador
void parImparF(int vector_lectura[TAM], int contador[2]){

	for (int i = 0; i < TAM; ++i)
	{	

		//contador pares
		if (vector_lectura[i]%2==0){ 
			contador[0]++;
		}
		
		//contador impares
		else {
			contador[1]++;
		}
	}

}

int main(int argc, char const *argv[])
{
	printf("Programa que lee 15 numeros y cuenta cuantos pares e impares hay.\n");

	int vector_lectura[TAM], contador[2]={0,0};

	lector(vector_lectura);					//Llamada a la funcion lector
	parImparF(vector_lectura, contador);	//Llamada a la funcion parImpar

	printf("Hay %d numeros pares y %d impares.\n", contador[0], contador[1]);
	return 0;
}