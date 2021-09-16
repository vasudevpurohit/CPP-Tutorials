// this code contains all the initial tutorial codes that I can glance through quickly

//----Write and running my first code - Printing "Hello World"

//#include<iostream>
//using std::cout;					//here using using namespace std is not a good idea because https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice
//
//
//int main() {
//	cout << "Hello World!"<<"\n";
//	return 0;
//}

//----declaring a variable and a string and displaying it

//#include<iostream>
//using std::cout;
//using std::string;
//
//int main() {
//	int a{ 1 };
//	string b;
//	b = "My name is Vasudev Purohit";
//
//	cout << "The integer is: " << a<<"\n";
//	cout << "The string is: " << b<<"\n";
//	return 0;
//}

//----creating a 1D and 2D vector and initialising some values in it

//#include<iostream>
//#include<vector>
//using std::cout;
//using std::vector;
//
//int main() {
//	vector<int> v1{ 1,2,3,4 };
//	vector<vector<int>> v2{ {1,2},{3,4},{5,6} };
//	cout << "The 1D & 2D vector was successfully initialised!" << "\n";
//	return 0;
//}

//----printing the values of a 1D and 2D vector

#include<iostream>
#include<vector>

using std::cout;
using std::vector;

int main() {
	vector<int> v1{ 1,2,3,4 };
	vector<vector<int>> v2{ {5,6},{7,8},{9,10} };

	//for loop to iterate over the 1D vector
	for (int i : v1) {
		cout << i << " ";
	}
	cout << "\n";

	//for loop to iterate over the 2D vector
	for (vector<int> j : v2) {
		for (int k : j) {
			cout << k << " ";
		}
		cout << "\n";
	}
	return 0;
}