#include <iostream>
#include <iomanip> // one od the libraries for manipulators
using namespace std;

// this chapter is about constants,manipulators and Operator Precedence
int main(){
    // cout<<"Welcome to tut8";

    /********************************Constants**********************************/
    
    // int a = 34;
    // cout<<"The value of a was ="<<a<<endl;
    // a = 32; // dont write int if you are overwritting a statement
    // cout<<"The overwritten value of a is= "<<a<<endl;

    // in order not to change the value in the above values, 
    // const int b = 3;
    // cout<<"The value of b was = "<<b<<endl;
    // b=2; //should return an error
    // cout<<"The value after overwriting is = "<<b<<endl;
    // error: assignment of read only variable 
    // now thruough out the program the value of b cannot be changed
    // const can be given to any data type.
    // in our programs we do not want the program to change the value of the variable after the computation

    /*******************************Manipulators********************************/

    // they help in manupilating the output display in the terminal or in any other program
    //endl is one of the manupilator

    // const int a =2,b=78,c=279;
    // cout<<"The value of a is = "<<setw(4)<<a<<endl;
    // cout<<"The value of b is = "<<setw(4)<<b<<endl;
    // cout<<"The value of c is = "<<setw(4)<<c<<endl;

    // // all the output will be shifted to 4 cells (n cells) to the right when set w is given 
    
    // // without setw

    // cout<<"The value of a is = "<<a<<endl;
    // cout<<"The value of b is = "<<b<<endl;
    // cout<<"The value of c is = "<<c<<endl;

    /*******************************Operator Presedence***************************/

    // int a= 3, b=5;
    // int c = a*5+b;
    // cout<<"c= "<<c;

    // read the documentation in the reference website to undetstand the procedure of compiler solving the above problem
    // priority of solving a mathematical problem is called Operator presedence 
    return 0;
}