#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        sum = sum + arr[i][2 - i];

        printf("Secondary Diagonal Element = %d\n", arr[i][2 - i]);
    }

    printf("Total Secondary Diagonal Sum = %d\n", sum);

    return 0;
}
