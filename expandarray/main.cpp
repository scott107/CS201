#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int GetRandom(int, int);

void main(){
	srand(time(NULL));
	int x,y;
	for (int i = 0; i < 10; i++)
	{
		x = GetRandom(1, 9);
		y = GetRandom(1, 3);
		cout << x << '\t' << y << endl;
	}
	system("pause");
}

int GetRandom(int a, int b)
{
	int random;
	
		random = rand() % b + a + 1;
	return random;
}