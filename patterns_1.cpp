# include <iostream>
using namespace std;

// patterns can easily be generated using 2 while loops one for row and other for column
int main()
{   
    cout << "PATTERN 1" << endl;
    // # # # #
    // # # # #
    // # # # #
    // # # # #
    int row = 4;
    while (row > 0){
        int col = 4;
        while(col > 0){
            cout << "# ";
            col--;
        }
        cout << endl;
        row--;
    }

    cout << "PATTERN 2" << endl;
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4
    row = 4; 
    int count = 0;
    while (row > 0){
        int col = 4;
        count++;
        while (col > 0){
            cout << count << " ";
            col--;
        }
        cout << endl;
        row--;
    }

    return 0;
}