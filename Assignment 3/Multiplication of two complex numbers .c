#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    Complex num1, num2, result;

    // Input for the first complex number
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for the second complex number
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Multiplication
    result = multiplyComplex(num1, num2);

    // Display result
    printf("The product of the complex numbers is: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
