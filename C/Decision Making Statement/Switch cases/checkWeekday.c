
 void checkweekDay(n)
 {

    switch(n)
    {
    case 1:
        printf("Its a Monday");
    break;

    case 2:
        printf("Its a Tuesday");
    break;

    case 3:
        printf("Its a Wensday");
    break;

    case 4:
        printf("Its a Thursday");
    break;

    case 5:
        printf("Its a Friday");
    break;

    case 6:
        printf("Its a Saturday");
    break;

    default:
        printf("Enter valid Choice");
    }
 }


void main()
{

   int num;

   printf("Enter the Weekday :- ");
   scanf("%d",&num);

   checkweekDay(num);

}



