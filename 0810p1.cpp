#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom()  // Random string generator function.
{
    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    int a;
    cout<<"input the number of the strings: ";
    cin>>a;
    for(int i = 0; i<a; i++){
        for(int z=0; z < 5; z++)
            cout << genRandom();
        cout<<" ";
    }
    return 0;
}