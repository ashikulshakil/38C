#include<stdio.h>
#include<math.h>
int main()
{
    int p,m,n;
    while(scanf("%d%d",&m,&n)==2)
    {
        p=pow(m,n);
        printf("%d\n",p);
    }
    return 0;
}
