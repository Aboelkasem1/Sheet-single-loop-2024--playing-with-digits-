//========================================================\|
//===============   Create by Aboelkasem   ===============\|
//========================================================\|

#include <bits/stdc++.h>
using namespace std;

int main () {

    int x, y = 0;

    cin >> x;

    while (x != 0)
    {
        y *= 10;
        y += x % 10;
        x /= 10;
    }

    x = y;

    cout << x <<endl;
}