#include <iostream>
using namespace std;
int main(){
    string name = "Buisness tycoon";
    cout << name << endl;
    // Concatenation
    string firstName = "Mayank";
    string secondName = "Here";
    string thirdName = "Whats";
    string fourthName = "up";
    cout << "Hi This is " << firstName << " " << secondName << endl; 
    // Append
    cout << "Hey " << thirdName.append(fourthName) << endl;
    // String Length
    string txt = "hhfjhjfjfsjsfhjhfjsjhjsdf";
    cout << "The length of the string is " << txt.length() << endl;
    // Access String
    string mystring = "Hello";
    cout << mystring[0] << endl ;
    cout << mystring[1] << endl ;
    cout << mystring[2] << endl ;

} 