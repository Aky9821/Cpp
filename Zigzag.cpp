#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;

class Solution {
   public:
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    int numRows;
    string s;
    cin >> s >> numRows;

    int z = 0;
    char ar[1000][1000];
    int flag = 1;
    int x;
    for (x = 0; z < s.length(); x++) {
        for (int y = 0; y < numRows; y++) {
            if (numRows % 2 == 1) {
                if (x % 2 == 0) {
                    ar[y][x] = s[z++];
                } else {
                    if (y == (numRows) / 2)
                        ar[y][x] = s[z++];

                    else
                        ar[y][x] = '#';
                }
            }           
            else {
                if (flag == 1) {
                    ar[y][x] = s[z++];
                } 
                else if (flag == 2) {
                    if (y == (numRows / 2))
                        ar[y][x] = s[z++];
                    else
                        ar[y][x] = '#';
                } 
                else {
                    if (y == (numRows / 2) - 1)
                        ar[y][x] = s[z++];
                    else
                        ar[y][x] = '#';
                }
            }
            if (z >= s.length())
                break;
            if (z >= s.length())
                break;
            cout << z << endl;
        }
        flag++;
        if (flag > 3)
            flag = 1;
    }
    string ans = "";
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 7; y++)
            cout << ar[x][y] << "\t";
        cout << endl;
    }
    for (int y = 0; y < numRows; y++) {
        for (int z = 0; z < x; z++) {
            if (ar[y][z] != '#' && ar[y][z] != NULL)
                ans += ar[y][z];
            cout << ar[y][z] << "\t";
        }
        cout << endl; int z = 0;
    char ar[1000][1000];
    int flag = 1;
    int x;
    for (x = 0; z < s.length(); x++) {
        for (int y = 0; y < numRows; y++) {
            if (numRows % 2 == 1) {
                if (x % 2 == 0) {
                    ar[y][x] = s[z++];
                } else {
                    if (y == (numRows) / 2)
                        ar[y][x] = s[z++];

                    else
                        ar[y][x] = '#';
                }
            }           
            else {
                if (flag == 1) {
                    ar[y][x] = s[z++];
                } 
                else if (flag == 2) {
                    if (y == (numRows / 2))
                        ar[y][x] = s[z++];
                    else
                        ar[y][x] = '#';
                } 
                else {
                    if (y == (numRows / 2) - 1)
                        ar[y][x] = s[z++];
                    else
                        ar[y][x] = '#';
                }
            }
            if (z >= s.length())
                break;
            if (z >= s.length())
                break;
            cout << z << endl;
        }
        flag++;
        if (flag > 3)
            flag = 1;
    }
    string ans = "";
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 7; y++)
            cout << ar[x][y] << "\t";
        cout << endl;
    }
    for (int y = 0; y < numRows; y++) {
        for (int z = 0; z < x; z++) {
            if (ar[y][z] != '#' && ar[y][z] != NULL)
                ans += ar[y][z];
        }
    }
    cout << ans;
    return 0;
    }
    cout << ans;
    return 0;
}