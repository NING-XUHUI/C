#include <stdio.h>
#include <assert.h>
#include <string.h>

void print_sequence(int n)
{
    int i = 0;
    int k = 0;
    for(i = 1;i <= n/2;i++)
    {
        int sum = 0;
        int tmp = i;
        while(sum < n)
        {
            sum+=tmp;
            if(sum == n)
            {
                for(k = i;k <= tmp;k++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            tmp++;
        }
    }
}

int main()
{
    int n = 15;
    print_sequence(n);
    return 0;
}

