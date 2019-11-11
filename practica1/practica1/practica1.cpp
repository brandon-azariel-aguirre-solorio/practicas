#include <iostream>
#include <string>
using namespace std;

int main()
{     
	float vector1[3];
	float vector2[3];
	float vectorsuma[3];
	int i;
	//pedimos los datos del primer vector
	for (i = 0; i < 3; i++)
	{
		cout << "Introduce el valor " << i << " del primer vector: ";
		cin >> vector1[i];
	}
	//pedimos los datos del segundo vector
	for (i = 0; i < 3; i++)
	{
		cout << "Introduce el valor " << i << " del segundo vector: ";
		cin >> vector2[i];
	}

}
