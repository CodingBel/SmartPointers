// This program is about showing the internal workigns of a smart poiner 

#include<iostream>

class SmartPtr {
private: 
	int* ptr; 

public: 
	SmartPtr(int* p = nullptr) {
		ptr = p; 
	}

	~SmartPtr() {
		std::cout << "Mem location of ptr in smart ptr is: " << ptr << std::endl; 
		delete ptr;
		std::cout << "Destructed "<< ptr << " from Heap " << std::endl; 
		
	}
};


int main() {
	int* myPtr = new int(10); 
	std::cout << "In main, location of myptr is:       " << myPtr << std::endl;

	SmartPtr Obj1 = SmartPtr(myPtr); 

	return 0; 
}