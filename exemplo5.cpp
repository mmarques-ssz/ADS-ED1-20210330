#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int *v;
	v = (int*)malloc(10*sizeof(int));
	
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
	
	free(v);
	
	return 0;
}