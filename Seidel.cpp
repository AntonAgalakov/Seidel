#include <iostream>

using namespace std;
double a[3][4], itog[3];
void init_matrix(double a[3][4])
{
	a[0][0] = 5; a[0][1] = 4; a[0][2] = 21; a[0][3] = 3;
	a[1][0] = 4; a[1][1] = 5; a[1][2] = 6; a[1][3] = 8;
	a[2][0] = 10; a[2][1] = 11; a[2][2] = 0; a[2][3] = 4;

}
int main()
{
	init_matrix(a);
	system("pause");
	return 0;
}