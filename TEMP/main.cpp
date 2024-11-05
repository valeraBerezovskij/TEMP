#include<iostream>
using namespace std;

template<class T>
auto maxElementArray(T arr[], int size) {
	T max = arr[0];
	for (int i = 0; i < size; ++i)
		max = std::max(arr[i], max);
	return max;
}

template<class T>
auto maxElementArray2D(T(*array)[2], int size) {
	T max = array[0][0];
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < size; ++j)
			max = std::max(array[i][j], max);
	return max;
}

template<class T>
auto maxElementArray3D(T array[][3][3], int row, int col, int dpt) {
	T max = array[0][0][0];
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			for (int k = 0; k < dpt; ++k)
				max = std::max(array[i][j][k], max);
	return max;
}

template<class T>
auto maxOfTwo(T first, T second) {
	return std::max(first, second);
}

template<class T>
auto maxOfThree(T first, T second, T third) {
	return std::max(first, std::max(second, third));
}

int main()
{
	char arr[4][2]{ {'c','v'}, {'C','z'}, {'1','l'}, {'x','x'} };

	char arr2[5]{ 'c','v','v','z','s' };

	int arr3[3][3][3] = {
		{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } },
		{ { 10, 11, 12 }, { 13, 14, 15 }, { 16, 17, 18 } },
		{ { 19, 20, 21 }, { 22, 99, 24 }, { 25, 26, 27 } }
	};


	cout << maxElementArray3D(arr3, 3,3,3) << endl;
	cout << maxOfThree(2, 3, 10) << endl;
}