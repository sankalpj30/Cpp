#include <iostream>
#include <string>

#define users 5

using namespace std;

int main ()
{
    string inp;
    string name[users] [2];
    cout << "\t\t\t\t\t WELCOME TO USERNAME FETCHING PROGRAM --->\n";
        
        for(int i = 0 ; i < users ; i++)
        {
            cout << "Please enter the username " <<i+1 << " details : ";
            getline(cin , inp);
            name[i][0] = inp;
            cout << "Please enter the Mobile number :";
            getline(cin , inp);
            name[i][1] = inp;
        } 
        cout << "\n Now we are going to fetch the details of users entered above. \n";

    while (true)
    {
        cout << " Please enter the USER - ID number to fetch those details or enter '-1' to exit : ";
        getline(cin , inp); 
        int e = stoi(inp);
        if ( e == -1 ) 
            {
                cout << " You have successfully exited from Program.\n";
                break;
            }
        else if( e >= 0 && e <= users)
        {
            cout << "The username belonging to USER - ID " << e << " is : " << name[e-1][0] << " and the Mobile Number is : " << name[e-1][1] ;
            cout << "\n";
        }
        
        else
        {
            cout << "You have entered wrong USER - ID number \n";
        }
    }
}