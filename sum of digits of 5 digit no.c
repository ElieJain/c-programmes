#include <stdio.h>

int main()
{
    int numb,a,b,c,d,e,sum;
    printf("Please enter a 5 digit number: ");
    scanf("%d", &numb);
    /* let the number be abcde, then,*/
    e= numb%10;
    d= (numb/10)%10;
    c= (numb/100)%10;
    b= (numb/1000)%10;
    a= (numb/10000)%10;
    sum= a+b+c+d+e;
    printf("The sum of the digits is %d", sum);
    

    return 0;
}

