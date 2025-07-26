void checkAlpha(char c)
{
  (c>='a'&& c<='z' || c>='A' && c<='Z')? printf("it is alphabtes"): printf("its not alphbates");
}

void main()
{
    char ch;
    printf("Enter Any Charecter");
    scanf(" %c",&ch);

    checkAlpha(ch);
}
