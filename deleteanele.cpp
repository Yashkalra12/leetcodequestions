#include <iostream>
using namespace std;
int main()
{
    int arr[50] = {1, 2, 5, 6, 7}, ele, i, pos;
    cout << "Enter the ele:";
    cin >> ele;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == ele)
        {
            pos = i;
        }

        cout << pos;
    }
}