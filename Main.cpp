#include <iostream>

int main()
{
	char targetString[256];

	// Take a string as input
	std::cout << "This program reverses strings. Please enter a string to reverse:" << std::endl;
	std::cin.getline(targetString, 256, '\n');

	// Reverse the string and print it out
	const char* reversedString = reverseString(targetString);
	std::cout << "The reverse of your string is:" << std::endl << reversedString << std::endl;

	return 0;
}

// Use this function to reverse the string
const char* reverseString(char* forwardString)
{
	char reversedString[256];

	return reversedString;
}