#include <iostream>
#include <ctime>
using namespace std;

string delete_(char* str, int k)
{
	while (str[k] != '\0')
	{
		str[k] = str[k + 1];
		k++;
	}
	return str;
}


	
int main()
{
	char str[] = "Hallo world";
	cout << delete_(str, 4);
	return 0;
}
