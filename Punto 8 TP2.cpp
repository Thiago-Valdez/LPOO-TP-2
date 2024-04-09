#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char oracion[200];
	int i,opcion,longitud,cont=0;
	
	printf ("ingrese palabra: ");
	fgets ( oracion, sizeof(oracion), stdin );
	printf ("%s",oracion);
	
	longitud = strlen(oracion);
	
	do
	{
		printf ("ingrese opcion a realizar, ingrese (0) para finalizar: \n");
		printf ("1. mostrar oracion en mayusculas\n");
		printf ("2. mostrar oracion en minusculas\n");
		printf ("3. mostrar oracion alternando entre mayuscula y minuscula\n");
		printf ("4. mostrar la oracion comenzando todas las palabras con mayuscula\n");
		scanf ("%d",&opcion);
		
		switch (opcion)
		{
			case 1:
				{
					for (i=0;i<longitud;i++)
					{
						if ( oracion[i] >= 97 && oracion[i] <= 122)
						{
							oracion[i] = oracion[i] - 32;
						}
					}
					printf ("%s",oracion);
					break;
				}
			case 2:
				{
					for (i=0;i<longitud;i++)
					{
						if ( oracion[i] >= 65 && oracion[i] <= 90)
						{
							oracion[i] = oracion[i] + 32;
						}
					}
					printf ("%s",oracion);
					break;
				}
			case 3:
				{
					for (i=0;i<longitud;i++)
					{
						cont++;
						
						if ( (cont % 2) != 0)
						{
							if (oracion[i] >= 97 && oracion[i] <= 122)
							{
								oracion[i] = oracion[i] - 32;
							}
						}
						else if ( (cont % 2) == 0)
						{
							if (oracion[i] >= 65 && oracion[i] <= 90)
							{
								oracion[i] = oracion[i] + 32;
							}
						}
						
						
						
					}
					printf ("%s\n",oracion);
					break;
				}
			case 4:
				{
					if ( oracion[0] >= 97 && oracion[0] <= 122)
						{
							oracion[0] = oracion[0] - 32;
						}
					for (i=0;i<longitud;i++)
					{		
						if (oracion[i] == 32)
						{
							if ( oracion[i+1] >= 97 && oracion[i+1] <= 122)
							{
								oracion[i+1] = oracion[i+1] - 32;
							}
						}
					}
					printf ("%s",oracion);
					break;
				}
				
		}
		
	} while (opcion != 0);
}
