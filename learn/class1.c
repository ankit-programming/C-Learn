#include<stdio.h>

int main(){
    int var1 = 1;
    float var2 = 5.7;
    char var3 = 'a';
    printf("%c",var3);
    return 0;
}


/*
#Variabel :- variable is name of memory location which store value
                             types 
i>. int(-1,0,1){%d}         ii>.float(-1.4,0.0,1.49){%f}             iii>. char('a','A','@'){%c}


syntex 
    datatype var_name = data;




FAQ
Q1.Why we use "int main" instated of "char main" or "float main"
Ans. 
We use 'int' in the main function because it allows us to return 0 or a non-zero value 
to the operating system, depending on whether the program ran successfully or had an error.
According to the C and C++ standards, the main function must return an integer value, not a char or float.

Q2. Why do we do #include<stdio.h>
Ans. #include is used to import file.
 which file to import come in <>
stdio.h -----> contain standard I/O function like printf, scanf, getchar, putchar, fgets, fopen, fclose, etc.
                it does not contain conditon satment or loop (if else while etc) , datatype (int,char etc) as they are inbuilt in c lang.

*/