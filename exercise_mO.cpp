// lets create a class which holds the user values and append it to an array
// now the array a group of objects for any other purposes

#include<iostream>
#include<string>
using namespace std;

// creating a class of user data
class user{
    private:
    string name;
    int phonenumber; // these are all private variables and cannot be accessed other functions or classes outside the class
    string batch;
    int salary;

    public:
    string get_name(){return name;}; // the only change is that I have the declared the prototype ->
    int get_number(){return phonenumber;};// -> directly
    string get_batch(){return batch;};
    int get_salary(){return salary;};

    void add_name(string username);
    void add_number(int number);
    void add_batch(string batch_number);
    void add_salary(int salary_value);

    void get_details();
}; // add semicolon at the end of the class



// lets declare all the prototype functions

void user::add_name(string username){
    // name = username;
    name.assign(username);
}

void user::add_number(int number){
    phonenumber=number;
}

void user::add_batch(string batch_number){
    batch.assign(batch_number);
}

void user::add_salary(int salary_value){
    salary=salary_value;
}

void user::get_details(){
    cout<<""<<endl;
    cout<<"This is the details of "<<name<<endl; 
    cout<<"name = "<<name<<endl;
    cout<<"phone number = "<<phonenumber<<endl;
    cout<<"batch = "<<batch<<endl;
    cout<<"salary = "<<salary<<endl;
}




int main(){
    user user1,user2;
    string name;
    int phonenumber;
    string batch;
    int salary;

    cout<<"Enter the name of the user: "<<endl;
    cin>> name;
    user1.add_name(name);


    cout<<"Enter the phone number of the user: "<<endl;
    cin>> phonenumber;
    user1.add_number(phonenumber);

    cout<<"Enter the batch number of the user: "<<endl;
    cin>> batch;
    user1.add_batch(batch);

    cout<<"Enter the salary of the user: "<<endl;
    cin>> salary;
    user1.add_salary(salary);

    user1.get_details();


    return 0;
}