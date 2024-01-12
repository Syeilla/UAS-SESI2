#include <iostream>
#include <vector>
using namespace std;

void main() {

	vector<int> vect1;
	vector<int> vect2(10);
	vector<int> vect1;

	int isiArray[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };

	vector<int> vect(isiArray, isiArray + sizeof(isiArray) / sizeof(int));
	cout << "Array To Vector\n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}