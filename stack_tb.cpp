#include<iostream>
using namespace std;

class stack{
    int size = 10; // this is size variable of the stack , and the amount of data it can hold
    char stck[10]; // holds the stack
    int tos; // index of the top of stack

    public: 
    void init();
    void push(char ch);
    char pop();

};
void stack::init(){
    tos = 0; // gives the initial of stack and sets it to zero
}

void stack::push(char ch){
    if (tos == size){
        cout<<"Stack is full";
        return;
    }
    stck[tos]=ch; // this allows only one character
    tos++; // this increments the value
}
// pop a character

char stack::pop(){
    if (tos==0){
        cout<<"The stack is empty";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){
    stack s1,s2;
    int i;
    s1.init();
    s2.init();

    s1.push('a');
    s2.push('b');

    s1.push('c');
    s2.push('d');

    for(i=0;i<2;i++){cout<<"Pop S1: "<<s1.pop()<<endl;};
    for(i=0;i<2;i++){cout<<"Pop S2: "<<s2.pop()<<endl;};

    return 0;
}