//AAABBB

#include <iostream>
#include "ClassHeader.h"

using namespace std;


	int Array::fillWithKB(int* arrp, int length)
	{
		int n;
		int m;
		int save = 0;
		for (int i = 0; i < length; i++)
		{
			cout << "Enter number "  << i + 1 << " or type 1000 to leave" << endl;
			cin >> m;
			if (m == 1000)
			{
				return save;
			}
			else
			{
				n = m;
			}
			*(arrp + i) = n;
			save = i + 1;
		}
		return save;
	}
	int Array::fillWithRand(int* arrp, int length)
	{
		int num;
		cout << "Enter how many numbers fill?" << endl;
		cin >> num;
		num = min(length, num);
		for (int i = 0; i < num; i++)
		{
			*arrp = rand() % 99;
			arrp++;
		}
		return num;
	}
	void Array::function4(int* arrp, int length, int workspace)
	{
		int temp;
		int* next = arrp + workspace - 1;
		int* previous = arrp + workspace - 2;
		temp = *(arrp + workspace - 1);
		for (int i = 0; i < workspace - 1; i++)
		{
			*next = *previous;
			next--;
			previous--;
		}
		*arrp = temp;
	}
	void Array::function5(int* arrp, int length, int workspace)
	{
		int temp;
		int* next = arrp + 1;
		int* previous = arrp;
		temp = *arrp;
		for (int i = 0; i < workspace - 1; i++)
		{
			*previous = *next;
			next++;
			previous++;
		}
		*(arrp + workspace - 1) = temp;
	}
	int  Array::function10(int* arrp, int length, int workspace)
	{
		int max = 0;
		int delta;
		int num;
		int c = 0;
		if (workspace == length)
			c = 1;
		int* p = arrp;
		cout << "Enter number to add" << endl;
		cin >> num;
		for (int i = 0; i < workspace - 1; i++)
		{
			if (max <= *(arrp + i))
			{
				max = *(arrp + i);
				p = arrp + i;
				delta = i;
			}
		}
		//delta = p - arrp;
		for (int i = c; i < workspace - delta - 1; i++)
		{
			*(arrp + workspace - i) = *(arrp + workspace - 1 - i);
		}
		*(p + 1) = num;
		workspace++;
		return workspace - c;
	}
	int  Array::function11(int* arrp, int length, int workspace)
	{
		int max = 0;
		int c = 0;
		if (workspace == length)
			c = 1;
		int delta;
		int num;
		int* p = arrp;
		cout << "Enter number to add" << endl;
		cin >> num;
		for (int i = 0; i < workspace - 1; i++)
		{
			if (max <= *(arrp + i))
			{
				max = *(arrp + i);
				p = arrp + i - 1;
				delta = i;
			}
		}
		//delta = p - arrp;
		for (int i = c; i < workspace - delta; i++)
		{
			*(arrp + workspace - i) = *(arrp + workspace - 1 - i);
		}
		*(p+1) = num;
		workspace++;
		return workspace - c;
	}
	void Array::funktion7(int* arrp, int length, int workspace)
	{
		int half = workspace / 2;
		int d = 0;
		int temp;
		if (workspace % 2 != 0)
			d = 1;
		for (int i = 0; i < workspace / 2 + d; i++)
		{
			temp = *(arrp + half + i);
			*(arrp + half + i) = *(arrp + i);
			*(arrp + i) = temp;
		}
		if (d == 1)
		{
			temp = *(arrp + workspace - 1);
			for (int i = 0; i < workspace / 2; i++)
			{
				*(arrp + workspace - i) = *(arrp + workspace - 1 - i);
			}
			*(arrp + workspace / 2 + 1) = temp;
		}
	}
	void Array::output(int* arrp, int length, int workspace)
	{
		for (int i = 0; i < workspace; i++)
		{
			cout << *(arrp + i) << " ";
			if ((i + 1) % 5 == 0)
			{
				cout << endl;
			}
		}
		if (workspace % 5 != 0)
		{
			cout << endl;
		}	
	}
	int Array::changeSwitch()
	{
		cout << "Enter operation num (4 - Move to right. 5 - Move to left. 7 - Switch halfs. 10 - Add number rightside of max. 11 - Add number leftside of max. 100 - End programm.)" << endl;
		int number;
		//system("pause");
		number = cin.get();
		return number;
	}

	
