#include <stdio.h>


#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
    /* code */
    for (int fahr = 300; fahr >= 0; fahr -= 20) {
        float celcius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d %6.1f\n", fahr, celcius);
    }

    return 0;
}
