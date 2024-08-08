/*
 * basen.cpp
 *
 * Convert a given integer n to base 64
 * using the digits lookup table
 * useful for generating short urls for example
 * in a URL shortener application
 *
 * Pradeep Gowda
 * Jul 25, 2024
 * Carmel, IN
 * */

#include <iostream>
#include <list>

int main() {
	int n = 125;
	int b = 64;
	int curval = n;
	int quotient;
	int remainder;
	std::list<char> rep;
        char digits[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
            'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
            'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
            'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
            'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
            '-', '_'};
	while (curval >= b){
		quotient = curval/b;
		remainder = curval % b;
		rep.push_front(digits[remainder]);
		curval = quotient;
	}
	rep.push_front(digits[curval]);
	for (char n: rep) {
		std::cout << n;
	}
	std::cout << std::endl;
	return 0;
}

/* compile:
 * 	g++ -Wc++11-extensions -std=c++17 base64c.cpp -o basen
 * */
