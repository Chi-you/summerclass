#include <iostream>
using namespace std;

void func(int);
int main(){
    int input;
    cout<<"Please enter an odd integer: ";
    cin>>input;
    func(input);
}
void func(int a)
{
    int width = 2*(a-1)+1;
    for(int i = 0; i < a; i++){
        for(int j = 0; j<width; j++){
            if(j == 0 || j == width-1)
                cout<<"X";
            else if (j == i || j == width-1-i)
                cout<<"X";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}