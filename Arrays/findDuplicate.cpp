# include <iostream>
using namespace std;

void printArray(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void duplicate(int array[], int length){
    int duplicate = 1;

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] == array[j] )//&& i != j
            {
                duplicate = 0;
            }
        }
        if (!duplicate)
        {
            cout << array[i] << endl;  
        }
    }
}

int main(){
    int arr[] = {32, 32, 1, 3, 55, 1, 55};
    int length = sizeof(arr) / sizeof(int);

    printArray(arr, length);
    duplicate(arr, length);

    return 1;
}