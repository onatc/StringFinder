#include "search.h"
#include <fstream>
#include <iostream>
#include <string>

using std::ifstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

/*
*  Purpose for program
*  This program searches for the given string in a list of string and
*  returns the closest result possible. Uses iterative binary search.
*
*
*  Programmer: Onat Calik
*  Date: September 19, 2016
*
*  Honor Code: I have neither given nor received any unauthorized assistance with this program.
*/
int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	long i = 0;
	std::vector<string> list;
	string YN;
	string value;
	string line = "";


	while (!in.fail())
	{
		in >> line;
		
		char letter = tolower(line.at(i));
		line = letter + line.substr(1, 9999);

		list.push_back(line);

	}
	
	cout << "Search for strings by partial match.\n" << "Type C-z to halt.\n";
	cin >> value;

	while (!cin.eof())
	{

		for (int i = 0; value[i]; i++) value[i] = tolower(value[i]);
		SearchResultType<std::string> res = iterative_binary_search(list, value);

		if (!res.found)
		{
			cout << "Not found: accept " << res.value << "? Y/N: ";
			cin >> YN;
			if (YN == "y" || YN == "Y" || YN == "Yes" || YN == "YES" || YN == "yes")
			{
				cout << "ok: accepting " << res.value << endl;
				
				
			}

			else if (YN == "n" || YN == "N" || YN == "No" || YN == "NO" || YN == "no")
			{
				cout << "ok: rejecting " << res.value << endl;
			}

			else
			{
				cout << "Wrong command, try again.\n";
			}
		}

		else
		{
			cout << "Found: accepting " << value << endl;
		}

		cout << "Search for strings by partial match.\n" << "Type C-z to halt.\n";
		cin >> value;

	}

	return 0;
}


