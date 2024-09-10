#include <array>
#include <algorithm>
#include <bitset>
#include <cctype>
#include <chrono>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <cstring>
#include <thread>
#include <utility>
#include <vector>

// int main() {
// 	float a = 7.0f;
// 	int b;

// 	// Copy the bits of the float into an int
// 	memcpy(&b, &a, sizeof a);

// 	// Perform the bitwise operation
// 	int c = b << 1;

// 	// Copy the bits of the int back into a float
// 	float d;
// 	memcpy(&d, &c, sizeof c);

// 	std::cout << "Original float: " << a << "\n";
// 	std::cout << "Bitwise shifted float: " << d << "\n";

// 	return 0;
// }

int main() {
	int a = 5; // binary: 101
	int b = 3; // binary: 011

	std::cout << "a & b = " << (a & b) << "\n"; // bitwise AND
	std::cout << "a | b = " << (a | b) << "\n"; // bitwise OR
	std::cout << "a ^ b = " << (a ^ b) << "\n"; // bitwise XOR
	std::cout << "a << 1 = " << (a << 1) << "\n"; // left shift
	std::cout << "a >> 1 = " << (a >> 1) << "\n"; // right shift
	std::cout << "~a = " << (~a) << "\n"; // bitwise NOT

	int num = 5; // binary: 101
	int bitPosition = 1; // 0-based index from the right

	num |= (1 << bitPosition); // Set the bit at position bitPosition to 1



	// int num = 5; // binary: 101
	// int bitPosition = 2; // 0-based index from the right

	// num &= ~(1 << bitPosition); // Set the bit at position bitPosition to 0



	// int num = 5; // binary: 101
	// int bitPosition = 1; // 0-based index from the right

	// bool isSet = num & (1 << bitPosition); // Check if the bit at position bitPosition is set

	// if (isSet)
	// 	std::cout << "Bit is set.\n";
	// else
	// 	std::cout << "Bit is not set.\n";

	return 0;
}