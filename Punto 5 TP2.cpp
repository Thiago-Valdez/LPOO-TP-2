#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char palabra[20],letra,reemplazo;
	int i,longitud;
	
	printf ("ingrese palabra: ");
	scanf ("%s",&palabra);
	
	longitud = strlen(palabra);
	
	printf ("que letra quiere reemplazar: ");
	scanf ("\n%c",&letra);
	
	printf ("con que letra quiere reemplazarla?: ");
	scanf ("\n%c",&reemplazo);
	
	for (i=0;i<longitud;i++)
	{
		if ( palabra[i] == letra)
		{
			palabra[i] = reemplazo;
		}
	}
	
	printf ("%s",palabra);
}
