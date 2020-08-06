// class and memory allocation
/*
Every class that allocates its own objects using new should:
• Define a destructor to free any allocated objects.
• Define a copy constructor, which allocates its own newmember storage
and copies the contents of member variables.
• Define an assignment operator, which deallocates old storage, allocates
new storage, and copies all member variables.
*/

class Vect { // a vector class
public:
    Vect(int n = 10); // constructor, given size
    Vect(const Vect&);
    Vect& operator=(const Vect&);
    ~Vect(); // destructor
    // . . . other public members omitted
private:
    int* data; // an array holding the vector
    int size; // number of array entries
};
Vect::Vect(int n) { // constructor
    size = n;
    data = new int[n]; // allocate array
}

// copy constructor
Vect::Vect(const Vect& a) { // copy constructor from a
    size = a.size; // copy sizes
    data = new int[size]; // allocate new array
    for (int i = 0; i < size; i++) { // copy the vector contents
        data[i] = a.data[i];
    }
}

//operator overloading
Vect& Vect::operator=(const Vect& a) { // assignment operator from a
    if (this != &a) { // avoid self-assignment
        delete [] data; // delete old array
        size = a.size; // set new size
        data = new int[size]; // allocate new array
        for (int i=0; i < size; i++) { // copy the vector contents
            data[i] = a.data[i];
        }
    }
    return *this; // return reference to chain the assignment together(i.e. a = b = c)
}
Vect::~Vect() { // destructor
    delete [] data; // free the allocated array
}

/* if didn't define above function then it the operation below will 
   call default copy constructor that only provided 'shallowcopy'
   i.e. 
   1. b = a -> will not copy the content of the array but copies 
      the pointer to the array’s initial element, so if a's array changes
      b's array will also change
   2. c = a -> cause memory leak, Because we have not provided an assignment 
      operator, the statement “c=a,” also does a shallow copy of a to c. 
      Only pointers are copied, not array contents. Worse yet, we have lost 
      the pointer to c’s original 10-element array, thus creating a memory leak.
*/
int main(){
    Vect a(100); // a is a vector of size 100
    Vect b = a; // initialize b from a (DANGER!)
    Vect c; // c is a vector (default size 10)
    c = a; // assign a to c (DANGER!)
}
