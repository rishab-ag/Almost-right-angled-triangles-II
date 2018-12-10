#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j,k,m,c=0;
    float val;
    scanf("%d",&n);
    if(n<=150)
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m>=15)
        for(j=1;j<m-2;j++)
        {
            for(k=1;(k<m-j-1 && k<=j);k++)
            {
                val=sqrt((j*j)+(k*k)+1);
                if (val == ceil(val))
                {
                    if(val+j+k<=m)
                    {
                        c++;
                        //printf("%d %d %.2f\n",j,k,val);
                    }
                }
            }
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
