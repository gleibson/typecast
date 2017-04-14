#include<iostream>

int main()
{
	int auks, bats, coots;

	auks = 19.99 + 11.99;

	bats = (int) 19.99 + (int) 11.99; //syntax C
	coots = int(19.99) + int(11.99); //syntax C++
	std::cout << "auks = " << auks << ", bats = " << bats; 
	std::cout << ", coots = " << coots << std::endl;

	char ch = 'Z';
	std::cout << "The code for " << ch << " is "; // print char
	std::cout << int(ch) << std::endl; // print int
	std::cout << "Yes, the code is ";
	std::cout << static_cast<int> (ch) << std::endl;

	return 0;

}