#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // number of elements in the array
int i; // index of array element



void input()
{
	while (true)
	{ 
		cout << "enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;