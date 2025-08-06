/*
11011
11011
00000
11011
11011

*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(j==3||i==3)
            {
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}
