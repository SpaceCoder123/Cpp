// Basic if else statments
#include <iostream>
using namespace std;

int main()
{

    /************************** BASIC IF-ELSEIF-ELSE PROGRAM ***********************/
    // the control structures are the ones that give the program a specific structure and flow
    // there are three types of basic control structures in c++
    // 1 sequence structures
    // 2 selection structure
    // 3 loop structure

    // int x;
    // cout<<"Enter any number = ";
    // cin>>x;
    // if(x>10){
    //     cout<<"less than 10";
    // }
    // else if(x==10){
    //     cout<<"Equal to 10";
    // }
    // else{
    //     cout<<"Greater than 10";
    // }

    // another sample basic if else

    // int y=0;
    // if (y<3){
    //     cout<<y<<endl;
    //     y++;
    // }

    // check for voting age
    // int age;
    // cout<<" Tell me your age = "<<endl;
    // cin>>age;
    // if (age>=18){
    //     cout<<"You are eligible to vote"<<endl;
    // }
    // else{
    //     cout<<"You are not eligible for voting since you are below the age of 18"<<endl;
    // }
    // return 0;

    /***************************Switch Case*****************************/
    int age;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are eligible to vote" << endl;
        break;
    case 22:
        cout << "You are eligible to vote and your age is " << age << endl;
    default:
        cout << "No special case" << endl;
        break;
    }