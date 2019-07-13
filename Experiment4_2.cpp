#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;
		int y;
			int n;				
							int temp;
							int arr[100];

								cout << "Bubble Sorting\n";
								cout << "                            \n";
									cout << "Input Size: "; cin >> n;

	for (x=0 ; x<n; x++)
	{												
		cin >> arr[x];							
		cout << arr[x] << ", ";				
	}

	cout << endl << endl;

	for (x=0 ; x<n ; x++)
	{
		for (y=0 ; y<n-1-x; y++)
		{
			if (arr[y] > arr[y+1])				 
			{										
			temp = arr[y];
			arr[y] = arr[y+1];
			arr[y+1] = temp;
			}
		}
	}

	cout << "Data(Sorted): ";
						for (x=0 ; x<n ; x++)						
	{
		cout << arr[x] << ", ";
	}


	getch();
	return 0;
}

