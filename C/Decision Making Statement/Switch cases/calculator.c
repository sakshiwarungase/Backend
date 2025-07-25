double getAdd( double a, double b)
{
    return a+b;

}

double getSub( double a, double b)
{
    return a-b;
}

double getMul(double a, double b)
{
    return a*b;
}
double getDiv(double a, double b)
{
    return a/b;
}

void calculatorOperation( char choise ,double a, double b)
{
    switch(choise)
    {
    case '+':
        printf("\n %lf Addition of Two Numbers",getAdd(a,b));
        break;
    case '-':
        printf("\n %lf Substraction of Two Numbers",getSub(a,b));
        break;
    case '*':
        printf("\n %lf Multiplication of Two Numbers",getMul(a,b));
        break;
    case '/':
        printf("\n %lf Dividation of Two Numbers",getDiv(a,b));
        break;
    default:
        printf("Enter valid Number");

    }
}

void main()
{
    double a,b;
    char c;
    printf("Enter the Numbers");
    scanf("%lf%lf",&a,&b);

    printf("\n Select an Operation you Want To Perform + - * /");
    scanf(" %c",&c);

   calculatorOperation(c,a,b);
}
