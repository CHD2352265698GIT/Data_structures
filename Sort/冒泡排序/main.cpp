#include <iostream>
using namespace std;
int main()
{
    int a[10] = {12, 23, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1]; // 交换
                a[j + 1] = temp;
            }
        }
    }
    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}