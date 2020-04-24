#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nm;
    int num;   
    cout << "Please enter your name : ";
    getline(cin, nm);
    cout << "Hello, "<<nm<< " What would you like to have : ";
    cout << "\nMenu \n1.Fries\n2.Burger\n3.Pizza\n";
    cout << "Please enter the number regarding your choice : ";
    cin >> num;
    switch(num){
        case 1 :
                cout << "Price for fries is 10.";
                break;
        case 2 :
                cout << "Price for burger is 10.";
                break;
        case 3 :         
                cout << "Price for pizza is 10.";
                break;
    }
    return 0;
}