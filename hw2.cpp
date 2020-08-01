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
    int b, c, d, e;
    b = 2*a-3;
    c = 1;
    for(int i = 0; i<a; i++){
        if(i>0)
            cout<<"X";
        if(i>1){
            for(d = c;d>0; d--)
                cout<<" ";
        }
        cout<<"X";
        for(e = b; e > 0; e--)
            cout<<" ";
        if(i != a-1)
            cout<<"X";
        if(i>1){
            for(d = c;d>0; d--)
                cout<<" ";
            c++;
        }
        if(i>0)
            cout<<"X";
        b -= 2;
        cout<<endl;
    }
}