#include <stdio.h>
#include <math.h>

#define TAM 10

//La funcion inicializa pide los valores a comparar y los almacena en la variable vector
void inicializa(int vector[TAM]){

	for (int i = 0; i < TAM ; ++i)
	{
		printf("\nDame el numero en la posicion %d: \n",i+1);
		scanf("%d",&vector[i]);
	}
}


//La funcion maximo recibe los valores de la variable vector, los compara, y devuelve el maximo
int maximo(int vector[TAM]){

	int maximo = vector[0];

	for (int i = 0; i < TAM; ++i)
	{
		
		if (maximo<vector[i])
		{
			maximo=vector[i];
		}

	}

	return maximo;
}


//La funcion main llama a las dos funciones anteriores e imprime por pantalla el resultado de la comparacion de la funcion maximo
int main(int argc, char const *argv[])
{
	
	int vector[TAM];

	inicializa(vector);

	int salida = maximo(vector);

	printf("El maximo es : %d\n",salida);

	return 0;
}