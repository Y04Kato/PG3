#include <iostream>
#include <string>

template <typename Type>
void Min(Type a, Type b) {
	Type num = a < b ? a : b;
	std::cout << num << std::endl;
}

template <>
void Min<char>(char a, char b) {
	std::cout << "数字以外は代入できません" << std::endl;
}

int main() {

	Min(114, 514);
	Min(1.0f, 0.5f);
	Min(2.17, 8.02);
	Min('a', 'b');

	return 0;
}