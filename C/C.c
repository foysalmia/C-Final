#include<stdio.h>

int main()
{

    int test;
    scanf("%d",&test);

    for(int p=0; p<test; p++)
    {
        int n;
        scanf("%d",&n);

        int arr[n];

        for(int i = 0; i<n; i++)
        {

            scanf("%d",&arr[i]);

        }

        int brr[n];

        int len = n/2;

        if(n*2==n)
        {
            for(int i=0,j=n-1,k=0; i<len; i++,j--,k++)
            {
                brr[k]=arr[i];
                k++;
                brr[k]=arr[j];
            }
            for(int i = 0; i<n; i++)
            {
                printf("%d ",brr[i]);
            }
        }
        else
        {
            for(int i=0,j=n-1,k=0; i<len; i++,j--,k++)
            {
                brr[k]=arr[i];//2,i=1
                k++;//3,1
                brr[k]=arr[j];
            }
            brr[len*2]= arr[len];
            for(int i = 0; i<n; i++)
            {
                printf("%d ",brr[i]);
            }
        }

    }


}
