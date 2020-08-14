#include <stdio.h>
#include <string.h>
#include <assert.h>

int find_first(char* arr,int *Count,int k)
{
    int i = 0;
    assert(arr != NULL);
    for(i=0;i<strlen(arr);i++)
    {
        Count[arr[i]]++;
    }
    for(i=0;i<strlen(arr);i++)
    {
        if(Count[arr[i]] == k){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    char arr[] = "i really really like you";
    int arrCount[255] = {0};
    int k = 1;
    int ret = 0;
    if((ret = find_first(arr,arrCount,k)) != -1)
    {
        printf("%c",ret);
    }else{
        printf("未找到");
    }
    return 0;
}

