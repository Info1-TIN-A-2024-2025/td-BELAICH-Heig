#include <stdio.h>
#include <ctype.h>

int main(int argc, const char *argv[]) // argument de demarage dans le main
{
	// valeur à obtenir
	//=> toujours mettre les variables dans le Main (NE JAMAIS UTILISER LES GLOBALES)
	double U = 0.; // Toujours des "doubles" pour les réels (précision 64 bits)
	double R = 0.;
	double I = 0.;

	// Modification de la valeurs des variables
	printf("Input value for U and presse enter: \n");

	scanf("%lf", &U);

	printf("Input value for R and presse enter: \n");

	scanf("%lf", &R);

	// Operation

	if(isdigit(U))
	{
		printf("Use numbers only!");

		printf("\n");

		return 0;
	}
	if(isdigit(R))
	{
		printf("Use numbers only!");

		printf("\n");

		return 0;
	}

	if (R <= 0)
	{
		printf("Invalid operation");

		printf("\n");
	}
	else
	{

		I = U / R;

		printf("your result is: \n");

		printf("%g", I);

		printf("\n");
	}

	/* Solution prof:

		if(R <= 0)
	{
		printf("Invalid operation");

		printf("\n");
		return 1; <= permet de sortir du programme sans utiliser un "else" explicite
	}

		I = U / R;

		printf("your result is: \n");

		printf("%g", I);

		printf("\n");

		return 0;

	*/

	return 0;
}