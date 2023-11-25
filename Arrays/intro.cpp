# include <iostream>
using namespace std;

// Arrays are data structures that are used to store data without the need to create variable for each value.

// Arrays only store same type of data. Ex - a int type array will only store integer values.

// It stores values in contiguous(continuous) memory locations.

// Declaration of array -
//                     dataType arrayName[size];
// Initialisation of array -
//                     dataType arrayName[size] = {value1, value2, ...};




// Indices of array start from 0 to (size - 1).
// To access values in array - arrayName[index].
// To access 3rd value in array - arrayName[2]

int main()
{
    int size = 5;
    int myArray[size] = {1, 2, 4, 9, 90};
    cout << myArray[0] << endl; 

    cout << "Values in array :" << endl;
    for(int i = 0; i < size; i++){
         cout << myArray[i] << endl;
    }

    return 0;
}