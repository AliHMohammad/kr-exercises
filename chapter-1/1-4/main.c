#include <stdio.h>

int main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 200;
    step = 4;
    celsius = lower;

    printf("Temperature Conversion, celsius to f\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
