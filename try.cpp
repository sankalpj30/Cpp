#include <iostream>
#define level 3

using namespace std;


int main()
{
    #ifdef level == 0
        #define score 0
    else
        #ifdef level == 1
            #define score == 1
    #endif
    #endif
    elif level == 2   
        #define score == 30
    elif level == 4
        #define score 45    
    endif

    #ifdef score
        cout<<score;
    #endif    
    return 0;
}