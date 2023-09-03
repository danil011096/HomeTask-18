#include <iostream>
#include <ctime>
#include <cstdlib>

int power(int num1, int num2, int num3 = 0, int num4 = 0, int num5 = 0) {

	return num1 + num2 + num3 + num4 + num5;
}

inline double average(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}

int greatest(int num1, int num2, int num3) {
	std::cout << "INT";
	int max = 0;

	if (num1 > max)
		if (num1 > max)
			max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;

	std::cout << std::endl;
	return max;
}
short greatest(short num1, short num2, short num3) {
	std::cout << "SHORT";
	short max = 0;

	if (num1 > max)
		if (num1 > max)
			max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;

	std::cout << std::endl;
	return max;
}

double greatest(double num1, double num2, double num3) {
	std::cout << "DOUBLE";
	double max = 0;

	if (num1 > max)
		if (num1 > max)
			max = num1;
	if (num2 > max)
		max = num2;
	if (num3 > max)
		max = num3;

	std::cout << std::endl;
	return max;

}

template <typename T>
int array(T arr[], int const lenght);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, z, x, c;

	std::cout << "Задание 1.\n\n";

	std::cout << "Введи числа -> ";
	std::cin >> n >> m >> z >> x >> c;
	std::cout << "Сумма чисел " << n << ", " << m << ", " << z << ", " << x << " и " << c << " = " << power(n, m, z, x, c);
	std::cout << std::endl;

	std::cout << "\nЗадание 2.\n\nВведи числа -> ";
	std::cin >> n >> m >> z;
	std::cout << "Среднее арефмитическое " << n << ", " << m << " и " << z << " = " << average(n, m, z);
	std::cout << std::endl;

	std::cout << "\nЗадание 3.\n\n";
	std::cout << "Введи числа целочисленные -> ";
	std::cin >> z >> n >> m;
	std::cout << greatest(z, n, m) << std::endl;
	std::cout << "Введи числа дробные -> ";
	double q, w, e;
	std::cin >> q >> w >> e;
	std::cout << greatest(q, w, e) << std::endl;
	std::cout << "Введи числа целочисленные -> ";
	short r, t, y;
	std::cin >> r >> t >> y;
	std::cout << greatest(r, t, y) << std::endl;

	std::cout << "Задание 4.\n\n";
	srand(time(NULL));
	int const size = 10;
	int arr[size]{};
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << array(arr, size);
	std::cout << std::endl;
	int arr2[4]{ 6,12,13,15 };
	std::cout << array(arr2, 4);


	return 0;
}

template <typename T>
int array(T arr[], int const lenght) {
	int simple;
	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] % 3 != 0 && arr[i] % 5 != 0)
		{
			simple = arr[i];
			break;
		}
	}
	return simple;
}
