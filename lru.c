#include<stdio.h>
int main()
{
    int i,j,k,n,buf[4]={0},a[20],hit=0,miss=0;
    printf("Enter limit : ");
    scanf("%d",&n);
    printf("Enter values :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i]==buf[j])
            {
                for(k=j;k>0;k--)
                    buf[k]=buf[k-1];
                buf[0]=a[i];
                hit++;
                break;
            }
        }
        if(j==4)
        {
            miss++;
            for(k=3;k>0;k--)
                buf[k]=buf[k-1];
            buf[0]=a[i];
        }
    }
    printf("Hit = %d\nMiss = %d",hit,miss);
}
