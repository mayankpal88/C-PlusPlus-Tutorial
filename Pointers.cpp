#include <iostream>
using namespace std;
int main(){
    string food = "Pizza";
    cout << food << endl;
    // To find a address of variable
    cout << &food;
    // To store a address in other variable
    string* ptr = &food;
    cout << ptr << endl;
    // Defrencing a address 
    cout << *ptr ;
}