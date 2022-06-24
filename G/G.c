#include<stdio.h>
#include<string.h>

void revstr(char *str1)
{
    int i, len, temp;
    len = strlen(str1);
    for (i = 0; i < len/2; i++)
    {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}

int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    int n = 10001;
    char s[n];
    scanf("%s",&s);
    int len = (r-l)+2;
    char str[len];
    for(int i=l-1,j=0; j<len-2,i<r; i++,j++)
    {
        str[j]=s[i];
    }
    str[len-1]= '\0';
    revstr(str);

    for(int i=l-1,j=0;i<r;i++,j++){
        s[i] = str[j];
    }
    // why runtime error
    printf("%s",s);

    return 0;
}
