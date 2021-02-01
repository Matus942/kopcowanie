#include <iostream>

using namespace std;


int main()
{

	int instance;			
	int size;				
	int *array;				

							
	cin >> instance;


	
	for (int count = 0; count < instance; count++)
	{
		
		cin >> size;

		
		array = new int[size];


		
		for (int numbers = 0; numbers < size; numbers++)
		{
			cin >> array[numbers];
		}


		
		for (int i = size; i > 0; i--)
		{

			
			for (int j = 0; j < i; j++)
			{
				for (int k = 1; k < i; k++)
				{

					if (array[(k - 1) / 2] < array[k])
					{
						swap(array[(k - 1) / 2], array[k]);

					}
				}
			}

			
			if (i != 1)
			{
				for (int x = 0; x < (size - (size - i)); x++)
				{
					cout << array[x] << " ";
				}
			}

			
			else
			{
				for (int y = 0; y < size; y++)
					cout << array[y] << " ";
			}

			
			cout << endl;

			
			swap(array[0], array[i - 1]);
		}

		
		cout << endl;

		delete[]array;
	}


	
	return 0;
}