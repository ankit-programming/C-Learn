#include <stdio.h>




int main1(){
    int in;
    printf("\ngive input");
    scanf("%d",&in);
    // switch
    switch (in){
    case 1: printf("case 1");
    break;
    case 2: printf("case 2");
    break;
    case 3: printf("case 3");
    break;    
    case 13: printf("case 31");
    default: printf("not any value");
    }
return 0;
}
/*
switch me jo variable use karte hai uski value agar vo hoti hai to kiya kanra switch hai 
ex upper ex kiy akrega jab user input dega vo in variabel me sotre hoga or switch ke according agar 
variabel ke value 1 hogi to uske corospond code run hoga and so on for rest of witch

imp note :- agar hum break nahi lagte hai to jo condition statisfie hui hai use phele 
walle condtion be run hogi 
ex agar case 3 statisfyi hua to case 1 or case 2 dono be run hogi

Default --> agar koi be case statisfie nahi hota to default walla code run hoga
*/



int main(){
    int a;
    printf("enter age");
    scanf("%d",&a);
    if (a>18){
        printf("eligibel");}

    else if (a==18){
        printf("may be consider");}
    
    else {
        printf("not eligibel");
    }    
    main1();
    return 0;
}

/*
observation
1>. agar main function ke undar fir se main function call karte hai (main()) to main ke andar
 phir se ek or main chala dega

2>.hmesa user defin function main ke phele defin kro verna c compiler bad me define kre hue
function samaj nahi payega or phir error de ga

 */
