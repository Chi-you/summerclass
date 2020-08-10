#include <iostream>
using namespace std;
template <typename E>
class Queue { // an interface for a queue
public:
    int size() const; // number of items in queue
    bool empty() const; // is the queue empty?
    const E& front() const; // the front element
    void enqueue (const E& e); // enqueue element at rear
    void dequeue(); // dequeue element at front
};

class RuntimeException{ // generic run-time exception
private:
    string errorMsg;
public:
    RuntimeException(const string& err) 
        { errorMsg = err; } 
    string getMessage() const  
        { return errorMsg; }
};

class QueueEmpty : public RuntimeException { public:
    QueueEmpty(const string& err) : RuntimeException(err) { }
};