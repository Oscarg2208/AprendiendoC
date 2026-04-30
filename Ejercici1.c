#include <stdio.h>
#include <math.h>

int main() {
    // ─── 1. DECLARACIÓN DE VARIABLES ───────────────────────────────────────
    double a, b;          // los dos parámetros del usuario
    double suma, resta, multi, division, potencia, cociente;

    // ─── 2. LECTURA DE DATOS ────────────────────────────────────────────────
    printf("Ingrese el primer numero:  ");
    scanf("%lf", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);

    // ─── 3. OPERACIONES ─────────────────────────────────────────────────────
    suma      = a + b;
    resta     = a - b;
    multi     = a * b;
    potencia  = pow(a, b);        // a elevado a b  (requiere math.h)
    cociente  = (int)a % (int)b;  // residuo de la división entera

    // ─── 4. IMPRESIÓN DE RESULTADOS ─────────────────────────────────────────
    printf("\n===== RESULTADOS =====\n");
    printf("Suma:       %.2lf + %.2lf = %.2lf\n", a, b, suma);
    printf("Resta:      %.2lf - %.2lf = %.2lf\n", a, b, resta);
    printf("Multiplic.: %.2lf * %.2lf = %.2lf\n", a, b, multi);

    // División: protegemos contra división por cero
    if (b != 0) {
        division = a / b;
        printf("Division:   %.2lf / %.2lf = %.2lf\n", a, b, division);
    } else {
        printf("Division:   No es posible dividir entre cero.\n");
    }

    printf("Potencia:   %.2lf ^ %.2lf = %.2lf\n", a, b, potencia);

    // Cociente (módulo): solo tiene sentido con enteros
    if ((int)b != 0) {
        printf("Cociente:   %d %% %d = %d\n", (int)a, (int)b, (int)cociente);
    } else {
        printf("Cociente:   No es posible obtener modulo con cero.\n");
    }

    // ─── 5. COMPARACIÓN ─────────────────────────────────────────────────────
    printf("\n===== COMPARACIÓN =====\n");
    if (a > b)
        printf("%.2lf es MAYOR que %.2lf\n", a, b);
    else if (a == b)
        printf("%.2lf es IGUAL a %.2lf\n", a, b);
    else
        printf("%.2lf es MENOR que %.2lf\n", a, b);

    // ─── 6. SECUENCIA DEL PRIMERO AL SEGUNDO ────────────────────────────────
    printf("\n===== SECUENCIA =====\n");
    int inicio = (int)a;
    int fin    = (int)b;

    if (inicio <= fin) {
        printf("Numeros de %d a %d: ", inicio, fin);
        for (int i = inicio; i <= fin; i++)
            printf("%d ", i);
    } else {
        printf("Numeros de %d a %d (descendente): ", inicio, fin);
        for (int i = inicio; i >= fin; i--)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}