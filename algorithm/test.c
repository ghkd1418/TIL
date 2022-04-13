#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 1, 4};
    int temp;
    int count = sizeof(arr) / sizeof(int);
    for (int i = 0; i < count; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 0; j < count-1; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (arr[j] > arr[j+1])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;            // 다음 요소로 보냄
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        printf("%d ", arr[i]);  //5 4 3 1
    }
}