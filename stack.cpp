#include <iostream>
#include <vector>
#include <string>
using namespace std;

class RuntimeException{ // generic run-time exception
private:
    string errorMsg;
public:
    RuntimeException(const string& err) 
        { errorMsg = err; } 
    string getMessage() const  
        { return errorMsg; }
};

class StackEmpty : public RuntimeException {
public:
    StackEmpty(const string& err) : RuntimeException(err) {}
};

class StackFull : public RuntimeException {
public:
    StackFull(const string& err) : RuntimeException(err) {}
};

template <typename T>
class ArrayStack{
    enum{ DEF_CAPACITY = 100 }; // default stack capacity
public:
    ArrayStack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const T& top() const;
    void push(const T& e);
    void pop();
    void reverse(vector<T>& V);
private:
    T *s;
    int capacity;
    int t;
};

template <typename T> ArrayStack<T>::ArrayStack(int cap)
    :s(new T[cap]), capacity(cap), t(-1) { }

template <typename T> int ArrayStack<T>::size() const
    { return (t+1); }

template <typename T> bool ArrayStack<T>::empty() const
    { return (t<0); }

template <typename T>
const T& ArrayStack<T>::top() const
{
    if(empty()) 
        throw StackEmpty("Top of empty stack");
    return s[t];
}

template <typename T>
void ArrayStack<T>::push(const T& e)
{
    if(size() == capacity) 
        throw StackFull("Push to full stack");
    s[++t] = e;
}

template <typename T>
void ArrayStack<T>::pop(){
    if(empty()) 
        throw StackEmpty("Pop from empty stack");
    --t;
}

template <typename T>
void ArrayStack<T>::reverse(vector<T>& V) 
{ // reverse a vector
    ArrayStack<T> S(V.size());
    for (int i = 0; i < V.size(); i++) // push elements onto stack
        S.push(V[i]);
    for (int i = 0; i < V.size(); i++) { // pop them in reverse order
        V[i] = S.top(); 
        S.pop();
    }
}

int main(){
    ArrayStack<int> A;
    A.push(7);
    A.push(3);
    cout<<A.top()<<endl;
    A.pop();
    A.push(9);
    cout<<A.top()<<endl;
    A.pop();
    cout<<A.top()<<endl;
    ArrayStack<string> B(10);
    B.push("BOB");
    B.push("Alice");
    cout<<B.top()<<endl;
    B.pop();
    cout<<B.top();
}