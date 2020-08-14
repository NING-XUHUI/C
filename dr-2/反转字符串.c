#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverse_string(char *start,char *end)
{
    assert(start != NULL && end != NULL);
    while(start < end)
    {
        int tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}

int main()
{
    char arr[] = "i love you";
    reverse_string(arr,arr+strlen(arr)-1);
    printf("%s\n",arr);
    char *a = arr;
    reverse_string(a,a+7);
    printf("%s\n",a);

    return 0;
}

