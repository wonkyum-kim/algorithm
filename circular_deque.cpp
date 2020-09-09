#include<list>
#include<iostream>
#include<memory>

/*
기준은 front.
1 2 3 4 5
next
2 3 4 5 1
prev
5 1 2 3 4 
*/

template<typename T>
struct CircularDeque {
	std::list<T> cd;

	// front access
	T front() {
		return cd.front();
	}
	// back access
	T back() {
		return cd.back();
	}
	// push_front
	void push_front(const T& key) {
		cd.push_front(key);
	}
	// push_back
	void push_back(const T& key) {
		cd.push_back(key);
	}
	// pop_front
	void pop_front() {
		cd.pop_front();
	}
	// pop_back
	void pop_back() {
		cd.pop_front();
	}
	// next access
	T next() {
		// shift left
		T temp = cd.front();
		cd.pop_front();
		cd.push_back(temp);
		return cd.front();
	}
	// prev access
	T prev() {
		// shift right
		T temp = cd.back();
		cd.pop_back();
		cd.push_front(temp);
		return cd.front();
	}
	// empty
	bool empty() {
		return cd.empty() ? true : false;
	}
};

int main()
{
	CircularDeque<int> cd;
	for (auto i = 1; i <= 5; ++i) {
		cd.push_back(i);
	}

	for (auto i = 0; i < 10; ++i) {
		std::cout << cd.next() << ' ';
	}

	std::cout << '\n';

	for (auto i = 0; i < 10; ++i) {
		std::cout << cd.prev() << ' ';
	}
}
