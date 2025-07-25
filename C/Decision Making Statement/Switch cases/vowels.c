void getVowels( char c)
{
    (c == 'a'|| c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')? printf("It is vowels"): printf("It is Constant");
}
void getCharecter(ch)
{


switch (ch)
{
   case 'a':
       break;
   case 'e':
       break;
   case 'i':
       break;
   case '0':
       break;
   case 'u':
       break;
   default:
    printf("It is Constant");
}

}
void main()
{

    char ch;
    printf("Enter the Charecter");
    scanf(" %c",&ch);

    getVowels(ch);

}
