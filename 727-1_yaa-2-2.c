#include <stdio.h>

int main()
{
    float k1,k2;
    int n, s=1;
    scanf("%d",&n);
    scanf("%g",&k1);
    for(int i=1; i<n; i++)
    {
        scanf("%g",&k2);
        if(k1<k2)
        {
            s=0;
            break;
        }
        k1=k2;
    }
    printf("%d\n",s);
    return 0;
}
