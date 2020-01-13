#include <stdio.h>
void arrayAdd(int arr[], int s, int n)
{
        for (int i=0; i < s; i++)
        {
        arr[i] =arr[i] + n;
        }
}
int main ()
{
        int k = 0;
        int arr [100];
        for (int i=0 ; i < 100; i++)
        {
		int k = i + 1;
                arr[i] = k * k;
        }
        arrayAdd(arr, 100, 2);
        for (int i=0; i < 100; i++)
        {
        printf("%d\n", arr[i]);
        }
}
