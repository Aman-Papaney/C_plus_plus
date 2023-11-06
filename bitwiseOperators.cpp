# include <iostream>
using namespace std;

int main()
{
    // and operator returns true(1) only when both the operands are true
    cout << "Table for AND (&) " << endl;
    cout << "A " << " B" << "  C" << endl;
    int i = 1, j = 1;
    while (i >= 0){
        j = 1;
        while (j >= 0){
            cout << i << "  "<< j << "  " << (i & j) << endl; 
            j--;
        }
        i--;
    }

    // or operator returns true only when either of the operands are true
    // and also when both are true
    cout << endl << "Table for OR (|) " << endl;
    cout << "A " << " B" << "  C" << endl;
    i = 1, j = 1;
    while (i >= 0){
        j = 1;
        while (j >= 0){
            cout << i << "  "<< j << "  " << (i | j) << endl; 
            j--;
        }
        i--;
    }

    // exor operator returns true only when either of the operands are true
    // and not when both are true
    cout << endl << "Table for EXOR (^) " << endl;
    cout << "A " << " B" << "  C" << endl;
    i = 1, j = 1;
    while (i >= 0){
        j = 1;
        while (j >= 0){
            cout << i << "  "<< j << "  " << (i ^ j) << endl; 
            j--;
        }
        i--;
    }

    // not operator return true if te operand is false and vice-versa
    cout << endl << "Table for NOT (!) " << endl;
    cout << "A " << " C" << endl;
    j = 1;
    while (j >= 0){
        cout << j << "  "<< !j << endl;
        j--;
    }

    // Right Shift - Shifts the number to given number of bytes to the right.
    // Ex - 5 >> 2
    // 5(000101) >> 2 = 1(000001)
    // Ex - 12 >> 2
    // 12(0001101) >> 2 = 3(0000011)
    // other way of understanding it can be right shift divides the number by 2^(specified bits) and then taking its floor value (Only applicable for small numbers).

    cout << endl << "Right Shift" << endl;
    cout << "5 >> 2 => " << (5 >> 2) << endl;
    cout << "12 >> 2 => " << (12 >> 2) << endl;

    // Left Shift - Shifts the number to given number of bytes to the left .
    // Ex - 5 << 2
    // 5(000101) << 2 = 20(010100)
    // Ex - 12 << 2
    // 12(0001101) << 2 = 48(0110000)
    // other way of understanding it can be left shift multiplies the number by 2^(specified bits).

    cout << endl <<"Left Shift" << endl;
    cout << "5 >> 2 => " << (5 << 2) << endl;
    cout << "12 >> 2 => " << (12 << 2) << endl;


    return 0;
}