#include <stdio.h>
#include <math.h>

#define TAM 10


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

	return;
}

//Funcion que recibe las variables vector_lectura y contador, y modifica el contador
void contadorF(int vector_lectura[TAM], int contador[3]){

	for (int i = 0; i < TAM; ++i)
	{

		//contador numeros positivos
		if (vector_lectura[i] > 0){ 
			contador[0] = contador[0] + 1;
		}
		
		//contador numeros negativos
		if (vector_lectura[i] < 0){
			contador[1] = contador[1] + 1;
		}

		//contador ceros
		if (vector_lectura[i] == 0){
			contador[2] = contador[2] + 1;
		}
	}

}

int main(int argc, char const *argv[])
{
	printf("Programa que lee 10 numeros y cuenta cuantos postivos, negativos y ceros hay.\n");

	int vector_lectura[TAM], contador[3]={0,0,0};

	lector(vector_lectura);					//Llamada a la funcion lector
	contadorF(vector_lectura, contador);	//Llamada a la funcion contador

	printf("Hay %d numeros postivos, %d negativos, y %d ceros.\n", contador[0], contador[1], contador[2] );
	return 0;
}