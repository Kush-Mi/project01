#include <iostream>

using namespace std;

class ram{

    int serial = 1;
    string name = "Kushmakar_Mishra";
    long salary = 1000000;

    public : void getd(){
    cout<<"Enter Your Sr.No. : "<<serial;
    cout<<"Enter Your Name : "<<name;
    cout<<"Enter Your Salary : "<<salary;
}

};







int main(){

    ram d1;

    d1.getd();


    return 0;
}