#include <bits/stdc++.h> 
using namespace std;

void print_map(std::unordered_map<int, int> const &m)
{
	for (auto const& pair: m) {
		std::cout << "{" << pair.first << ": " << pair.second << "}\n";
	}
}

bool checkIfExist(vector<int>& arr) {
    unordered_map<int, int> s;
    for (int x: arr)
        s[x]++;
    print_map(s);
    for (int x: arr)
        if (x != 0 && s.find(x * 2) != s.end())
            return true;
        else if (x == 0 && s[x] >= 2)
            return true;
    return false;
}
int main(){
    vector<int> a{10,2,5,3};
    //vector<int> b{2,5,6};
    checkIfExist(a);
}




