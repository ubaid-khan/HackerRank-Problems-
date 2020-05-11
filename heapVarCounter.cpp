//This code displays the number of objects created at heap memory
#include<iostream>
using namespace std;
class HeapCounter{
public:
    int static x;
    void* operator new(size_t size){
        x++;
        cout<<"Allocated memory & called HeapCounter() as well"<<endl;
    }
    void operator delete(void *){
        x--;
        cout<<"Deallocated memory & called ~HeapCounter() as well"<<endl;
    }
};

int HeapCounter::x = 0;

int main(){
    HeapCounter a;      //calls constructor (these var are stored in stack)
    HeapCounter *h = (HeapCounter *)malloc(sizeof(HeapCounter));    //allocates memory & does not call constructor. This is C way
    HeapCounter *b = new HeapCounter;   //allocates memory also runs the constructor.This is CPP way
    free(b);            //Only deallocates memory & does not call destructor.This is C way
    delete b;           //deallocates memory also calls destructor.This is CPP way
    cout<<"No of objects created = "<<HeapCounter::x;
    return 0;
}
