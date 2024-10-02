#include <stdio.h>

int main(/*int argc, const char *argv[]*/)
{
	//Type d'opération
	double V;

	//valeur à multipliés 
	//=> toujours mettre les variables dans le Main (NE JAMAIS UTILISER LES GLOBALES)
	double a = 0.;  //Toujours des "doubles" pour les réels (précision 64 bits)
	double b = 0.;
	double c = 0.;

	//Résultat
	double r;

	//Modification de la valeurs des variables
	printf("Input value for a and presse enter: \n");

	scanf("%lf", &a);

	printf("Input value for b and presse enter: \n");

	scanf("%lf", &b);

	printf("Input value for c and presse enter: \n");
	
	scanf("%lf", &c);

	printf("Choose type of operation (1 or 2): \n");
	
	scanf("%lf", &V);	

	//Choose the type of operation
	if(V == 1)
	{
		r = a * b * c;
	}
	else if(V == 2)
	{
		r = a + b + c;
	}
	else
	{
		printf("Wtf is wrong with you?");
	}

	printf("your result is: \n");

	printf("%lf", r);

	printf("\n");

	return 0; 
}