// Stacks And Queues

#include <iostream>
#include <stack>
#include <queue>

#include "../util.h"

class Test {
private:
	std::string name;

public:
	Test(std::string name): name(name) {}
	~Test() {}

	void print() {
		std::cout << name << std::endl;
	}
};

void stacksAndQueues() {

	// LIFO
	// a stack is a last in first out structure
	// pile of objects, last one you remove will be the most recent we added
	std::stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	std::cout << std::endl;

	/* INVALID CODE, DONT USE
		// checking top of the stack
		Test &test1 = testStack.top();
		test1.print();
		testStack.pop();

		// destroys first object on stack
		testStack.pop();

		// next object will be John here
		Test test2 = testStack.top();
		test2.print(); // Reference refers to destroyed objects
	*/

	while (testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}





	std::cout << std::endl;

	// queue, first person enter, first leave the queue
	std::queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	std::cout << std::endl;

	// sue was the last person who entered the queue
	testQueue.back().print();

	while (testQueue.size() > 0) {
		Test& test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	toContinue();
}
