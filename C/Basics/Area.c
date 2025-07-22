 void AreaofCircle( float r)
 {
   float area=3.14*r*r;
   printf("Area of Circle :-  %f",area);
 }
 void AreaofRectangle(int l,int b)
 {
     int area=l*b;
     printf("Area of Rectangle :- %d", area);
 }
 void AreaofTriangle(int b,int h)
      {
          int area=0.5*b*h;
          printf("Area of Triangle :- %d",area);
      }
void AreaofSquare(int side)
   {
       int area=side*side;
       printf("Area of Square : %d",side);
   }
 void main()
 {
     float area,r;
     printf("Enter the Radius of Circle :");
     scanf("%f",&r);
     // Function call
     AreaofCircle(r);
     int l,b;
     printf("\nEnter the value of  Rectangle L and B :");
     scanf("%d%d", &l,&b);
     //Call Function
     AreaofRectangle(l,b);

     int h;
     printf("\nEnter the value of  Triangle B and H :");
     scanf("%d%d",&b,&h);
     //call function
     AreaofTriangle(b,h);

     int side;
     printf("\nEnter the Side of Square :");
     scanf("%d%d",&side,&side);

     AreaofSquare(side);

 }
