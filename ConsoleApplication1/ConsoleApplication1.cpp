#include <iostream>
#include <typeinfo>
#include <cmath>

int main() {

	long long enter;
	bool esc = false;
	int op;
	double n1;
	double n2;
	double r1;

	std::cout << "Welcome to my calculator! \n";
	do {
		do {
			std::cout << "Press 1 to proceed.\n\n";
			std::cin >> enter;
			if (enter != 1) {

				std::cout << "\nThat's not 1, dumbass. \n\n";

			}
		} while (enter != 1);

			std::cout << "\nChoose your operator: \n";
			std::cout << "1. + \n";
			std::cout << "2. - \n";
			std::cout << "3. * \n";
			std::cout << "4. / \n";
			std::cout << "5. To exit. \n\n";
			std::cin >> op;

			if (op == 5) {
				esc = true;
			}
			else {
				std::cout << "\nInsert the first number: ";
				std::cin >> n1;

				std::cout << "\nInsert the second number: ";
				std::cin >> n2;

				switch (op) {
				case 1:
					r1 = n1 + n2;
					std::cout << "\nThe sum is " << r1 << '\n' << '\n';
					break;
				case 2:
					r1 = n1 - n2;
					std::cout << "\nThe subtraction is " << r1 << '\n' << '\n';
					break;
				case 3:
					r1 = n1 * n2;
					std::cout << "\nThe multiplication is " << r1 << '\n' << '\n';
					break;
				case 4:
					r1 = n1 / n2;
					std::cout << "\nThe division is " << r1 << '\n' << '\n';
					break;
				}
			}
		
	} while (esc == false);

		
	
	return 0;
	
}