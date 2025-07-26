// Write a C program to check wheather a number is even or odd using a conditional operator.

int evenOddNum(int num)
{
    return(num % 2==0) ? printf("\n%d is even num",num): printf("\n%d is odd num",num);
}

void main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);

    evenOddNum(a);
}
