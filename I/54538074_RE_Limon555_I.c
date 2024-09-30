#include<stdio.h>
int main()
{
   char word[104];
   scanf("%s",word);
   word[0] = toupper(word[0]);
   printf("%s\n",word);


    return 0;
}