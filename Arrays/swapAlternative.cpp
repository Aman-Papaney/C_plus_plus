# include <iostream>
using namespace std;

void swap(int *element1, int *element2){
    int temp;
    temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}

int main(){

    int n, arr[50];
    cout << "Enter number of elements :" << endl;
    cin >> n;

    cout << "Enter elements :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i += 2)
    {
        swap(&arr[i], &arr[i + 1]);
    }

    cout << "Array after Rearranging :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}