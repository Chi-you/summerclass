#include <iostream>
using namespace std;

void func(int);
int main(){
    int input;
    cout<<"Enter an integer: ";
    cin>>input;
    func(input);
}
void func(int a)
{
    int sum = 0;
    for(int i = 2; i < a; i += 2){
        sum += i;
    }
    cout<<sum;
}