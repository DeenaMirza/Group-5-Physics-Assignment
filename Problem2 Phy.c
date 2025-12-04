#include <stdio.h>
#include <math.h>
int main(){
double pi=3.14159;

/* We know, asin(theta)=m*lambda.
The question is designed to determine the ratio of the slit width(a) to the wavelength(lambda) when the angle(theta) and diffraction maximum(m) is known.*/

double theta;
//The angle must be converted to radians.
theta=45*(pi/180);

double ratio = 1.0 / sin(theta);
    printf("The ratio of the slit width to the wavelength is %.5lf\n", ratio);
    return 0;
}
