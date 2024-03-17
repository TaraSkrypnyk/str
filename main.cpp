#include <iostream>
#include <ctime>
using namespace std;


char* delete_2(char* str,char* sign)
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if ((int)str[i] == (int)sign[0])
		{
			j = i;
			while (str[j] != '\0')
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		i++;
		j = 0;
	}
	return str;
}



int main()
{
	char str[] = "Hallo world";
	char sign[] = "o";
	cout << delete_2(str, sign);
	return 0;
}
