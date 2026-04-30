#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    double suma, resta, multi, division, potencia, cociente;

    return 0;
}

printf("Ingrese el primer numero:  ");
scanf("%lf", &a);

printf("Ingrese el segundo numero: ");
scanf("%lf", &b);

suma      = a + b;
resta     = a - b;
multi     = a * b;
potencia  = pow(a, b);
cociente  = (int)a % (int)b;

printf("\n===== RESULTADOS =====\n");
printf("Suma:       %.2lf + %.2lf = %.2lf\n", a, b, suma);
printf("Resta:      %.2lf - %.2lf = %.2lf\n", a, b, resta);
printf("Multiplic.: %.2lf * %.2lf = %.2lf\n", a, b, multi);
printf("Potencia:   %.2lf ^ %.2lf = %.2lf\n", a, b, potencia);

if (b != 0) {
    division = a / b;
    printf("Division:   %.2lf / %.2lf = %.2lf\n", a, b, division);
} else {
    printf("Division:   No es posible dividir entre cero.\n");
}



