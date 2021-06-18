#include <stdio.h>

int main()
{
    float principle, rate, time, CI; 

    printf("please enter principle amount, time and rate: "); 
    scanf( "%f, %f, %f ", &principle, &time, &rate); 
    CI = principle* (pow((1 + rate/100), time)); 
    printf("compound interest= %f", CI); 

    return 0;
}
