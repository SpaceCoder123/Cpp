#include<iostream>
using namespace std;

// this is simple class declaration
class myclass{
    int a;
    public:
    void set_A(int num); // these functions are not declared yet
    int get_A(); // these are prototypes, their functionality can declared here

    // void will be output of set_A function taking integer as an input
};
// declaration of functions inside my_class
void myclass::set_A(int num){
    a=num; // an public variable can accessed and can changed or added to private variable
}
int myclass::get_A(){
    return a;
}




int main(){
    myclass obj1,obj2; // now myclass has become typevariable and it has created 2 objects which has the same properties of myclass.
    // now remember myclass does not hold memory space where the two objects hold the memory space

    // I have added the a variable value into the function, now a has been added into the created objects and they hold two unique values but possess two similar properties

    obj1.set_A(100);
    obj2.set_A(200);
    
    // lets give the output of the stored values inprivate variable using get_a Function as declared before

    cout<<"obj 1 value of a (private variable) is = "<< obj1.get_A()<<endl;
    cout<<"obj 2 value of a (private variable) is = "<< obj2.get_A()<<endl;

    // here is the output, we have accessed private variable through set_A and returned the value stored in a in get_A function which a public function and can be accessed any where in the program

    
    return 0;
}