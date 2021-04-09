#include<iostream>
using namespace std;


// lets define what are queue's 
// Queue is a type of data structure which allows first-in first-out approach, the first element get added and also removed when dequeued
// The basic operations of Queue are 
/*
1. Enqueue
2. Dequeue
3. Peek
4. Isfull
5. IsEmpty
*/


// lets define a class named queue
class Queue{
    int size = 10; // the size of the stack
    string stack; // the string input gets added to this
    int header = 0; // a pointer to peek the next character in STACK 
    int top_of_Stack = 0; // the pointer that counts the number of items added to the stack

    public:
    void init(); // initialize the stack 
    void Enqueue(char ch); // adds character to the stack
    void Dequeue(); // removes character from the stack
    void peek(); // gives a brief look at the next index
    void IsFull(); // checks whether the queue is full or not
    void IsEmpty(); // checks whther the queue is empty or not
    // string DisplayQueue(); // working on this

};

void Queue::init(){
    top_of_Stack= 0;
}

void Queue::Enqueue(char ch){
    if (top_of_Stack==size){
        cout<<"The stack is full"<<endl;
    }
    stack+= ch; // concatenation of input string to the parent (stack) string
    top_of_Stack++;
}

void Queue::Dequeue(){
    if (top_of_Stack == 0){
        cout<<"The stack is empty"<<endl;
        return;
    }
    top_of_Stack--;
    stack.erase(0,1); // remvoing the first index of the string
}

void Queue::peek(){
    if ((top_of_Stack==0) || (top_of_Stack==1)) {
        cout<<"There are no other characters to peek in the string"<<endl;
    }
    header++;
    cout<<stack[header]<<endl; 
    if (header>=top_of_Stack){
        cout<<"Cannot peak further";
    }
    
}

void Queue::IsEmpty(){
    if(stack.length() == 0){
        cout<<"The queue is empty"<<endl;
    }
}

void Queue::IsFull(){
    if(stack.length()==size){
        cout<<"The queue is full"<<endl;
    }
}


int main(){
    Queue Queue1;
    Queue1.init();
    Queue1.IsEmpty();
    Queue1.Enqueue('a');
    Queue1.Enqueue('b');
    Queue1.Enqueue('c');
    Queue1.Enqueue('d');
    Queue1.Enqueue('e');
    Queue1.Enqueue('f');
    Queue1.Enqueue('g');
    Queue1.Enqueue('h');
    Queue1.Enqueue('i');
    Queue1.Enqueue('j');

    Queue1.Dequeue();
    Queue1.peek();
    Queue1.peek();
    Queue1.peek();
    Queue1.peek();
    // Queue1.DisplayQueue();

    return 0;
}