#include<stdio.h> // preprocessor commands 
// #include = prepocessor directory : it include the file given in angle bracket
// stdio.h is a header file whieh is standard input output library
// it contain input output related function such as scanf , printf etc
// 
// tells compiler to do prepocessing before doing acutal compilation

int main(){
    //C program have one or more function (mandatory function = main function main() )
    // from main our acutal compilation starts 
    // int return value 0 as it is a return type when execution is sucessful
    int a ;  //****this is statement 
    // it is a variable to store a value that can be used for the future purpose .
    // statement and  control flow will come later . if loop etc
    //comments (// single line && /**/ multiline comment)
    printf("hello world");
    // printf is a inbuild function for printing stuff
    return 0 ;
    //now it tell it is sucessfully executed to the system(os)
    // as int is return type and 0 is passed to that 


    // Important note : 
    // 1. c is case sensitive we cannot write Printf() (Capital P)
    // 2. comment is ignored 
    // 3. white space is ignored
    // every C statement must be mareked iwth a semicolon

}