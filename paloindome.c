#include<stdio.h>
int main ()
{
    int i,x,rev=0;
    printf("Enter the number ");
    scanf("%d",&i);
    x=i;
    while(i<=0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(x==rev)
    printf("palindrome");
    else{
        printf("not palindrome");
    }
    return 0;
}