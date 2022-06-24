#include<stdio.h>

void sort(int a[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]> a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    int a[m];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    sort(a,m);

    int income = 0;

    for(int i=0;i<n;i++){
        if(a[i]<0){
            income += a[i] * (-1);
        }
    }

    printf("%d",income);


return 0;
}
