#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count;
    string inp;
    cout << "\t\t\t\t Welcome to random number game : \n";
    
    while (true)
    {
        cout << "Please enter the number of random numbers you want or enter '0' to exit : ";
        getline(cin, inp);
        count = stoi(inp);

        if(count == 0)
        {
            break;
        }
        for (int i=0 ; i < count ; ++i)
        {
            cout << rand()%10;
            if (i == count-1)
            {
                break;
            }
            cout << " , ";

        }
        cout << ".";
        cout << "\n\n";
    }
    return 0 ;

}