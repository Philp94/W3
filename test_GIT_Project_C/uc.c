#include <stdio.h>
int main()
{
    int k, l;
    float entered, converted;
    float kilo = 1, lbs = 2.2;

    printf("Enter weight: ");
    scanf("%f", &entered);

    printf("Kilo or LBS? \n");
    printf("l = LBS, k = Kilo: ");
    scanf("%i %i", &k, &l);

    printf("You entered %f %i" entered, k, l);


    return 0;

}
