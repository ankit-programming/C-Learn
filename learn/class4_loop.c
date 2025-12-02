//---------------------------- for -----------------------------

// #include <stdio.h>

// int main()
// {
//     // for loop
//     //  for(intilisation ; condition ; updating){}
//     //  for (int i=1; i<=7 ; i=i+1){//outer loop
//     //      printf("out%d ",i);
//     //      for (char c='a'; <='f'; c=c+1){
//     //          printf("in%d " , c);
//     //      }
//     //  }

//     // taks

//     for (int i = 0; i <= 100; i = i + 1)
//     {   printf("\n\n");
//         printf("press 's' to Start pattren");
//         char pat;
//         scanf(" %c", &pat);
//         printf("\n");
//         if (pat == 's')
//         {
//             printf("----------------------\n");
//             printf("direction u or d");
//             char direction;
//             scanf(" %c", &direction);

//             printf("Character");
//             char character;
//             scanf(" %c", &character);

//             printf("Time");
//             int time;
//             scanf("%d", &time);
//             printf("\n\n");
//             if (direction == 'd')
//             {
//                 for (int i = time; i >= 0; i = i - 1)
//                 {
//                     for (int j = 0; j <= i; j = j + 1)
//                     {
//                         printf("%c", character);
//                     }
//                     printf("\n");
//                 }
//             }
//             else if (direction == 'u')
//             {
//                 for (int i = 0; i <= time; i = i + 1)
//                 {
//                     for (int j = 0; j <= i; j = j + 1)
//                     {
//                         printf("%c", character);
//                     }
//                     printf("\n");
//                 }
//             }

//             else
//             {
//                 printf("give u or d only");
//             }

//             printf("\n\n\n\n\n=============================");
//         }

//         else
//         {
//             break;
//         }

//     }
// return 0;}



// start pattren using while

//------------------ while --------------------------
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int term = 5;
//     while (term >= i)
//     {
//         printf("out\n");
//         i++;
//         int j=0;
//         while (term >= j)
//         { // notrs:- diifrnce between (i<=5) (5<=i)
//             printf("in%d ", j);
//             j++;
//         }
//     }
// }

// -------------------  do while ---------------------------

// #include <stdio.h>

// int main (){
//     int i = 5;
//     do{
//         printf("in do %d",i);
//         i++;
//     }while(i>=0);
// }




#include <stdio.h>

int main (){
    int i = 0;
    do{
        printf("in_do%d ",i);
        i++;
    }while(i<=5);
}


/*
Observation

we do not declaer variabel inside any loop becuse at every end of itration variabel will loos in memroy
and hence at evry itration every time variabel will decalerd
*/