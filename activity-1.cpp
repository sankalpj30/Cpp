#include <iostream>
#include <string>

using namespace std;

#define infant 10
#define teen 19
#define adult 50
#define old 90

void detail(){
   
    string name;
    int age;
    cout << "Enter your Name :";
    getline (cin, name);
    cout << "Enter your age";
    cin >>age;
    cout<< "Hello "<<name<< " of age "<<age<<"\n";
}
int main()
{
    
    detail();
    if (age<infant)
    {
        cout << "You belong to Infant group.\n";
    }
    else if (age<=teen)
    {
        cout << "You belong to Teen group.\n";
    } 
    else if (age<=adult)
    {
        cout << "You belong to Adult group.\n";
    }
    else
    {
        cout << "You belong to old group.\n";
    }
    return 0;
}