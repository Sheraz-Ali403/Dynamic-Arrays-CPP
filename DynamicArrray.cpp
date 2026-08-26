#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY

//have to work on

#include <iostream>

using namespace std;

class DynamicArray{
    int *arr;
    int size;
    int cap;
public:
    DynamicArray(int size):size(size), cap(2){
        while(cap > size){
            cap*=2;
        }
        arr = new int[cap];
        setVal();
    }
    void setVal(){
        for(int i=0; i<size; i++){
            cout << "Enter value for index " << i << " : ";
            cin >> arr[i];
        }
    }
    void pushBack(int value){
        if(size == cap) cap*=2;
        arr[size++]=value;
    }
    int& operator[](int index){
        if(index>0 || index < size-1){
            return arr[index];
        }
        throw std::out_of_range("Index out of bounds");
    }
    DynamicArray(const DynamicArray& other){
        size = other.size;
        cap = other.cap;
        arr = new int[size];
        for(int i=0; i<size; i++){
            arr[i] = other.arr[i];
        }
    }
    DynamicArray& operator=(const DynamicArray& other){
        if(this!=&other){
            size = other.size;
            cap = other.cap;
            arr = new int[size];
            for(int i=0; i<size; i++){
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }
    void display(){
        for(int i=0; i<size; i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
    ~DynamicArray(){
        delete[] arr;
    }


};

int main(){
    DynamicArray arr1(3);
    arr1.display();
    DynamicArray arr2(arr1);
    arr2.display();
    arr2.pushBack(4);
    arr2.display();
    cout << arr2.operator[](3);
    
}























#endif