#include<iostream>
using namespace std;

int global = 6; //this is a global variable
void sum(){
    int a;
}

int main(){
    sum();
    // \n is line break
    int a = 4;
    //this is an integer data type
    int b = 3;
    // and variable can be declared in this fashion also.
    int c=24,d=32;
    // this is float variable using float data type
    float pi = 3.1412;
    // this is char variable holding character data type
    char e = 'b'; //has to be in single qoutes and the value should not be in multicharacters

    cout<<"this is tutorial 4 (variable scope and data types),here is the value of a="<<a<<",the value of b="<<b ;
    cout<<"\nthe value of c="<<c<<"\nthe value of d="<<d<<"\nthe value of pi is ="<<pi<<"\nand the char variable value is = "<<e;
    int global = 13;
    cout<<" "<<global;
    int local = 13;
    // if global variable is declared inside the function then the value of the varaible will be overwritten in the variable
    //local variables will be of utmost importance
    bool f = true;
    // returns f = 1 if the value is true and false if the value of f =0 if it is false
    return 0;
}   

/*  1 variables are case sensitive
    2 variables must begin with a letter or an alphabet or an underscore
    3 variables names can vary upto 1-255 characters 
    4 no special characters are allowed 
    5 cannot use built-in functions as varibles and even c++ as a variable
    6 no spaces in a variable, connect the names with an underscore
*/

