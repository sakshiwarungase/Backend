/*
11111
10001
10001
10001
11111
*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(j==1||i==1||j==5||i==5)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}
