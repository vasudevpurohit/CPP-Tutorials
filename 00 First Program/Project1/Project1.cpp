#include<iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int num{};

	std::cin >> num;

	std::cout << "Double the number is: " << num * 2 << '\n';
	std::cout << "Triple the number is: " << num * 3;
	return 0;

}