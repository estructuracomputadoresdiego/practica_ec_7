#include <stdio.h>
#include <math.h>

#define TAM 15


//Recibe los datos de la variable vector hace la media de ellos y devuelve ese valor
float mediaF(int vector[TAM]){

	int suma = 0;
	float media;
	for (int i = 0; i < TAM; ++i)
	{
		suma = suma + vector[i];
	}

	media = (float)suma/TAM;

	return media;
}

//Recibe la variable vector y media y devuelve la desviacion tipica
float desviacionF(int vector[TAM], float media){

	float suma = 0, desviacion;
	for (int i = 0; i < TAM; ++i)
	{
		suma = suma + pow((float)vector[i]-media,2);
	}

	desviacion = sqrt((float)suma/(float)TAM);

	return desviacion;

}

//Recibe la desviacion tipica y devuelve la varianza
float varianzaF(float desviacion){

	float varianza = pow(desviacion,2);

	return varianza;

}

//Pide 
int main(int argc, char const *argv[])
{
	int vector[TAM];

	for (int i = 0; i < TAM ; ++i)
	{
		printf("\nDame el numero en la posicion %d: \n",i+1);
		scanf("%d",&vector[i]);
	}

	float media = mediaF(vector);
	printf("La media de la serie es: %f\n",media);

	float desviacion = desviacionF(vector, media);
	printf("La desviacion de la serie es: %f\n",desviacion);

	float varianza = varianzaF(desviacion);
	printf("La varianza de la serie es: %f\n",varianza);

	return 0;

}