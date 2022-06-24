
#include<stdio.h>
int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}
void sort(int *a,int n)
{

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]> a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    for(int x=0;x<t;x++)
    {

        int n;
        scanf("%d",&n);
        int m = 1001;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }

        sort(arr,n);

        for(int i=0; i<n-1; i++)
        {
            m  = min(m,arr[i+1]-arr[i]);
        }
        printf("%d\n", m);
    }





    return 0;
}
