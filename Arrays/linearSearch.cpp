# include <iostream>
using namespace std;

void linear(int array[], int size, int element){
    int i ;
    for (i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            cout << element << " is present at index " << i << endl;
            break;
        }
    }

    if (i == size)
    {
        cout << element << " is not present in array" << endl;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 11, 23, 88, 71};
    int length = sizeof(arr) / sizeof(int);
    int element = 90;

    linear(arr, length, element);

    return 0 ;
}