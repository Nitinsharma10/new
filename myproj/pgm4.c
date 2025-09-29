#include <iostream>
using namespace std;
//this is a pgm to print a inverted eq tri(i pulled this)
int main() {
    int n = 5; // height of the triangle
    for (int i = 0; i < n; i++) {
        // Print leading spaces to center the stars
        for (int j = 0; j < i; j++)
            cout << " ";
        // Print stars with spaces, decreasing count each row
        for (int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}

