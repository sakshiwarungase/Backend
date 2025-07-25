// natural num from 1 to  n

void getNaturalNum(n)
{
    int i=1;
   while (n>=1)
    {
        printf("\n%d",n);

    n--;
    }

}
void main()
{
    int n ;
    printf("Enter a Number");
    scanf("%d",&n);

    getNaturalNum(n);
}
