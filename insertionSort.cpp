#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	int data[1001];
	int size, temp;
	
	scanf("%d",&size);
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(int i = 1; i < size; i++)
	{
		temp = data[i];
		int j = i - 1;
		while(data[j] > temp && j >= 0)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	
	for(int i = 0; i < size; i++)
	{
		printf("%d ",data[i]);
	}
	
}
