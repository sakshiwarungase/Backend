int doMul(int a ,int b){
   return a*b;
}

int doSum(int a ,int b){
   return a+b;
}
int doSub(int a ,int b){
   return a-b;
}
int doDiv(int a ,int b){
   return (a<=0 && b<=0) ? 0 : (a>b) ? a/b : b/a;
}

void arithmaticOperation(char choise,int a,int b){
 int res=0;
    switch(choise){
         case '*':
            res =doMul(a,b);
           printf("Multiplication is %d \n ",res);
           break;

        case '-':
           res =doSub(a,b);
           printf("Substraction is %d \n ",res);
           break;
        case '+':
            printf("Addition Is %d\n",doSum(a,b));
            break;
        case  '/':
           res =doDiv(a,b);
           printf("Divizion is %d \n ",res);
           break;


        case 'a':
            break;
        default :
            printf("plz Enter Valid Choise");
    }



}

void main(){

/*char ch ;
printf("Enter Any Char");
scanf(" %c",&ch);

(ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z') ? printf("Alphabets\n") :
     (ch>='0'&&ch<='9') ?printf("Its Digit") : printf("Its A symbols");

*/
        int a ,b;
        printf("Enter Two number For Arithmatic Operation");
        scanf("%d%d",&a,&b);
        char op ;
        printf("press + for Addition\n");
        printf("press - for substraction\n");
        printf("press / for Diviziable\n");
        printf("press * for mult\n");
        scanf(" %c",&op);

        arithmaticOperation(op,a,b);




}

