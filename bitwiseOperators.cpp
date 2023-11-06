# include <iostream>
using namespace std;

int main()
{
    cout << "Table for AND " << endl;
    cout << "A " << " B" << "  C" << endl;
    int i = 1, j = 1;
    while (i >= 0){
        j = 1;
        while (j >= 0){
            cout << i << "  "<< j << "  " << (i && j) << endl; 
            j--;
        }
        i--;
    }

    cout << endl << "Table for OR " << endl;
    cout << "A " << " B" << "  C" << endl;
    i = 1, j = 1;
    while (i >= 0){
        j = 1;
        while (j >= 0){
            cout << i << "  "<< j << "  " << (i || j) << endl; 
            j--;
        }
        i--;
    }

    cout << endl << "Table for EXOR " << endl;
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

    cout << endl << "Table for NOT " << endl;
    cout << "A " << " C" << endl;
    j = 1;
        while (j >= 0){
            cout << j << "  "<< !j << endl; 
            j--;
        }
    return 0;
}