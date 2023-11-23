# include <iostream>
using namespace std;


// Suppose, we need to perform certain task multiple times then instead of writing it
// n number of times we can simply create functions.

// Functions are written only once after that they can be used anywhere in the program
// (or in other files).
// They are used to increase readibility and decrease the bulkiness of programs.

// Syntax (for defining a function) -
//     returnType functionName(parameters){

//         function body

//     }

// returnType - It tells the type of value that the function will return(give back after calling it)
//             if the program does not return anything we give return type as void.


// Syntax (for calling a function) -
//     variableName = functionName(arguments)
//                 OR
//     functionName(arguments)


// NOTE : In every C++ program there must be a main function.

int power(int base, int pow){
    int ans = 1;

    for (int i = 0; i <pow; i++){
        ans = ans * base;
    }

    return ans;
}

int main(){
    int num1, num2, res;

    cout << "Enter the number :" ;
    cin >> num1 ;

    cout << "Enter the power :" ;
    cin >> num2 ;

    res = power(num1, num2);
    cout << "Result is " << res << endl;

    return 0;
}



