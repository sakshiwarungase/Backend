void PerimeterofRectangle(int l,int b)
{
    int perimeter=2*l*b;
    printf("\nPerimeter of Rectangle :- %d",perimeter);
}
void PerimeterofTriangle(int a, int d,int c)
{
    int perimeter=a+d+c;
    printf("\nPerimeter of Triangle : %d",perimeter);
}
void PerimeterofSquare( int side)
{
     int perimeter=4*side;
     printf("\nperimeter of Square :- %d",perimeter);
 }
 void CircumferenceofCircle(float r)
 {
    float circumference=2*3.14*r;
    printf("\n Circumference of Circle :- %f",circumference);
 }
void main()
{
    int l,b;
    printf("Enter the value of l and b :");
    scanf("%d%d",&l,&b);
    //call function
    PerimeterofRectangle(l,b);

    int a,d,c;
    //a,b,c
    printf("\nEnter the value of a,b and c :");
    scanf("%d%d%d",&a,&d,&c);
    //call function
    PerimeterofTriangle(a,d,c);

    int s;
    printf("\nEnter the value of sides of Square :");
    scanf("%d",&s);

    PerimeterofSquare(a);

    float r;
    printf("\nEnter the value of Radius  :");
    scanf("%f",&r);

    CircumferenceofCircle(r);


}

