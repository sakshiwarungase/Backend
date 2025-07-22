void main()

{

    int a1,a2,a3,a4,a5;
    float  total,avg,percentage;


    printf("\nEnter Marks Of 5 Subject :");
    scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);

    total=a1+a2+a3+a4+a5;
    avg=total/5;
    percentage=(total / 500) * 100;

    printf("\n Total Marks : %f" ,total);
    printf("\n Total avg of the marks: %f" ,avg );
    printf("\n Total percentage of Marks : %f" , percentage);





}
