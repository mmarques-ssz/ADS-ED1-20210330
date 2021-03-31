#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int *v;
	v = new int[10];
	
	for(int i=0; i<10; ++i)
	{
		v[i] = i+1;
	}
	
    for(int i=0; i<10; ++i)
	{
		cout << v[i] << " ";
	}	
	cout << endl;
	
	for(int i=0; i<10; ++i)
	{
		cout << *v << " ";
		++v;
	}	
	cout << endl;
	
	delete[] v;
	
	return 0;
}