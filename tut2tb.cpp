#include<iostream>
using namespace std;
int main(){
    int c;
    char string[5]; // the number in the bracket decides the length the of the string which will give you the output
    // if no number is mentioned inside the bracket then the output will return the character in first index 
    double number;

    cout<<"Enter any number, string and float number here: "<<endl;
    cin>>c>>string>>number;

    cout<<"Here are your numbers: "<<c<<" "<<string<<" "<<number<<" "<<endl;
    return 0;
}