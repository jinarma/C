#include<stdio.h>

int main(){

	int arr[5] = {1, 3, 4, 5, 6};

	for(int i=0; i<5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	int temp = 2;
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if(arr[i]<2)
		{
			continue;
		}
		else if(arr[i]>2 && flag==0)
		{
			flag = i;
		}
		else
		{
			arr[i-1] = arr[i];
		}
	}
	arr[flag] = temp;

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}