#include <stdio.h>
#include <string.h>
#include <assert.h>

int judge_string(char arr[])
{
    int left = 0;
    int right = strlen(arr) - 1;
    while(left < right)
    {
        if(arr[left] != arr[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    char arr[] = "abccba";
    int ret = judge_string(arr);
    if(ret)
    {
        printf("是回文字符串");
    }
    else
    {
        printf("不是回文字符串");
    }

    return 0;
}

