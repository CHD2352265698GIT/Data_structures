#include <iostream>
using namespace std;

// 类似于排序扑克牌
void insert_sort(int a[], int n) // 插入排序
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];              // 保存当前要插入的元素
        int j = i - 1;                // 从当前要插入的元素的前一个元素开始比较
        while (j >= 0 && a[j] > temp) // 如果前一个元素大于当前要插入的元素，则将前一个元素后移
        {
            a[j + 1] = a[j]; // 将前一个元素后移
            j--;             // 继续比较前一个元素
        }
        a[j + 1] = temp; // 将当前要插入的元素插入到正确的位置
    }
}

int main()
{
    int a[10] = {12, 23, 3, 4, 5, 6, 7, 8, 9, 10};
    insert_sort(a, sizeof(a) / sizeof(a[0])); // 调用插入排序函数
    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}