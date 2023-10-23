#include <stdio.h>

template <typename Type1, typename Type2>

class Comparison {
public:
	Type1 num1;
	Type2 num2;

	Comparison(Type1 num1, Type2 num2) :num1(num1), num2(num2) {};

	Type1 Min() {
		Type1 num = num1 < num2 ? num1 : num2;
		return static_cast<Type1>(num);
	}

};

int main() {
	Comparison<int, int> a1(28, 82);
	Comparison<int, float> a2(114, 514.0f);
	Comparison<int, double> a3(217, 8.02);

	Comparison<float, float> b1(32.0f, 14.0f);
	Comparison<float, double> b2(7.0f, 1.42);

	Comparison<double, double> c1(2.02, 4.03);

	printf("%d\n", a1.Min());
	printf("%d\n", a2.Min());
	printf("%d\n", a3.Min());
	
	printf("%f\n", b1.Min());
	printf("%f\n", b2.Min());
	
	printf("%lf\n", c1.Min());

	return 0;
}