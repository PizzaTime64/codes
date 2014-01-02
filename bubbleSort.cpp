#include <cstdio>
using namespace std;

int main()
{
	int data[1001];
	int size,temp;
	scanf("%d",&size);
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(int i=0; i < size; i++)
	{
		for(int j = 1; j <size; j++)
		{
			temp = data[j];
			if(data[j] < data[j-1])
			{
				data[j] = data[j-1];
				data[j-1] = temp;
			}
		}
	}
	for(int i=0; i<size; i++)
	{
		printf("%d ",data[i]);
	}
}
