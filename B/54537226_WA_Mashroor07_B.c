#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        char word[100];
        scanf("%s",word);
        int length = strlen(word);
        if (length > 10)
            printf("%c%d%c",word[0],length -2,word[length -1]);
        else
            printf("%s",word);
    }
    return 0;
}
