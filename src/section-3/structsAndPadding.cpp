// Structs And Padding

#include <iostream>

#include "../util.h"

// c++ pads structs to make to more efficient to transfer in the memory
// this is how to disable padding
#pragma pack(push, 1)
struct Person {
	// cant use text cuz it allocates extra memory, by writing a string object, we are not storing the actual text that they store for us
	// std::string name 
	// char c;
	char name[50];
	int age;
	double weight;
};
// if you wanna undo this so it doesn't apply to everything we type after:
#pragma pack(pop)

// and now we got the struct which is EXACTLY 62 bytes, just like it should be
// now we can directly write Person to a file

void structsAndPadding() {

	// we get 64, whether char c is included or not
	// thats because we have padding on, which if we want to literally write Person to a file
	// we have to turn off padding - so what we write in the file is what we actually what we see here
	std::cout << sizeof(Person) << std::endl;


	toContinue();
}
