/*
* ASCII character table.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date:17/09/2018
* Description: Solution to week 1 session 1 ASCII character table
*
* Copyright notice
*/

#include <iostream>

using namespace std;

int main() {
	
	/*The character ‘b’ is char(‘a’+1), ‘c’ is char(‘a’+2, et cetera. 
	Use a loop to write out a table of characters with their corresponding integer values.*/

	
	// Approach one
	for (int i = 97; i < 123; ++i) {
		cout << i << "\t" << char(i) << endl;
	}

	
	// Approach two
	/*for (int i = 'a'; i < 'a'+26; ++i) {
		cout << char(i) << "\t" << i << endl;
	}*/

	//Both lower and upper case

	/*for (int i = 'A'; i < 'A'+26; ++i) {
		cout << char(i) << "\t" << i << "\t" << char(i+32) << "\t" << i+32 << endl;
	}*/

	return 0;
}