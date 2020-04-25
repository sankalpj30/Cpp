#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count , mul , num=0 ;
    string inp;
    
    cout << "\t\t\t\t\t  WELCOME TO FIND A MULTIPLE AND COUNT OF MULTIPLES OF ANY NUMBER. \n";
    while(true)
    {
        cout << "Please enter a number you want multiples of or if you want to exit enter '0' : ";
        getline (cin,inp);
        mul = stoi (inp);
        if (mul == 0)
        {
            break;
        }
        cout << "Enter the number of multiples you want of "<< mul << " number : ";
        getline (cin , inp);
        count = stoi (inp);
        cout << "The multiples are :";
        for (int i = 1 ; i <= 100 ; i++)
        {
            if (i % mul != 0)
            {
                continue;
            }
            
            cout << i ;
            num++;
           
            if (count == num)
            {
                break;
            }
            cout <<" , ";
        }
        cout << "\n";
   
    }
    return 0 ;
}