#include<iostream>
using namespace std;
#include<string.h>

void swap(char num)
{

}
int main()
{	
    char a[10];
    cin >> a;
	swap(a[10]);
	int k;
	k = strlen(a)-1 ;
	for(k;k>=0;k--)
	{
		cout << a[k];
	}
	cout << endl;

	return 0;
}
