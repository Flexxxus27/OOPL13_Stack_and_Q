#include <iostream>

#include <vector>
#include <array>
#include <deque>

#include <queue>
#include <stack>
#include <list>

class DemoGood {
public:
	DemoGood() {
		std::cout << this << " create by defult constructor \n";
	}
	DemoGood(int a, bool b) {
		std::cout << this << " create by parametr constructor \n";
	}
	DemoGood(const DemoGood& other) {
		std::cout << this << " create by copy constructor \n";
		std::cout << "from " << &other << " object\n";
	}

	~DemoGood() {
		std::cout << this << " destroyed\n";
	}
	int var;

private:

};

int main() {


	std::stack<DemoGood, std::list<DemoGood>> qwe;
	
	
	{
		//DemoGood tmp;
		DemoGood tmp;
		for (struct { int i; DemoGood tmp; } obj; obj.i < 7; obj.i++) {
			obj.tmp.var = obj.i;
			qwe.push(obj.tmp);
		}
	}

	for (size_t i = 0; i < 7; i++)	{
		std::cout << qwe.top().var << ' ';
		qwe.pop();
	}




	return 0;
}