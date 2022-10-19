#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include "Database.h"
#include <cmath>
#include <string>



using namespace std;

/// this method displays all the value in the array /// 
void Database::display(int* data, int array_size) {
	cout << "the values in the array are:";
	for (int count = 0; count < array_size; count++)
		cout << " " << data[count];
	cout << endl;
};

/// this method replaces a value is in the array at a given index ///
int Database::valuereplacer(int index, int value, int* data, int array_size) {
	if (index > array_size) {
		cout << "that index is not in the database.";
		system("pause");
		return 0;
		cout << endl;
	}
	if (index < 0) {
		cout << "that index is not in the database.";
		system("pause");
		return 0;
		cout << endl;
	}

	int old_value = data[index];
	data[index] = value;
	return old_value;
}
/// this method appends a given value to the end of the array ///
void Database::append(int value, int* & data, int & size) {
		
		int appended_size = size + 1;
		int* data2 = new int[appended_size];
		for (int count = 0; count < size; count++) {
			data2[count] = data[count];
		}
		data2[size] = value;
		size = appended_size;
		data = data2;



}

int main()
{
	cin.exceptions(std::cin.failbit);
	Database D;
	int val;
	int* data = new int[100]; /// creating an array with pointer ///

	ifstream inputfile;
	inputfile.open("cs303hw1_data.txt"); 
	if (!inputfile)		/// checking to see if the file was opened  ///
	{
		cout << "error!! data file not found" << endl;
		system("pause");
		exit(-1);
	}

	int count = 0;
	while (!inputfile.eof())  /// reading text file filled with integers and filling the array ///
	{
		inputfile >> data[count];
		count++;
	}
	int array_size = count;
	cout << "the array size is:" << array_size << endl;

	/// using the valuerplacer method and validating with display method ///
	cout << "enter the index of the array that you want replaced:";
	cout << endl;
	string index1;
	float index;
	int index2;
	try {
		cin >> index1;
		for (int i = 0; i < index1.size(); i++) {
			if (isalpha(index1[i]))
				throw(index1);
			if (not isalnum(index1[i]))
				throw(index1);
		}
		float index = stof(index1);
		int int_index = round(index);
		if (0 > index || index >= array_size) {
			int new_index = static_cast<int>(index);
			throw(new_index);
		}
		if (index - int_index != 0) {
			throw(index);
		}
		index2 = static_cast<int>(index);
	}
	catch (int index) {
		cout << "Integer out of range\n";
		abort();
	}
	catch (float index) {
		cout << "needs to be a integer\n";
		abort();
	}
	catch (string index) {
		cout << "needs to be a integer\n";
		abort();
	}
	catch (ios_base::failure& f) {
		cout << "invalid number format input\n";
		abort();
	}
	catch (exception& ex ) {
		cout << "Fatal error occurred in read_int\n";
		cerr << ex.what() << endl;
		abort();
	}

	cout << "enter the integer value that you want that index to be replaced with:";
	string value1;
	float value;
	int value2;
	try {
		cin >> value1;
		for (int i = 0; i < value1.size(); i++) {
			if (isalpha(value1[i]))
				throw(value1);
			if (not isalnum(value1[i]))
				throw(value1);
		}
		float value = stof(value1);
		int int_value = round(value);
		if (value - int_value != 0) {
			throw(value);
		}
		value2 = static_cast<int>(value);
	}
	catch (float value) {
		cout << "needs to be a integer\n";
		abort();
	}
	catch (string value) {
		cout << "needs to be a integer\n";
		abort();
	}
	catch (ios_base::failure& f) {
		cout << "invalid number format input\n";
		abort();
	}
	catch (exception& ex) {
		cout << "Fatal error occurred in read_int\n";
		cerr << ex.what() << endl;
		abort();
	}
	cout << endl;
	
	int old_value = D.valuereplacer(index2, value2, data, array_size);// stop try and catch
	cout << "the value at that index was:" << old_value << endl;
	cout << "the value at that index was:" << data[index2] << endl;
	D.display(data, array_size);

	/// using the append method and validating with display method ///
	cout << "what integer value would you like to add to the array:";
	try {
		cin >> value1;
		for (int i = 0; i < value1.size(); i++) {
			if (isalpha(value1[i]))
				throw(value1);
			if (not isalnum(value1[i]))
				throw(value1);
		}
		float value = stof(value1);
		int int_value = round(value);
		if (value - int_value != 0) {
			throw(value);
		}
		value2 = static_cast<int>(value);
	}
	catch (float value) {
		cout << "needs to be a integer\n";
		abort();
	}
	catch (string value) {
		cout << "needs to be a integer\n";
		abort();
	}
	catch (ios_base::failure& f) {
		cout << "invalid number format input\n";
		abort();
	}
	catch (exception& ex) {
		cout << "Fatal error occurred in read_int\n";
		cerr << ex.what() << endl;
		abort();
	}
	cout << endl;
	D.append(value2, data, array_size);
	D.display(data, array_size);
	cout << "Problem 1 complete!!";


	return 0;

}
