# include <iostream>
using namespace std;

// patterns can easily be generated using 2 while loops one for row and other for column
int main()
{   
    cout << endl <<"PATTERN 1" << endl;
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

    cout << endl <<"PATTERN 2" << endl;
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

    cout << endl <<"PATTERN 3" << endl;
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    row = 4; 
    while (row > 0){
        int col = 4;
        count = 0;
        while (col > 0){
            cout << count + 1 << " ";
            col--;
            count++;
        }
        cout << endl;
        row--;
    }

    cout << endl <<"PATTERN 4" << endl;
    // #
    // # #
    // # # #
    // # # # #
    row = 4;
    count = row + 1;
    while (row > 0){
        int col = 4;
        while (col < count){
            cout << "#" << " ";
            col++;
        }
        cout << endl;
        count++;
        row--;
    }

    cout << endl <<"PATTERN 5" << endl;
    // # # # #
    // # # #
    // # #
    // #
    row = 4;
    count = 0;
    while (row > 0){
        int col = 4;
        while (col > count){
            cout << "#" << " ";
            col--;
        }
        cout << endl;
        count++;
        row--;
    }

    return 0;
}