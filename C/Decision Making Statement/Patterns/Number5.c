
/*
10101
01010
10101
01010
10101
*/

void main()
{
   int k=1;
   {
       for(int i=1;i<6;i++)
       {
           for(int j=1;j<6;j++)
           {
               printf("%d",k);
               k= (k==1)? 0:1 ;
           }
           printf("\n");

       }

   }
}

