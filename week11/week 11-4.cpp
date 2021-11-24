#include <stdio.h>
int a[100];
int main()
{
    for(int i=0;i<100;i++)
    {
        scanf("%d",& a[i]);
    }
    for(int k=0;k<100-1;k++)
    {
        for(int i=0;i<100-1;i++)
        {
            if( a[i] > a[i+1])
            {
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
        for(int i=0;i<100;i++)
        {
            printf("%d\n",a[i]);

    }
}

