#include<iostream>
using namespace std;

// write a program to take the input of the employee working hours and the dedicated employee wage
// calculate the gross pay and display the output


int main(){
    char name[80];
    float hours;
    int wage;

    cout<<"Enter the name of the employee = ";
    cin>>name;
    cout<<"Enter the number of hours the employee worked = ";
    cin>>hours;
    cout<<"Enter the wage per hour the employee demands = ";
    cin>>wage;

    cout<<"The gross wage Mr/Ms "<<name << "by working "<<hours<<"hours in a day is = "<<(hours*wage)<<endl;
    return 0;
}