#include <iostream>
using namespace std;
int main()
{
	int n;
	int *a = new int[n];
	int op;
	int count = 0;
	int p, e;
	while (op != 0)
	{
		cout << "\nEnter 1 to create array \n"
		     "Enter 2 to Display array\n"
		     "Enter 3 to Insert an element array\n"
		     "Enter 4 to delete an element from array\n"
		     "Enter 5 to search an element from array\n"
		     "Enter 0 to Exit \n";
		cin >> (op);

		if (op == 1 || op == 2 || op == 3 || op == 4 || op == 5 || op == 0)
		{
			switch (op)
			{
			case 1:
				cout << "enter the no of elements :- ";
				cin >> (n);
				cout << "enter "<<n<<" elemnts in array\n";
				for (int i = 0; i < n; i++)
				{
					cin >> (a[i]);
				}
				cout << "Array created succesfully \n";
				count = 1;
				break;

			case 2:
				if (count == 1)
				{
					cout << "Array is :-";
					for (int i = 0; i < n; i++)
					{
						cout << "  " << (a[i]);
					}
				}
				else
				{
					cout << "create array first\a";
				}
				break;

			case 3:
				if (count == 1)
				{
					n = n + 1;
					cout << "enter an postion to insert an element :- ";
					cin >> (p);
					cout << "enter an element to insert :- \n ";
					cin >> (e);
					for (int i = n - 1; i >= p; i--)
					{
						a[i + 1] = a[i];
					}
					a[p] = e;
					cout << "Array after insertion :-";
					for (int i = 0; i < n; i++)
					{
						cout << "  " << (a[i]);
					}
				}
				else
				{
					cout << "create array first\a";
				}
				break;

			case 4:
				if (count == 1)
				{
					cout << "enter an postion of element to delete it-";
					cin >> (p);
					for (int i = p + 1; i <= n; i++)
					{
						a[i - 1] = a[i];
					}
					n = n - 1;
					cout << "Array after deletion :-";
					for (int i = 0; i < n; i++)
					{
						cout << "  " << (a[i]);
					}
				}
				else
				{
					cout << "Create array first !!!\a";
				}
				break;

			case 5:
				if (count == 1)
				{
					cout << "enter an element to search";
					cin >> (e);
					bool found = false;

					for (int i = 0; i < n; i++)
					{
						if (a[i] == e)
						{
							cout << "Element is at position (0-" << n - 1 << "): " << i;
							found = true;
							break;
						}
					}

					if (!found)
					{
						cout << "Element not found !!!\a";
					}
				}
				else
				{
					cout << "create array first !!!\a";
				}
				break;
			}
		}

		else
		{
			cout << "wrong input enter again\a";
			cin >> (op);
		}
	}
	return 0;
};
