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

//#include<iostream>
//#include<vector>
//
//using std::cout;
//using std::vector;
//
//int main() {
//	vector<int> v1{ 1,2,3,4 };
//	vector<vector<int>> v2{ {5,6},{7,8},{9,10} };
//
//	//for loop to iterate over the 1D vector
//	for (int i : v1) {
//		cout << i << " ";
//	}
//	cout << "\n";
//
//	//for loop to iterate over the 2D vector
//	for (vector<int> j : v2) {
//		for (int k : j) {
//			cout << k << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}

//----printing the lengths of a 2D-vector

//#include<iostream>
//#include<vector>
//
//using std::cout;
//using std::vector;
//
//int main() {
//	//storing integers in a vector
//	vector<vector<int>> a{ {1,2},{3,4},{5,6} };
//
//	for (vector<int> i : a) {
//		cout << i.size() << "\n";
//	}
//
//return 0;
//}

//for loops

//#include<iostream>
//
//using std::cout;
//
//int main() {
//	for (int i = 0; i < 6; i++) {
//		cout << i << "\n";
//	}
//	return 0;
//}

//----creating a function that adds two integers and using it to calculate the sum of 2 integers

//#include<iostream>
//using std::cout;
//
//int sumFunction(int i, int j) {
//	return i + j;
//}
//
//int main() {
//	int a{ 1 };
//	int b{ 2 };
//
//	cout << "The sum of the two integers " << a << " & " << b << " is " << sumFunction(a, b)<<"\n";
//	return 0;
//}

//----a program that takes inputs from the user and spits out the sum of the two numbers

//#include<iostream>
//using std::cout;
//using std::cin;
//
//int sumFunction(int i, int j) {
//	return i + j;
//}
//
//int main() {
//	int a;
//	int b;
//	cout << "Please enter the first integer: ";
//	cin >> a;
//	cout << "\n" << "Please enter the second integer: ";
//	cin >> b;
//
//	cout << "The sum of " << a << " & " << b << " is " << sumFunction(a, b)<<"\n";
//	return 0;
//}

//----input a 1D vector and find the sum of all its elements

//#include<iostream>
//#include<vector>
//using std::cout;
//using std::vector;
//
//int sumFunction(int i, int j) {
//	return i + j;
//}
//
//int main() {
//	//storing the values in a vector
//	vector<int> a{ 1,2,3,4 };
//
//	int k = 0;
//	//finding the sum of elements of the vector
//	for (int i : a) {
//		k = sumFunction(k, i);
//	}
//	cout << "The sum of all elements of the 1D vector is: " << k << "\n";
//	return 0;
//}

//input elements in a 2D vector and find the sum of all its elements
//#include<iostream>
//#include<vector>
//using std::cout;
//using std::vector;
//
//int sumFunction(int i, int j) {
//	return i + j;
//}
//
//int main() {
//	//entering the elements to a vector
//	vector<vector<int>> a{ {1,2},{3,4},{5,6} };
//
//	//finding the sum of all elements of this 2D vector
//	int k = 0;
//
//	for (vector<int> i : a) {
//		for (int j : i) {
//			k = sumFunction(j, k);
//		}
//	}
//	cout << "The sum of all elements of the 2D vector is: " << k<<"\n";
//	return 0;
//}

//////----creating a printboard function that prints a 2D vector
////#include<iostream>
////#include<vector>
////using std::vector;
////using std::cout;
////
////void printBoard(vector<vector<int>> i) {
////	for (vector<int> j : i) {
////		for (int k : j) {
////			cout << k << " ";
////		}
////		cout << "\n";
////	}
////}
////
////int main() {
////	//enter the elements to the 2D vector
////	vector<vector<int>> a{ {0,1,0,0,0,0},{0,1,0,0,0,0},{0,1,0,0,0,0},{0,1,0,0,0,0},{0,0,0,0,1,0} };
////
////	//print the 2D elements
////	printBoard(a);
////	return 0;
////}

//----using if statements
//#include<iostream>
//using std::cout;
//
//int main() {
//	int a{ 3 };
//
//	if (a > 4) {
//		cout << "The number is greater than 4!" << "\n";
//	}
//	else{
//		cout << "The number is less than 4!"<<"\n";
//	}
//	return 0;
//}

//----using while loops
//#include<iostream>
//using std::cout;
//
//int main() {
//	int a = 0;
//
//	while (a < 5) {
//		cout << a << "\n";
//		a++;
//	}
//	return 0;
//}

//----program to find the even numbers from 1-10
//#include<iostream>
//using std::cout;
//
//int main() {
//	int a = 1;
//
//	while (a < 11) {
//		if (a % 2 == 0) {
//			cout << a << " is an even number!"<<"\n";
//		}
//		else {
//			cout << a << " is an odd number!"<<"\n";
//		}
//		a++;
//	}
//	return 0;
//}

//----creating an input file stream and reading the data present in the file
//#include<iostream>
//#include<fstream>
//#include<string>
//
//using std::cout;
//using std::string;
//using std::ifstream;
//using std::ofstream;
//using std::cout;
//
//int main() {
//	//create the file and write data to it
//	ofstream random;
//	random.open("Random.txt");
//	random << "My name is Vasudev Purohit!" << "\n";
//
//	//now read the data from an existing file
//
//	ifstream myfile;
//	myfile.open("Random.txt");
//
//	if (myfile) {
//		cout << "The file has successfully opened!"<<"\n";
//		string line;
//		while (getline(myfile, line)) {
//			cout << line << "\n";
//		}
//	}
//return 0;
//}

//----streaming strings to integers
//#include<iostream>
//#include<sstream>
//#include<vector>
//
//using std::cout;
//using std::string;
//using std::istringstream;
//
//int main() {
//	string a{"1 2 3"};
//
//	//stream this in a variable of type int
//
//	istringstream mystring(a);
//
//	int b;
//	mystring >> b;
//	cout <<b<<"\n";
//return 0;
//}

//----checking if there is anymore of the string to stream
//#include<iostream>
//#include<string>
//#include<sstream>
//
//using std::cout;
//using std::string;
//using std::istringstream;
//
//int main() {
//	string a{ "1 2 3" };
//
//	istringstream mystring(a);
//	int n;
//
//	while (mystring) {
//		mystring >> n;
//		if (mystring) {
//			cout << "The streaming was successful!" << "\n";
//		}
//		else{
//			cout << "The streaming was terminated!";
//		}
//	}
//return 0;
//}

//----streaming strings with mixed types
#include<iostream>
#include<sstream>
#include<string>

using std::cout;
using std::string;
using std::istringstream;

int main() {
	string a{ "1,2,3" };

	istringstream mystring(a);

	int b;
	char c;

	while (mystring) {
		mystring >> b >> c;
		if (mystring) {
			cout << "The stream was successful!\n";
		}
		else {
			cout << "The stream was terminated!\n";
		}
	}
return 0;
}