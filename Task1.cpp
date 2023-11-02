 #include<iostream>
#include<string>
using namespace std;
int main()
{
	int books = 5;
	int fine = 1;
	int days;
	string choice,book_name;
	while (1)
	{
		cout << "\nMenu";
		cout << "\n1.Borrow ";
		cout << "\n2. Return ";
		cout << "\n3. Quit(Q) ";
		cout << "\nSelect One: ";
		cin >> choice;
		if (choice == "1")
		{
			if (books > 0)
			{
                cout << "Book Borrowed ";
                books--;
			}
			else
			{
				cout << "No book available";

			}
		}
		else if (choice == "2")
		{
			if (books < 5)
			{
				books++;
				cout << "Enter the NO. of Days Late: ";
				cin >> days;
				fine = days * fine;
				cout << "Book Returned";
				cout << "\nTotal fine: " << fine << "$" << endl;
				fine = 1;
			}
			else
			{
				cout << "Can't Return Library is full \n";

			}

		}
		else if (choice == "3")
		{
           return 0;
		}
		else
		{
			cout << "Invalid Choice";
		}

	}
	return 0;
}
