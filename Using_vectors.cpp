#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> vec {1,2,3,4,5};

void pv()
{
    
    for (int i=0 ; i< vec.size(); i++)
    {
        cout <<  vec.at(i);
        
    }
    cout << "\n";
}
int main ()
{
    pv();
    vec.pop_back();
    pv();
    vec.push_back(6);
    pv();
    vec.erase(vec.begin()+1);
    pv();
    vec.insert(vec.begin() + 3 , 8 );
    pv();
    return 0;

}