#include<stdio.h> // prepocessor directory 
int main(){
    int No_of_students=40;
    double Total_students = 34323.342342;
    float Average_passout_rate= 0.50;
    char Like = 'y';
    printf("The size of int is %d",sizeof(int));
    // size =4byte which means 
    // 0-2power(4*8) for unsigned number
    // for signed(+, -) -(2pow(4*8)/2) to (2pow(4*8)/2)-1
    //  similarly
    // For char
    printf("The size of char is %d",sizeof(char));
    // size =1 byte = 8bit so 
    // 0-255 for unsigned(+)
    //  or unsigned -255/2 to (255/2-1)



}