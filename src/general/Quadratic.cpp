/*
 * Quadratic.cpp
 *
 *  Created on: Jan 15, 2018
 *      Author: owner
 */
#include <iostream>
#include <cmath>


int main() {
	while (true) {
	std::cout <<
	"Enter A:" << std::endl;
	double a;
	std::cin >> a;
		if (a == 0) {
			break;
		}
	std::cout << "Enter B:" << std::endl;
	double b;
	std::cin >> b;
	std::cout << "Enter C:" << std::endl;
	double c;
	std::cin >> c;

	double t = (b * b) - (4.0 * a * c);
	double d = 2.0 * a;

	std::cout
			<< (b <= 0 ?
			"(" :
			"(-") + std::to_string(b) + " \u00B1"
					+ " sqroot("
					+ std::to_string(t)
					+ "))/" + std::to_string(d) << std::endl;
		double fap = std::sqrt(t);
		double a1 = (0 - b) - fap;
		double a2 = ((0 - b) + fap);
		std::cout << "B-..." + std::to_string(a1 / d) << std::endl;
		std::cout << "B+..." + std::to_string(a2 / d) << std::endl;

	}

	return 0;
}
