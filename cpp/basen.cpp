/*
 * basen.cpp
 *
 * Convert a given integer n to base b
 *
 * Pradeep Gowda
 * Jul 25, 2024
 * Carmel, IN
 * */

#include <iostream>
#include <list>
int main() {
	int n = 25;
	int b = 11;
	int curval = n;
	int quotient;
	int remainder;
	std::list<int> rep;

	while (curval >= b){
		quotient = curval/b;
		remainder = curval % b;
		rep.push_front(remainder);
		curval = quotient;
	}
	rep.push_front(curval);
	for (int n: rep) {
		std::cout << n;
	}
	std::cout << std::endl;
	return 0;
}

/* compile:
 * 	g++ -Wc++11-extensions -std=c++17 basen.cpp -o basen
 * */
