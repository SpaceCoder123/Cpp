// Chapter 1 Unit 2 exercise 3
// find the lowest common denomenator

// this program is retricted to two fractions only, a better one will be developed in future days.


#include<iostream>
#include<cmath>

using namespace std;
int main(){
    double a,b,c,d;
    int power =2;

    cout<<"Enter the numerator of the first fraction";
    cin>>a;
    cout<<"Enter the denomenator of the first fraction";
    cin>>b;
    cout<<"Enter the numerator of the second fraction";
    cin>>c;
    cout<<"Enter the denomenator of the second fraction";
    cin>>d;
    

    float result = ((a*b*d)+ (float)pow((double)c,(int)power))/( (float)pow((double)b,(int)power)*c*d);
    cout<<"the lowest common denomenator is = "<<result<<endl;
    return 0;
}