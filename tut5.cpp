#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<< "Enter the value of num1 \n"; // '<<' this is an insertion operator
    cin>>num1; // this is an extraction operator,
    cout<< "Enter the value of num2 \n"; // '<<' this is an insertion operator
    cin>>num2; // this is an extraction operator

    /*cin extracts the value of input and adds it to the variable assigned, for the above example the value is assigned to num1 and num2 respectively,
    NOTE the cout and cin must be consecutive or else the cin value will exchange the value and hence the value will be exchanged */

    cout<<"the sum is= "<<num1+num2;
    return 0;
}



