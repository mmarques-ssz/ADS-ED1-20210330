#include <iostream>
using namespace std;

// Passagem de par�metro por ponteiro
void qualquer(int *p1, int *p2)
{
	(*p1)++;
	(*p2)++;
	cout << "Valor de p1: " << *p1 << " e valor de p2: " << *p2 << endl;
	cout << "Endere�o de p1: " << p1 << " e endere�o de p2: " << p2 << endl;
}

int main(int argc, char** argv)
{
	int x;
	int y;
	x = 10;
	y = 20;
	
	cout << "Valor de x: " << x << " e valor de y: " << y << endl;
	
	qualquer(&x, &y);
	
	cout << "Valor de x: " << x << " e valor de y: " << y << endl;
	
	return 0;
}