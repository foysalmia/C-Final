#include<stdio.h>
#include<string.h>

void countA(int *x,int *y,char str[],int n){
    int b=0,a=0;
    for(int i=0;i<n;i++ ){
        if(str[i] == 'a'){
            a++;
        }else{
            b++;
        }
    }
    *x = a;
    *y = b;
}

int main()
{
    char str[51];
    scanf("%s",&str);

    int *a,*b;

    int len = strlen(str);

    countA(&a,&b,str,len);

    if(a>b){
        printf("%d",len); //yayayya
    }else{
       // printf("b=>%d len=>%d\n",b,len);
        int d = b;
        while(a<=d ){
            d--;
            len--;
           //a printf("b=>%d len=>%d\n",d,len);
        }
        printf("%d",len);
    }

    return 0;
}
