#include <stdio.h>

typedef struct { float real, imag; } Complex;

Complex readComplex() {
    Complex c;
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

void writeComplex(Complex c) {
    printf("%.2f %c %.2fi\n", c.real, (c.imag < 0 ? '-' : '+'), (c.imag < 0 ? -c.imag : c.imag));
}

Complex addComplex(Complex a, Complex b) {
    return (Complex){a.real + b.real, a.imag + b.imag};
}

Complex subComplex(Complex a, Complex b) {
    return (Complex){a.real - b.real, a.imag - b.imag};
}

int main() {
    Complex c1, c2, sum, diff;
    printf("Enter first complex number (real imag): ");
    c1 = readComplex();
    printf("Enter second complex number (real imag): ");
    c2 = readComplex();

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("Sum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(diff);

    return 0;
}
