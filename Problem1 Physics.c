#include <stdio.h>
#include <math.h>

int main()
{
    double lambda, theta, d, pi, wavelength;
    int m;
    pi = 3.14159;

    printf("Wavelength (nm) : ");
    scanf("%lf", &lambda);

    printf("Angle theta (degrees) : ");
    scanf("%lf", &theta);

    printf("Slit separation, d (micrometers) : ");
    scanf("%lf", &d);


    lambda = lambda / 1000000000.0;
    d = d / 1000000.0;
    theta = theta * (pi / 180.0);

    m = (int)((d * sin(theta)) / lambda);

    wavelength = lambda*1000000000.0;

    if (wavelength < 380 || wavelength > 750) {
        printf("Out of range. Please enter a valid number\n");
    } else {
        printf("%dth order maxima\n", m);
    }

    return 0;
}
