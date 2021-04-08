// chapter 1 unit 1 exercise 2

// write a program to convert feet to inches. and if the user enters zero as an input exit the program

#include<iostream>
using namespace std;
int main(){

    double feet;
    while (feet!=0){
        cout<<"Enter the value in feet = ";
        cin>>feet;
        double inches = feet * 12;
        cout<<"The value of feet in inches is = "<<inches<<endl;
    }

    cout<<"Program shut down since the entered value was 0";
    return 0;
}

// why double data type, because the mathematical values cannot be in integer always hence for user easiness, double data type has been used