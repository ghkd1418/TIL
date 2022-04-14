#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 1};
    int temp;
    int count = sizeof(arr) / sizeof(int);
    for (int i = 0; i < count; i++)    // 요소의 개수만큼 반복
    {
        for (int j = 1; j < count; j++)   // 요소의 개수 - 1만큼 반복
        {
            if (arr[i] < arr[j])          // 현재 요소의 값과 다음 요소의 값을 비교하여
            {                                 // 큰 값을
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;            // 다음 요소로 보냄
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        printf("%d ", arr[i]);  //5 4 3 1
    }
}

// j = 0일 때 1 3 5
// j = 1일 때 5 1 3