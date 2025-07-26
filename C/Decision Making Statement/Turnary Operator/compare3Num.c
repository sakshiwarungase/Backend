// compare three number
int getMaxOfThreeNumber(int a, int b, int c)
{
   return (a>b && a>c)? a : (b>c && b>a) ? b: (c>b && c>b)? c : b;
  // return (a>b && a>c) ? a: (b>c && b>a) ? b: c;

}

// compare two numbers
int getMaxNumber(int n1, int n2)
{
    int res=(n2>n1)? n2 :n1;
    return res;
}

void main()
{
    int a;
    int b;
    int c;
     int max=0;
     printf("Enter Two Numbers");
     scanf("%d%d%d",&a,&b,&c);
//call the function
    /*int max= getMaxNumber(a,b);
    printf("\nMax no is %d",max);
// int max= int repaeat use nahi hote bcoz variable redeclaration not allow
      max= getMaxNumber(a,c);
    printf("\nMax no is %d",max);

      max= getMaxNumber(c,b);
    printf("\nMax no is %d",max);
    */

    max=getMaxOfThreeNumber(b,a,c);
    printf("{%d,%d,%d}Max no is %d " ,a,b,c,max);
}

