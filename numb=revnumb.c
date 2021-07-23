#include <stdio.h>

int main()
{ 
    int numb,a,b,c,d,e,revnumb;
    printf("Please enter a 5 digit number ");
    scanf("%d", &numb);
    /* let the number be abcde */
    e= numb%10;
    d= (numb/10)%10;
    c= (numb/100)%10;
    b= (numb/1000)%10;
    a= (numb/10000)%10;
    revnumb= 10000*e+1000*d+100*c+10*b+a;
    if (numb=revnumb)
    {
printf("The original number is same as that of the reversed number");
}
else
{
printf("The original number is not same as that of the reversed number");
}
    return 0;
}
