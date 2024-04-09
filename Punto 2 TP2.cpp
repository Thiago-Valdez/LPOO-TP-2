#include <stdio.h>
#include <stdlib.h>
main()
{
	char palabra[20];
	int i,cont=0;
	printf ("ingrese palabra: ");
	scanf ("%s",&palabra);
	
	for (i=0;i<20;i++)
	{
		switch (palabra[i])
		{
			case 'a':cont++; break;
			case 'e':cont++; break;
			case 'i':cont++; break;
			case 'o':cont++; break;
			case 'u':cont++; break;
		}
	}
	
	printf ("la cantidad de vocales es de %d\n",cont);
}
