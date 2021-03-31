#include <iostream>
using namespace std;


void mostra_array1(int p[])
{
	for(int i=0; i<5; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;
//	p[0] = 99;
}

void mostra_array2(int p[])
{
	for(int i=0; i<5; ++i)
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
}

void mostra_endereco_array(int p[])
{
	for(int i=0; i<5; ++i)
	{
		cout << p << " ";
		p++;
	}
	cout << endl;
}

void dobra_array(int p[])
{
	for(int i=0; i<5; ++i)
	{
		(*p) *= 2;
		++p;
	}
	
}

int main(int argc, char** argv)
{
	int a[5] = {10, 20, 30, 40, 50};
	
	mostra_array1(a);
	
	dobra_array(a);
	
	mostra_array2(a);
	
	mostra_endereco_array(a);
	
	return 0;
}