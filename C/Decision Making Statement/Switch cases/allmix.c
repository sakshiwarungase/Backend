void checkEvenOdd( int n)
{
    (n % 2==0) ? printf("\n%d is even num",n): printf("\n%d is odd num",n);
}

void checkPositiveNegative(int n)
{
    (n>=0)? printf("%d is a positive number ",n): (n<=0) ? printf("%d is a negative number ",n):  printf("Number is a zero ",n);
}

void intNumber(int n)
{
  (n>0) ? printf("%d is positive Number",n): (n<0) ? printf("%d is Negative Number "): printf("%d is Zero");
}
void CheckAllNum(int op,int n)
{
    switch(op)
    {
   case 1:
       checkEvenOdd(n);
       break;
   case 2:
        checkPositiveNegative(n);
        break;
   case 3:
        intNumber(n);
        break;
   default:
    printf("Enter Valid Option");

    }

}

void main()
{
    int n,op;
    printf("Enter the Number");
    scanf("%d",&n);

    printf("\n Select the Choice");
    printf("\n 1check Even Odd Number");
    printf("\n 2check Positive Negative Number");
    printf("\n 3 check Integer Number");
    scanf("%d",&op);

    CheckAllNum(op,n);

}



