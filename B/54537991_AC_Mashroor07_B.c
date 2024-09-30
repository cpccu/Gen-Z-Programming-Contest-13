#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[101];
    for (int i = 0; i<n; i++)
    {
        scanf("%s",a);
        int length=strlen(a);
        if (length>10)
            printf("%c%d%c\n",a[0],length-2,a[length-1]);
        else
            printf("%s\n", a);
    }
    return 0;
}
