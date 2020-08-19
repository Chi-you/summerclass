#include <iostream>
using namespace std;
void func(){
    int a;
    cout<<"Please enter an even number: ";
    cin>>a;
    int b = a/2;
    for(int i = 1; i<= b; i++){
        for(int j = 1; j <= a+1; j++){
            if(j == i || j == a+2-i) cout<<"A";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 1; i<=b; i++){
        for(int j = 1; j<=a+1; j++){
            if(j == b+1) cout<<"A";
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    func();
}