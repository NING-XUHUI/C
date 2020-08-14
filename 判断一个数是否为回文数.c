#include <stdio.h>
#include <string.h>
#include <assert.h>

int judge_num(int num)
{
    int tmp = 0;
    int newNum = 0;
    int copyNum = num;
    while(num > 0)
    {
        tmp = num%10;
        num /= 10;
        newNum *= 10;
        newNum += tmp;
    }
    if(newNum == copyNum)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num = 12344321;
    int ret = judge_num(num);
    if(ret == 1)
    {
        printf("是回文数");
    }
    else
    {
        printf("不是回文数");
    }
    return 0;
}

