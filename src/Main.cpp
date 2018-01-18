/*
 * Main.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: owner
 */
#include<iostream>
#include<string>
#include<climits>

//#include <execinfo.h>

int counter = 0;

int sum(int n) {
	if (n == 1) {
		return 1;
	} else {
		return n + sum(n - 1);
	}

	int sum = 0;
	for (int i = n; i > 0; i--) {
		sum += i;
	}

}

int unsum(int n) {
	int i = 0;
	for (; n - i > 1; ++i) {
		n -= i;
	}
	return i;
}

int unsumR(int n, int s) {
//	int i = 1;
//	for (; n - i > 1; ++i) {
//		n -= i;
//	}
	if (n <= 0) {
		return s - 1;
} else {
		counter++;
		return unsumR(n - s, s + 1);
	}

}

int maidden() {

	std::cout << std::to_string(unsum(60)) << std::endl;
	std::cout << std::to_string(sum(65535)) << std::endl;
	std::cout << std::to_string(unsumR(2147450880, 1)) << std::endl;
	std::cout << std::to_string(counter) << std::endl;

	return 0;
}



