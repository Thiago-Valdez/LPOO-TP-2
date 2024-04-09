#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char palabra1[30],palabra2[30],palabra3[30],palabra4[30],palabra5[30];
	int i,longitud1,longitud2;
	
	printf ("ingrese palabra 1: ");
	scanf ("%s",&palabra1);
	printf ("ingrese palabra 2: ");
	scanf ("%s",&palabra2);
	printf ("ingrese palabra 3: ");
	scanf ("%s",&palabra3);
	printf ("ingrese palabra 4: ");
	scanf ("%s",&palabra4);
	printf ("ingrese palabra 5: ");
	scanf ("%s",&palabra5);
	
	longitud1 = strlen(palabra1);
	
	for (i=0;i<5;i++)
	{
		if (palabra1[i] == palabra2[i] && palabra2[i] == palabra3[i] && palabra3[i] == palabra4[i] && palabra4[i] == palabra5[i])
		{
			printf ("%c", palabra1[i]);
		}
	}
	
}
