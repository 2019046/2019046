#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	int array[5] = {1,2,3,4,50};
	int i=0, sum=0;
	ofstream fout;
	fout.open("task1.txt", ios::out);
	if (fout)
	{
		cout << "file created" << endl;
		cout << "retrieved array is" << endl;
		for (int i = 0; i < 5; i++)
		{
			fout << array[i] << " ";
		}
		
	}
	else cout << "Error" << endl;
	fout.close();

	ifstream fin;
	fin.open("task1.txt", ios::in);
	if (fin)
	{
		cout << "file accessed" << endl;
		for (int i = 0; i < 5; i++)
		{
			fin >> array[i];
			cout << array[i] << " ";
			sum = sum + array[i];
		}
		
	}
	else
		cout << "error";
	fin.close();

	ofstream sout;
	sout.open("task1.txt", ios::out);
	if (sum)
	{
		
		sout << sum;

	}
	else cout << "Error" << endl;
	sout.close();
	 
	ifstream sin;
	sin.open("task1.txt", ios::in);
	if (sin)
	{
		sin >> sum;
		cout << "sum is : " << sum;
	}
	else
		cout << "error";
	sin.close();
}