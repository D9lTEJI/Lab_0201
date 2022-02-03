// Lab_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "ClassHeader.h"
//#include "Class.cpp"

using namespace std;

int calcFunk();

int main()
{
	Array x;
	int res;
	int switcher;
	int workspace = 0;
	int array[20];
	res = calcFunk();
	switch (res)
	{
	case 1:
		workspace = x.fillWithRand(array, 20);
		break;
	case 2:
		workspace = x.fillWithKB(array, 20);
		break;
	case 9:
		return 0;
		break;
	}
	x.output(array, 20, workspace);
	while (true)
	{
		switcher = x.changeSwitch();
		
		switch (switcher)
		{
		case 4:
			x.function4(array, 20, workspace);
			x.function4(array, 20, workspace);
			x.output(array, 20, workspace);
			break;
		case 5:
			x.function5(array, 20, workspace);
			x.function5(array, 20, workspace);
			x.output(array, 20, workspace);
			break;
		case 10:
			workspace = x.function10(array, 20, workspace);
			x.output(array, 20, workspace);
			break;
		case 11:
			workspace = x.function11(array, 20, workspace);
			x.output(array, 20, workspace);
			break;
		case 7:
			x.funktion7(array, 20, workspace);
			x.output(array, 20, workspace);
			break;
		case 100:
			goto end;
		}
	}
	end: return 0;
}


int calcFunk()
{
	int n;
	cout << "Enter number(1 - Fill array with random numbers. 2 - Enter numbers from kb. 9 - End process)" << endl;
	cin >> n;
	return n;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
