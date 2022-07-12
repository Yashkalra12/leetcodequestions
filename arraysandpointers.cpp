#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 4, 5, 6};
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << endl;
    }
}
