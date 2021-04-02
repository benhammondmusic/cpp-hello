// https://medium.com/@olehc/lets-write-a-simple-sine-wave-generator-with-c-and-juce-c8ab42d1f54f

/* hello.cpp */
#include <iostream>
using namespace std;



string doubleName(string name){
    return name + name;
}



int main()
{
    string name;
    
    while (name != "b")
    {
        cout << "Please enter your name: ";
    
    cin >> name;
        cout << "your name must be b to exit\n";
    }
    cout << "Hello, " << doubleName(name);
    
    cout << "\n";

return 0;
}