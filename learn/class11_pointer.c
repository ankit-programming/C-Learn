#include <stdio.h>

int main(){
    //  pointers are to store variable adress
    // int a = 4;
    // int* a_padd = &a;//hume pata hai ke & hame adress acsess ker ke deta hai to kiy ahum ad
    // printf("a = %d\n" , a);
    // printf("a adress in hexadecimal = %p\n" , &a);
    // printf("a adress in decimal = %u\n" , &a);
    // printf("a adress using &a %d\n" , a_padd);


    int a = 4;
    int* a_padd = &a;
    //printf("a adress using & %d\n" , a_padd);
    printf("value at adress %d is %d\n" , a_padd, *a_padd);
    


    return 0;
}