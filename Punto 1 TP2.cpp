#include <stdio.h>

main()
{
	char nombre[25],apellido[25];
	
	printf ("ingrese su nombre y apellido: ");
	scanf ("%s %s",&nombre,&apellido);
	
	printf ("%s %s",nombre,apellido);
}
