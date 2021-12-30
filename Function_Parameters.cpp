#include <iostream>
using namespace std;
void myFunc(string name){
    cout <<"My name is " << name << endl;
}
// Default parameter
void func2(string name1 = "rudhra"){
      cout << "My name is " << name1 << endl;
}
// Multiple Parameters
void func3(string name2 , int age){
    cout << "My name is " << name2 << ". And I am " << age << " years old " << endl;
}
int main(){
    // Parameters
    myFunc("Markzucerberg");
    myFunc("Ratan Tata");
    myFunc("Sundar Pichai");
    func2("shivayee");
    func2("");
    func2("Omkara");
    func3("Mayank Pal",21);
    
}
