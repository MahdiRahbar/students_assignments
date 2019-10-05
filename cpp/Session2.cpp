// Written By Mahdi Rahbar
// Session 2, C++ 


#include <iostream>

// int main() { // get 10 numbers from client and print out them.
// 	int  temp [10];
// 	for (int i = 0; i < 10; i++) {
// 		std::cout << "\nPlease enter a numebr: ";
// 		std::cin >> temp[i];
// 	}
// 	for (int i = 0; i < 10; i++) {
// 		std::cout << temp[i] << ", ";
// 	}
// 		std::cout <<  "\n";
// 	system("pause");

// 	return 0;
// }




// int main() { // get 10 numbers from client and print out them.
//	int  temp[10];
// 	int sum = 0;
// 	for (int i = 0; i < 10; i++) {
// 		std::cout << "\nPlease enter a numebr: ";
// 		std::cin >> temp[i];
// 	}
// 	for (int i = 0; i < 10; i++) {
// 		if (temp[i] % 2 == 0) {
// 			sum += temp[i];
// 		}
// 	}
// 	std::cout << "\nThe sum of all input numbers are : "<< sum;
// 	std::cout << "\n";
// 	system("pause");

// 	return 0;
// }




int main() { // get an input number and tell if it's a prime number
	
	int input_number = 0;
	int flag = 0;
	std::cout << "\nPlease enter a numebr: ";
	std::cin >> input_number;
	
	for (int i = 2; i < input_number; i++) {
		if (input_number % i == 0) {
			flag = 1;
			break;
		}
		else {
			continue;
		}
	}
	if (flag == 1) {
		std::cout << "\nGod damn it, it's not a prime number\n";
	}
	else {
		std::cout << "\nYay. it's a prime number\n";
	}
	std::cout << "\n";
	system("pause");

	return 0;
}