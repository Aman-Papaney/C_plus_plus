// input -> a - z 
//          A - Z 
//          0 - 9 

// output -> lowercase
//           uppercase
//           digit

// ASCII VALUES
// a - z (97 - 122)
// A - Z (65 - 90)
// 0 - 9 (48 - 57)

# include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character or digit :";
    cin >> a;
    int input = (int)a;

    if (input > 96 && input <123){
        cout << a << " is lowercase" << endl;
    }
    else if (input > 94 && input <91){
        cout << a << " is uppercase" << endl;
    }
    else if (input > 47 && input <58){
        cout << a << " is a digit" << endl;
    }
    else{
        cout << "Enter a lowercase, uppercase character or digit" << endl;
    }
    return 0;
}