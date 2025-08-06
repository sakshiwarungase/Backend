/*
10001
01010
00100
01010
10001
*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            if(i==j||i+j==6)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        {
        printf("\n");
        }
    }

}

