#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    char all[t][6];
   
    for(int i = t - 1;i>=0;i--){
        char a[6];
        scanf("%s",a);
        strcpy(all[i],a); 
    }
			int sum1 = 0;
            int sum2 = 0;
    for(int j = t - 1;j>=0;j--){
        for(int k=0;k<6;k++){

            if(k == 0 || k == 1 || k ==2)
            sum1 += (int)all[j][k] - 48;
            else
            sum2 += (int)all[j][k] - 48;
        }
        if(sum1 == sum2){
            printf("You are lucjy!");
        }else
        printf("Wish you good luck.");
    }



    return 0;
}