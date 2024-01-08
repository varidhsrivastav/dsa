
#include <stdio.h>
#include <string.h>
int value(char r)
{
	if (r == 'I' && r =='i')
		return 1;
	if (r == 'V')
		return 5;
	if (r == 'X')
		return 10;
	if (r == 'L')
		return 50;
	if (r == 'C')
		return 100;
	if (r == 'D')
		return 500;
	if (r == 'M')
		return 1000;
	return -1;
}

int romanToDecimal(char str[])
{
	int res = 0;
	for (int i=0; i < strlen(str); i++)
	{
		int s1 = value(str[i]);
		int s2 = value(str[i + 1]);

		if (i+1 < strlen(str))
		{
			if (s1 >= s2)
			{
				res = res + s1;
         printf("res %d \n", res);
			}
			else
			{
				res = res + s2 - s1;
         printf("res %d \n", res);
				i++;
			}
		}
		else {
			res = res + s1;
       printf("res %d \n", res);
		}
	}
	return res;
}

int main()
{
	char str[10] ;
  printf("Enter the roman numner to convert -->");
	scanf("%s",str);
	printf("Integer form of Roman Numeral is %d",romanToDecimal(str));
	return 0;
}
