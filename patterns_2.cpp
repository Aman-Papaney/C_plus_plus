# include <iostream>
using namespace std;

int main()
{
    cout << endl <<"PATTERN 6" << endl;
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int row = 4, k = 1, count = row + 1;
    while (row > 0){
        int col = 4;
        while (col < count){
            cout << k << " ";
            col++;
            k++;
        }
        cout << endl;
        count++;
        row--;
    }
    return 0;
}