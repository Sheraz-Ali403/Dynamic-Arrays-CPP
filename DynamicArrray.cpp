#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY

//have to work on

#include <iostream>
#include <string>
using namespace std;


/*
class Exception{
    string text;
public:
    Exception(string txt):text(txt){ }
    ~Exception() { }
    string displayException(){
        return text;
    }
};

*/

template <typename T>
class DynamicArray {
private:
    T *arr;
    size_t size, capacity;
public:
    ~DynamicArray(){
        delete[] arr;
    }
    DynamicArray(int size): size(size), capacity(2) {
        if(size <=0 ) throw  std::invalid_argument("Size must be greater than zero");

        while(size > capacity) capacity*=2;
        try {
            arr = new T[capacity]; 
            //No throw, new itself throws exeptions if something goes wrong
        }
        catch (const std::bad_alloc& e) {
            cout << "Memory allocation failed!";
        }
    
    }
    void setValues(){
        for(int i = 0; i < size; i++){
            cout << "Enter value at index " << i << ": ";
            
            if(i == 0)  cin.ignore();  // Clear leftover newline from input buffer
            
            // Check at compile-time if the template type T is a std::string
            if constexpr(std::is_same_v<T, std::string>) { 
                getline(cin, arr[i]);  // Read entire line including spaces for strings
            } else  cin >> arr[i];  
            
        }
    }

    int getSize() return size;
    int getCapacity() return capacity;

    // Add new elemnet to end
    void pushBack(int value){
        if(size == cap) cap*=2;
        arr[size++]=value;
    }

    // Remove last element and decrease size and adjust capacity
    void popBack(){
        if(size == 0)  throw std::invalid_argument("Cannot pop from an empty array");
        size--;  
        
        // For memory efficiency
        if(size > 0 && size == capacity / 4) {
            T *newArr = new T[capacity / 2];
            for(int i = 0; i < size; i++)  newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
            capacity = capacity / 2;
        }
    }

    //Display Last Element
    void peek() {
        cout << arr[size];
    }

    //Diplay whole array
    void display(){ 
        for(T element : arr){ //Dont know here T works or not
            cout << element << endl;
        }
    }

    //Access/return element at index via [] operator
    T& operator[](int index){
        try{
            if(index < 0 || index > size-1) throw()
            throw std::out_of_range("Index/value outside range");
        }
        return arr[index];
    }

    //Rule of Three
    DynamicArray(const DynamicArray& other){
        size = other.size;
        capacity = other.capacity;
        try {
            arr = new T[capacity]; 
            //No throw, new itself throws exeptions if something goes wrong
        }
        catch (const std::bad_alloc& e) {
            cout << "Memory allocation failed!";
        }
        for(int i=0; i<size; i++){
            arr[i] = other.arr[i];
        }
    }
    DynamicArray& operator=(const DynamicArray& other){
        if(this!=&other){
            size = other.size;
            cap = other.cap;

            try {
                arr = new T[capacity]; 
            //No throw, new itself throws exeptions if something goes wrong
            }
            catch (const std::bad_alloc& e) {
                cout << "Memory allocation failed!";
            }
            for(int i=0; i<size; i++){
                arr[i] = other.arr[i];
            }
            for(int i=0; i<size; i++){
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }


    // Sorting of Different types
    

};

/*


int main(){
    DynamicArray arr1(3);
    arr1.display();
    DynamicArray arr2(arr1);
    arr2.display();
    arr2.pushBack(4);
    arr2.display();
    cout << arr2.operator[](3);
    
}






















*/
#endif