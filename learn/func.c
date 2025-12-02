#include <stdio.h>

int sux_add(int num){
    int digits = 0;
    long sum = 0;
    // int count_num = num;
    // while (count_num>0){
    //     count_num = count_num/10;
    //     digits++;
    // }
    // printf(">>>>digits = %d\n",digits);
    long num_arr[999]; // define array first becuse we cant creat variable in run time
    //int itration = 0;
    int i=0;
    while (num>0){
        int lst_dgt = num%10;
        num_arr[i] = lst_dgt;
        num = num/10;
        i++;           
        }
    for(int j = 0; j<=i-1;j++){
        sum = sum + num_arr[j];
        
    }
    printf(">>>>sum = %d\n",sum);
}

int main (){
    int num;
    while (1){
    printf("\n\n\n ************** Started addition program **************\n\n");
    printf("------Give number to successive addition ");
    scanf("%d",&num);
    sux_add(num);
    printf("\n\n\n ************** Started addition ended ************** \n\n\n");
    if (num == 0){
        break;
    }
    ;
    }
    
}