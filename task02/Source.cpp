#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec = { 2, 5, 8, 3, 0, 4, 6, 1, 0, 9 };

	int productEvenIndices = 1;
	int sumBetweenZeros = 0;

	bool foundFirstZero = false;

	for (int i = 0; i < vec.size(); i++) {
		if (i % 2 == 0) {
			productEvenIndices *= vec[i];
		}

		if (vec[i] == 0) {
			if (!foundFirstZero) {
				foundFirstZero = true;
			}
			else { 
				break;
			}
		}

		if (foundFirstZero && vec[i] != 0) {
			sumBetweenZeros += vec[i];
		}
	}

	cout << "Product of elements with even indices: " << productEvenIndices << endl;
	cout << "Sum of elements between first and last zero elements: " << sumBetweenZeros << endl;

	return 0;
}
