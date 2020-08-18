#include <bits/stdc++.h> 
using namespace std;


bool checkIfExist(vector<int>& arr) {
    unordered_map<int, int> s;
    for (int x: arr)
        s[x]++; // if key repeat
    for (int x: arr)
        if (x != 0 && s.find(x * 2) != s.end()) // unordered_map.find(key)
            return true;
        // else if (x == 0 && s[x] >= 2)
        //     return true;
    return false;
}
int main(){
    vector<int> a{10,2,5,3};
    //vector<int> b{2,5,6};
    checkIfExist(a);
}




