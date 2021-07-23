#include <stdio.h>

int main()
{
    int a1,a2,a3;
    printf("Enter the first angle: ");
    scanf("%d", &a1);
    printf("Enter the second angle: ");
    scanf("%d", &a2);
    printf("Enter the third angle: ");
    scanf("%d", &a3);
    if (a1+a2+a3==180)
    {
        printf("It is a valid triangle");
    }
    else
    {
        printf("It is not a valid triangle");
    }
    

    return 0;
}
