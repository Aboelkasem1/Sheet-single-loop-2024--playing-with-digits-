//========================================================\|
//===============   Create by Aboelkasem   ===============\|
//========================================================\|

#include <bits/stdc++.h>
using namespace std;

int main () {

    int x, y, a, sum1 = 0, sum2 = 0, c = 0;

    cin >> x >> y;
    
    a = x;

    while (a != 0)
    {
        a /= 10;
        c++;
    }

    c /= 2;
    x = x / pow(10, c);

    while (x != 0)
    {
        sum1 += x % 10;
        x /= 10;
    }

    a = y;
    c = 0;

    while (a != 0)
    {
        a /= 10;
        c++;
    }

    c /= 2;
    c = pow(10, c);
    y = y % c;

    while (y != 0)
    {
        sum2 += y % 10;
        y /= 10;
    }
    
    if (sum1 > sum2) {
        cout << "x greater y\n";
    }
    else if (sum1 < sum2) {
        cout << "x less than y\n";
    }
    else{
        cout << "x equal y\n";
    }
}