#include <stdio.h>
int main()
{
    char str[100]="hello world";
    strrev(str);
    int i = 0;
    int count=0;
        char str1[100];
    while (str[i] != ' ')
    {   
        count+=1;
        i++;
        str1[i]=str[i];
    }
        printf("%d", count);
        printf("%s", strrev(str1));
    return 0;
}