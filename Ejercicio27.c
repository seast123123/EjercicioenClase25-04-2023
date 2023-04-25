#include <stdio.h>

// Definición de la función countDigits()
int countDigits(int num) {
    int count = 0;
    while (num != 0) { // Mientras el número no sea 0
        num /= 10; // Divide el número por 10
        count++; // Aumenta el contador de dígitos
    }
    return count; // Devuelve la cantidad de dígitos
}

// Función principal
int main() {
    int num1, num2;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &num1, &num2); // Leer dos números enteros desde el usuario

    // Llamar a la función countDigits() para cada número
    int num1_digits = countDigits(num1);
    int num2_digits = countDigits(num2);

    // Comprobar cuál número tiene más dígitos
    if (num1_digits > num2_digits) {
        printf("%d tiene mas digitos que %d\n", num1, num2);
    } else if (num2_digits > num1_digits) {
        printf("%d tiene mas digitos que %d\n", num2, num1);
    } else {
        printf("%d y %d tienen la misma cantidad de digitos\n", num1, num2);
    }

    return 0; // Indicar que el programa se ejecutó correctamente
}