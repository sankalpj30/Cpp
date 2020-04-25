#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int gnum , min , max , count=1 , a , turn;
    int inp;
    cout << "\t\t\t\t\t WELCOME TO NUMBER GUESSING GAME - \n";
    while (true)
    {
        cout << "Enter the number of guesses you want to make or if you want to exit enter '0' : ";
        cin >> gnum;
        turn=gnum;                         
        if (gnum == 0)
        {
            break;
        }
        cout << "Enter the Minimum number : ";
        cin >> min;
        cout <<"Enter the Maximum number : ";
        cin >>  max;
        a = rand()%(max-min+1);
        for (int i = 1 ; i <= gnum ; i++ )
        {
            cout << "Enter your guess : ";
            cin >> inp;
             
            if(a == inp)
            {
                cout << "WOW!, You have guessed the right number in "<< count << " attempt.\n";
                break;
            }
            count++;
            turn--;
            cout << "Sorry you have entered the wrong number.\n";
            cout << "You are left with "<< turn << " turn.\n";
            if (turn == 0)
            {
                cout << "You have no turn left to guess.\nThe correct guess number was "<<a;
                break;
            }
        
        }
        cout<< "\n";
    }
    return 0;
}