#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float maths, english, physics, chemistry, physicaleducation;
    float total, average, percentage;
    printf("Enter your marks:\n");
    scanf("%f%f%f%f%f", &maths, &english, &physics, &chemistry, &physicaleducation);
    total = maths + english + physics + chemistry + physicaleducation;
    average = total / 5;
    percentage = (total / 500) * 100;
    printf("Total=%f\n", total);
    printf("Average=%f\n", average);
    printf("Percentage=%f\n", percentage);
    return 0;
}