#include <stdio.h>

int main()
{
    int l,b,r,Ar,Pr;
    float Ac,Cc;
    printf("Please enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("\n Please enter the breadth of the rectangle: ");
    scanf("%d", &b);
    printf("\n Please enter the radius of the circle: ");
    scanf("%d", &r);
    Ac= (22.0/7)*r*r;
    Ar= l*b;
    Cc= 2*(22.0/7)*r;
    Pr= 2*(l+b);
    printf("The perimeter of rectangle is %d m", Pr);
    printf("\n The area of the reactangle is %d msq", Ar);
    printf("\n The circumference of the circle is %f m", Cc);
    printf("\n The area of the circle is %f msq", Ac);
    
    

    return 0;
}
