// print table in cpp

#include<iostream>
using namespace std;

int main(){
    int table_name;
    cout<<"Enter the table (name) you wish to print ="<<endl;
    cin>>table_name;
    for (int multiple = 1 ;multiple<11;multiple++){
        cout<<table_name<<" x "<<multiple<<" = "<<(table_name*multiple)<<endl;
    }
    return 0;
}