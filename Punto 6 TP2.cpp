#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char palabra1[100],palabra2[100],aux;
	int i,longitud;
	
	printf ("ingrese palabra 1: ");
	scanf ("%s",&palabra1);
	printf ("ingrese palabra 2: ");
	scanf ("%s",&palabra2);
	
	longitud = strlen(palabra2);
	
	for (i=0;i<longitud/2;i++)
	{
		aux = palabra2[i];
		palabra2[i] = palabra2[longitud - i - 1];
		palabra2[longitud - i - 1] = aux;
	}
	
	if (strcmp(palabra1,palabra2) == 0)
	{
		printf ("es anagrama\n");
	}
	else printf ("no es anagrama\n");
	
}
