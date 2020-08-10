#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

string genRandom()  // Random string generator function.
{
    string ss;
    for(int i = 0; i < rand() % 3 + 3; i++)
        ss += alphanum[rand() % stringLength];
    return ss;
}

int main()
{
    srand(time(0));
    int a;
    cout<<"input the number of the strings: ";
    cin>>a;
    for(int i = 0; i<a; i++){
        cout<<genRandom();
        cout<<endl;
    }
    return 0;
}