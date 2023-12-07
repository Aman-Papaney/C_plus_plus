# include <iostream>
using namespace std;

void unique(int array[], int length){
    bool unique = 1;
    
    for (int i = 0; i < length; i++)
    {
        unique = 1;
        for (int j = 0; j < length; j++)
        {
            if (array[i] == array[j] && i != j)
            {
                unique = 0;
                break;
            }
        }
        if (unique){
            cout << array[i] << endl;
        }
    }
}

void printArray(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 2, 3, 6};
    int _len = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, _len);
    unique(arr, _len);

    return 0;
}