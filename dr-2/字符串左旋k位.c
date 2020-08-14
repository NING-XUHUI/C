#include <stdio.h>
#include <assert.h>
#include <string.h>

void reverse_string(char* start,char* end)
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
char* left_remove(char *arr,int k)
{
    int len = strlen(arr) - 1;
    char *ret = arr;
    assert(arr != NULL);
    reverse_string(arr,arr+len);
    reverse_string(arr,arr+len-k);
    reverse_string(arr+len-k+1,arr+len);
    return ret;
}

int main()
{
    char arr[] = "I Love You";
    int kpoi = 4;
    printf("%s",left_remove(arr,kpoi));

    return 0;
}

