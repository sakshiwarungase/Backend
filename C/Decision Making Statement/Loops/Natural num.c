// natural num from 1 to  n

void getNaturalNum(n)
{int i=1;
while (i<=n)
    {
        printf("%d",i);

    i++;
    printf("\n");
    }

}
void main()
{
    int n ;
    printf("Enter a Number");
    scanf("%d",&n);

    getNaturalNum(n);
}
