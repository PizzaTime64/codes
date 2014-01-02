#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int data[1001];
	int size, temp;
	scanf("%d",&size);
	for(int i=0; i<size; i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(int i=0; i<size-1; i++)
	{
		int min = i;
		for(int j=i+1; j<size; j++)
		{
			if(data[j] < data[min])
			{
				min = j;
			}
			
			temp = data[min];
			data[min] = data[i];
			data[i] = temp;
		}
	}
	
	for(int i=0; i<size; i++)
	{
		printf("%d ",data[i]);
	}
}
