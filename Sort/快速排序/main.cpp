#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int i = low, j = high, x = a[low];
        while (i < j)
        {
            while (i < j && a[j] >= x) // 从右向左找第一个小于x的数
                j--;
            if (i < j)
                a[i++] = a[j];
            while (i < j && a[i] < x) // 从左向右找第一个大于等于x的数
                i++;
            if (i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quickSort(a, low, i - 1);  // 递归调用
        quickSort(a, i + 1, high); // 递归调用
    }
}

int main()
{
    int a[10] = {12, 23, 3, 4, 5, 6, 7, 8, 9, 10}; // 定义一个待排序的数组
    quickSort(a, 0, 9);                            // 调用快速排序函数
    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}