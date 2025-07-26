// Write a C program to check wheather a year is leap year or not using conditional operator

void checkLeapYear( int year)
{

     (year%4 == 0 && (year%100!=0 || year%400==0)) ? printf("%d Year is leap Year",year):printf("%d is not leap year",year);
}

void main()
{
    int year;
    printf("Enter the year is leap year or not");
    scanf("%d",&year);

    checkLeapYear(year);
}
