#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	int i,longitud,inicio=0,final,cont=0;
	char palabra[20];
	
	printf ("ingrese palabra: ");
	scanf ("%s",&palabra);
	
	longitud = strlen(palabra);
	final = longitud - 1;
	
	for (i=0;i<longitud;i++)
	{
		if (palabra[inicio] == palabra[final])
		{
			inicio++;
			final--;
			cont++;	
		}
	}
	if (cont == longitud)
	{
		printf ("es palindromo");
	}
	else printf ("no es palindromo");
}

