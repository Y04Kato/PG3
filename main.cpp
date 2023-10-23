#include <stdio.h>

template <typename Type>

class ClassName {
public:
	Type a;
	Type b;

	Type ClassName(Type a, Type b) :a(a), b(b) {};

	Type Min() {
		return static_cast<Type>(a + b);
	}

};

int main() {
	


	return 0;
}