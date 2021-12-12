#include<iostream>
using namespace std;
int main()
{
	int r;
	int  i, j, s;
	int i2, s2, j2;
	int i3, s3, j3;
	int i4, s4, j4;


	cout << "choose a star size (at least 2):  ";
	cin >> r;
	if (r <=0)
	{
		cout << " you can't make a star if u choose 1 or lower ";
	}
	
	//top 
	for (i = 1; i <= r; i++)
	{
		//for loop to put space in pyramid
		for (s = i; s < r + r + r; s++)
			cout << " ";
		//for loop to print star
		//we want uneven number so we can use this math formula (2 * r - 1)
		for (j = 1; j <= (2 * r - 1); j++)
		{
			if (j == 1 || j == 2 * i - 1)
				cout << "*";
			else
				cout << " ";
		}
		//ending line after each row
		cout << "\n";

	}


	//mid 1
	for (i3 = r; i3 >= 1; i3--)
	{
		//for loop to put space in pyramid
		for (s3 = i3; s3 < r; s3++)
			cout << " ";
		//for loop to print star in pyramid
		for (j3 = 1; j3 <= (2 * r - 1); j3++)
		{
			if (i3 == r || j3 == 1)
				cout << "*";
			else
				cout << " ";
		}
		for (int jj = 0; jj <= r; jj++) {
			cout << "  ";
		}
		for (j3 = 1; j3 <= 2 * i3 - 1; j3++)
		{
			if (i3 == r || j3 == 2 * i3 - 1)
				cout << "*";
			else
				cout << " ";
		}

		cout << "\n";

	}



	//mid 2
	for (i4 = 1; i4 <= r; i4++)
	{
		//for loop to put space in pyramid
		for (s4 = i4; s4 < r; s4++)
			cout << " ";
		//for loop to print star
		for (j4 = 1; j4 <= (2 * r - 1); j4++)
		{
			if (i4 == r || j4 == 1)
				cout << "*";
			else
				cout << " ";

		}
		for (int jj = 0; jj <= r; jj++) {
			cout << "  ";
		}
		for (j4 = 1; j4 <= (2 * r - 1); j4++)
		{
			if (i4 == r || j4 == 2 * i4 - 1)
				cout << "*";
			else
				cout << " ";
		}

		cout << "\n";

	}


	// bottom
	for (i2 = r; i2 >= 1; i2--)
	{
		//for loop to put space in pyramid
		for (s2 = i2; s2 < r + r + r; s2++)
			cout << " ";
		//for loop to print star in pyramid
		for (j2 = 1; j2 <= 2 * i2 - 1; j2++)
		{
			if (j2 == 1 || j2 == 2 * i2 - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";

	}
	

	cin >> r;
	return 0;
}
