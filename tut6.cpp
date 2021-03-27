
#include <iostream>
using namespace std;

int main(){
    cout<<"In this program we will learn about c++ operators"<<endl;
    // endl is used to end the particular line and jump into the next line of the program in the output
    cout<<"Following are the types in c++ operators"<<endl;

    int a=4,b=5;
    // arithmatic operator '+' '-' '*' '/' 
    cout<<"the sum of the two numbers a and b are= "<<a+b<<endl;
    cout<<"the difference of the two numbers a and b are= "<<a-b<<endl;
    cout<<"the product of the two numbers a and b are= "<<a*b<<endl;
    cout<<"the division of the two numbers a and b are= "<<a/b<<endl; // this output will be an integer (closest)
    cout<<"the modulo operator of two numbers or the remainder of two numbers are "<<a%b<<endl;
    cout<<"To consecutively add the number by 1, var++ is used, the value of a is = "<<a++<<endl;
    cout<<"To consecutively subtract the number by 1, var-- is used, the value of a is = "<<a--<<endl;
    cout<<"To consecutively add the number by 1, ++var is used, the value of a is = "<<++a<<endl;
    cout<<"To consecutively subtract the number by 1, --var is used, the value of a is = "<<--a<<endl;

    return 0;
}