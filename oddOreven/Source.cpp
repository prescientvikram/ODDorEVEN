
#include <iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	std:cout << "ODD and EVEN number between 1-100" << endl;
	for (int i = 0; i <= 100; i++)
	{
		int x;
		x = i % 2;

		ofstream new_file;
		new_file.open("F:\\PCR_pratice3\\oddOreven\\even.txt", ios::app);
		ofstream new_file2;
		new_file2.open("F:\\PCR_pratice3\\oddOreven\\odd.txt", ios::app);
		if (x == 0)
		{
				new_file << i << endl;

		}
		else if (x != 0)
		{
			
			new_file2 << i << endl;
		}

	}
	return 0;
}