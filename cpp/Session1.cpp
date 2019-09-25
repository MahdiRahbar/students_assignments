// Session1.cpp: Mahdi Rahbar
// A collection of code snippets with their corresponding problems

// #include "stdafx.h"
#include <iostream>

// int main(){   // write a program which it gets two input numbers and print the sum of them as an output
// int input_number1,input_number2; 
// std::cin>>input_number1>>input_number2; 
// std::cout<<input_number1+input_number2;
// system("pause");
// return 0;
// }

// int main(){  // write a program which check if the input number is devidable by 3! 
//     int input_number1; 
//     std::cin>>input_number1;
//     if (input_number1%3==0){
//         std::cout<<"Yes";
//     }
//     system("pause");
//     return 0;
// }

// int main(){  // write a program which compare two input numbers and print the greatest! 
//     int input_number1, input_number2; 
//     std::cin>>input_number1>>input_number2;
//     if (input_number1>input_number2){
//         std::cout<<input_number1;
//     }
//     else{
//         std::cout<<input_number2;
//     }
//     system("pause");
//     return 0;
// }

int main() {  // write a program which compare three input numbers and print the greatest! 
	int input_number1, input_number2, input_number3;
	std::cin >> input_number1 >> input_number2 >> input_number3 ;
	std::cout << input_number1 + input_number2 + input_number3;
	std::cout << (input_number1 + input_number2 + input_number3) / 3;
	std::cout << input_number1 * input_number2 * input_number3;
	system("pause");
	return 0;
}