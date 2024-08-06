#include <iostream>
using namespace std;

void selectSort(int a[], int n)
{
    for (int i = 0; i < n; i++) // 遍历未排序区间，选择最小元素
    {
        int minIndex = i;               // 假设当前元素为最小元素
        for (int j = i + 1; j < n; j++) // 遍历未排序区间，寻找最小元素
        {
            if (a[j] < a[minIndex]) // 如果找到更小的元素，更新最小元素索引
            {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]); // 将最小元素与当前元素交换位置
    }
}

int main()
{
    int a[10] = {12, 23, 3, 4, 5, 6, 7, 8, 9, 10};
    selectSort(a, 10); // 调用选择排序函数
    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    exit(0);
}