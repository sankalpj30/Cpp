#include <iostream>
#define grade_a 75
#define grade_b 50
#define grade_c 25

using namespace std;


int main()
{
    int val = 0;
    int age;
    string name;
    cout <<"Enter your name : ";
    getline(cin,name);
    cout << "Enter your age : ";
    cin>> age;
    cout <<"Enter the value of your choice in-between(0-100) :";
    cin >> val;
    cout << name ;
    cout <<("\n",age);
    if(val < grade_c)
    {
        cout << "\nFail : Grade C";
    }    
    else if(val < grade_b)
    {
        cout << "\nPass: Grade B";
    }
    else 
        cout <<"\nExcellent : Grade A";
    return 0;
}