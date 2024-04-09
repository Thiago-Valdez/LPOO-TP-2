#include <stdio.h>
#include <string.h>

int son_anagramas(char *cadena1, char *cadena2) {
    int frecuencia1[26] = {0};
    int frecuencia2[26] = {0};
    int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);

    if (longitud1 != longitud2) {
        return 0;
    }

    for (int i = 0; i < longitud1; i++) {
        frecuencia1[cadena1[i] - 'a']++;
        frecuencia2[cadena2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (frecuencia1[i] != frecuencia2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char cadena1[100], cadena2[100];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = '\0';

    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = '\0';

    if (son_anagramas(cadena1, cadena2)) {
        printf("Las cadenas '%s' y '%s' son anagramas.\n", cadena1, cadena2);
    } else {
        printf("Las cadenas '%s' y '%s' no son anagramas.\n", cadena1, cadena2);
    }

    return 0;
}
