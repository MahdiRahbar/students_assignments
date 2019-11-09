#include <iostream>
#define size 5 
int My_Func(int num_1 = 0, int num_2 = 0) {
	return num_1 + num_2;
}

int New_Fucn(int a) {
	std::cout << "\n" << a++ << "\n";
	std::cout<< "\n" << a << "\n";
	return 0; 
}


int * Write_Array(int arr[]) {
	for (int i = 0; i < 5; i++) {
		std::cout << "Please Enter a number : ";
		std::cin >> arr[i];
		std::cout << "\n";
	}
	return arr;
}
void Read_Array(int arr[]) {
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << "\t";
	}
	// return *arr; 
}

int Find_Number(int arr[],int search_number ) {
	int no_number = 0; 
	for (int i = 0; i < 5; i++) {
		if (arr[i] == search_number) {
			no_number += 1; 

		}
		
	}
	return no_number;
}
int main() {
	int arr[5] = { 0 };
    
	int* myArray = Write_Array(arr);
	Read_Array(arr);
	Read_Array(myArray);
	std::cout << "\n";
	std::cout << Find_Number(myArray, 4);
	std::cout << "\n";
	system("pause");
	return 0;
}

