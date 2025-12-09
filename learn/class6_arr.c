# include <stdio.h>

int main(){
    int arr[] = {34,1,33,4,45,5,56};
    int* num_ptr = &arr[1];//array ka adress ke liye index dena jaroori hai
    printf("array adress is %d", num_ptr);

    //update array data
    arr[2] = 2;
    printf("\n %d",arr[2]);
    //we can use for loop to make all value print
    int values = sizeof(arr)/sizeof(arr[1]);//to kmnow size of datain byte and then divid them to singal data size so we can get total value we have in data
    for (int i = 0; i <=values;i++){
        printf(" %d ",arr[i]);
    }




    //                              2d array- class 7
    int array_2d[][2] = {{1,2},{2,3},{},{1,23}}; //we have to aleast define data size of second dimenson array we can not leave area emty like in 1d array 
    printf("%d ",array_2d[1][1]);
    array_2d[1][1] = 0;
    printf("updated 2d array value %d ",array_2d[1][1]);

    for (int i=0; i <= 4;i++){
        printf("\nf");
        for (int j=0; j<=3;j++){
            printf("%d ",array_2d[i][j]);
        }
    }
//q1 what if we run loop more thean elemnt number 
//what will print if thier is no data in one of the 2d array -->0
// if we accses value more thean(arr[7]) defined size(arr[2]) of array thean we will not get garbage value insate we get some outout according to "start address + index × element_size" rule 

//printf("UMUM%d " , array_2d[2][1]);// access elemnt who does not have any value
//Note:= sizeof() tell aray all elemnt totals size arr[1,2,3] => 4+4+4 = 12 byte size of arr
}