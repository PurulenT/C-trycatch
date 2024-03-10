#include <iostream>
using namespace std;

//int divisionNum(int x, int y)
//{
//	if (y != 0)
//	{
//		return x / y;
//	}
//	throw "Divide by zero error!";
//		
//}
//
//int main()
//{
//	int x = 10, y = 0;
//	try
//	{
//		divisionNum(x, y);
//	}
//	catch (const char *errorMessage)
//	{
//		cout << errorMessage;
//	}
//
//	return 0;
//}

/*

1. Смоделировать выброс исключения при выходе за пределы диапазона массива.
Допустим при записи в 11й элемент массива при размере массива = 10

2. Попытка открытия файла, которого нет, или попытка записи в файл, который закрыт.

*/


int main()
{
	const int size = 10;
	int intArr[size];
	int num;
	
	cin >> num;
	
	try
	{
		intArr[num] = 1;
		if (num > size)
		{
			throw "Array overflow!!!";
		}
	}
	catch (const char *errorMessage)
	{
		cout << errorMessage; 
	}
	
	

	return 0;
}