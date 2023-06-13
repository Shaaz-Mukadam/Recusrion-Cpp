// A C++ program to demonstrate working of
// recursion
#include <bits/stdc++.h>
using namespace std;

void printFun(int test)
{
	if (test < 1)
		return;
	else {
		cout << test << " ";
		printFun(test - 1); // statement 2
		cout << test << " ";
		return;
	}
}

// Driver Code
int main()
{
	int test = 10;
	printFun(test);
}

//*********OUTPUT*********
// 10 9 8 7 6 5 4 3 2 1 1 2 3 4 5 6 7 8 9 10
