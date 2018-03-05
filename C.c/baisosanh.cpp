#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int a[] = { 2,4,6,10 };
do
{
cout << a[0] << " + " << a[1] << " + " << a[2] << " + " << a[3]<<endl;
} while (next_permutation(a, a+4));
system("pause");
}
