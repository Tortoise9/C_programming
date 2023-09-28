#include<stdio.h>
void print(int ,char , float , double);
// protoyping
int main(){
    // Primitive data type
    // int , char, float , double void 
    int Age =23;
    char Isaprogrammer='y';
    float gpa= 3.07;
    double salary = 40000.89080 ;
    printf("The size of double is %d",sizeof(double));
    printf("\n");
    print(Age,Isaprogrammer,gpa,salary);
     
    return 0;
}
void print(int a, char b , float c , double d ){
    printf("My Age is %d",a);
    printf("\nTom : are you a programmer ? %c",b);
    printf("\nHow much gpa you have got in 12 ? %f",c);
    printf("\nHow much money you except from us ? %lf ",d);
}