# include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverse(int array[], int size){

    int _len = int(size/2);
    int temp;

    for (int i = 0; i < _len; i++)
    {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }

    cout << "After Reversing :\n";
    printArray(array, size);
}

int main(){

    int arr[] = {1, 2, 3, 4, 11, 23, 88, 71, 99};
    int length = sizeof(arr) / sizeof(int);

    reverse(arr, length);

    return 0 ;
}