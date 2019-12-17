#include<stdio.h>
int main(void)
{
        int i, n,k=0;
        scanf("%d",&n);
        for(i=2;i * i<=n;i++)
        {
                if(n%i==0)
                {
                        k=n;
                        break;
                }
        }
        if(k!=0)
        {
                printf("%d=",n);
                while(n!=k)
                {
                        if(n%k==0)
                        {
                                printf("%d*",k);
                                n/=k;
                        }
                        else
                                k++;
                        if(n==k)
                        {
                                printf("%d",k);
                        }
                }
        }
        else
        printf("meiyou");
        return 0;
}
