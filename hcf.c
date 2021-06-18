#include <stdio.h>

int main()
{ 
    int x, y, a, b, t, hcf; 
    printf("Please enter two positive numbers: ");
scanf("%d, %d", &x, &y); 
a=x; 
b=y; 
while (b!=0) {
    t=b; 
    b=a%b; 
    a=t; 
}
hcf=a; 
printf("Hcf of %d and %d = %d", x,y, hcf);
    return 0;
}
