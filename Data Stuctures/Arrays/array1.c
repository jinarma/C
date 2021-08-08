#include<stdio.h>

int main()
{

	int arr[5] = {2, 3, 4, 5, 6};

	for(int i=0; i<5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	int newNum = 1;
	int flag = -1;
	int prevTemp = 0;
	int nextTemp = 0;
	for (int i = 0; i < 5; i++)
	{
		if(arr[i]<newNum)
		{
			continue;
		}
		else if(arr[i]>newNum && flag==-1)
		{
			flag = i;
			prevTemp = arr[i];

		}
		else
		{
			nextTemp = arr[i];
			arr[i] = prevTemp;
			prevTemp = nextTemp;
		}
	}
	arr[flag] = newNum;

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;

}