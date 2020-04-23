#include <iostream>
#define grade_a 75
#define grade_b 50
#define grade_c 25

using namespace std;


int main()
{
    int val = 0;
    cout <<"Enter the value of your choice in-between(0-100) :";
    cin >> val;

    if(val < grade_c)
    {
        cout << "Fail : Grade C";
    }    
    else if(val < grade_b)
    {
        cout << "Pass: Grade B";
    }
    else 
        cout <<"Excellent : Grade A";
    return 0;
}