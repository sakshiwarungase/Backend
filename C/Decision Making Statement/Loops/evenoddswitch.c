
void checkEven()
{
    int n=2;
    while (n<=100)
    {
        printf("\n%d",n);
        n +=2;

    }
}

void checkOdd()
{
    int n=1;
         while (n<=100)
    {
        if(n%2!=0)
        {
          printf("\n%d",n);
        }

        n++;
}
}


void getAllEvenOdd(int op,int n)
{
    switch(op)
    {
   case 1:
       checkEven(n);
       break;
   case 2:
        checkOdd(n);
        break;

    default:
        printf("Enter Correct option");

    }
}
void main()
{
    int n,op;


    printf("\n Select the Operation");
    printf("\n 1check Even  Number");
    printf("\n 2 check odd Number");
    scanf("%d",&op);

    getAllEvenOdd(op,n);

}
