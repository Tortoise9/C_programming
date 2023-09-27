#include<stdio.h>

//stdio.h = header file that include functions
// #include = prepocessor directory it should process first before compilation

int main(){// main function (return int type)
// Data type
/* 1. integer
2.Character
3.Floating point
4. Double 
5. Void 
*/
int a = 3;
printf("The value of a is %d ",a);
printf("\nthe size of a is %d byte(in 64-bit system)",sizeof(a));
// in 32 byte system it is 2 byte 
// it have 3 type int short int


return 0;
}