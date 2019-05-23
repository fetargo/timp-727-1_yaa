#include <stdio.h>

int main()
{
    float k;
    int s=0, n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%g",&k);
        if(k<0)
        {
            s+=1;
        }
    }
    printf("%d\n",s);
    return 0;
}

