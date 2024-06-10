#include <stdio.h>

// Prototipos de funciones
float calcularNota(float p1, float p2, float notaExamen);
float calcularMax(float x, float y);

int main(void) {
    char c;

    do {
        float parcial1, parcial2, examen, final;

        // Leer valores de entrada
        printf("Introduzca nota parcial 1 [0, 10]: ");
        scanf("%f", &parcial1);
        printf("Introduzca nota parcial 2 [0, 10]: ");
        scanf("%f", &parcial2);
        printf("Introduzca nota examen final [0, 10]: ");
        scanf("%f", &examen);

        // Calcular nota final
        final = calcularNota(parcial1, parcial2, examen);

        // Imprimir resultados
        printf("Nota final: %f\n", final);

        // Solicitar continuar
        printf("¿Continuar? (s/n): ");
        scanf(" %c", &c); // Espacio añadido antes de %c para consumir el carácter de nueva línea

    } while (c != 'n');

    printf("Saliendo...\n");

    return 0;
}

float calcularNota(float p1, float p2, float notaExamen) {
    /* Función calcularNota: calcula la nota final basada en:
        - primer parcial 20% (p1)
        - segundo parcial 20% (p2)
        - examen final 60% (notaExamen)
        Si la nota final con evaluación continua es menor que la del examen, la nota final es la del examen */
    float notaEC = (p1 * 0.2) + (p2 * 0.2) + (notaExamen * 0.6);
    float final = calcularMax(notaEC, notaExamen);
    return final;
}

float calcularMax(float x, float y) {
    /* Función calcularMax: devuelve el mayor de los dos valores x, y pasados como parámetros */
    if (x >= y) {
        return x;
    } else {
        return y;
    }
}

