#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<double> vec = { 2.5, -1.2, 3.8, -4.1, 5.6, 0.9, 7.3 }; 

	double maxElement = vec[0];
	double sumBeforeLastPositive = 0;

	int lastPositiveIndex = -1;

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] > maxElement) {
			maxElement = vec[i];
		}

		if (vec[i] > 0) {
			lastPositiveIndex = i;
		}

		if (lastPositiveIndex == -1) {
			sumBeforeLastPositive += vec[i];
		}
	}

	cout << "Maximum element in the vector: " << maxElement << endl;
	cout << "Sum of elements before the last positive element: " << sumBeforeLastPositive << endl;

	return 0;
}
