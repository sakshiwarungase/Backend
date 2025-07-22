void FindSquare(int n)
{
    int square=n*n;
    printf("\n %d Square :%d",n,square);

}
void getCube(int n)
{
     int cube=n*n*n;
     printf("\nCube : %d",cube);
}
void main()
{
    int a,b,c;
    printf("Enter the Number :-");
    scanf("%d%d%d",&a,&b,&c);
     FindSquare(b);
     FindSquare(c);
     FindSquare(a);

    getCube(a);
    getCube(b);
    getCube(c);

    FindSquare(a);
    getCube(a);
}
//get and find we can use both
