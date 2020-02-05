#include <iostream>
using namespace std;

int linearSearch(int[], int, int);
int linearSearch2(int[], int, int);
void swap(int[], int, int);
void print(int [], int );

int main()
{
    int test[] = {1, 3, 4, 7, 11, 5, 8, 19};
    int length = sizeof(test) / sizeof(int);
    cout << linearSearch2(test, length, 3) << endl;
    print(test, length);

    return 0;
}

int linearSearch(int arr[], int length, int target)
{

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

//with transposition
int linearSearch2(int arr[], int length, int target)
{

    int *p = arr;

    for (int i = 0; i < length; i++)
    {
        if (*p == target)
        {
            swap(arr, i - 1, i);
            return i;
        }
        p++;
    }

    return -1;
}

void swap(int arr[], int a, int b)
{
    if (!(a < 0))
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    
}

void print(int arr[], int length){
    int *p = arr;

    for (int i = 0; i < length; i++, p++)
    {
        cout<< *p << " ";   
    }
}