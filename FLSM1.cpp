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
int findX(int users) {
    int p = 0;
    int x = 0;
    while (true) {
        x = pow(2, p);
        if (x >= users) return p;
        p++;
    }
    return p;
}
int binaryToDecimal(string s) {
    int dec_value = 0;
    lli base = 1;
    int l = s.length();
    int x = l - 1;
    while (x >= 0) {
        int bit = 0;
        if (s[x] == '1') {
            bit = 1;
        }
        x--;
        dec_value += bit * base;

        base = base * 2;
    }

    return dec_value;
}

int main() {
    Solution ob;
    int ip1, ip2, ip3, ip4;
    cout << "Enter space seperated IP Address : " << endl;
    cin >> ip1 >> ip2 >> ip3 >> ip4;
    cout << "Enter no of users/subnetworks : ";
    int users;
    cin >> users;
    int sb1, sb2, sb3, sb4;
    sb1 = sb2 = sb3 = sb4 = 0;
    sb1 = 255;
    char cl = 'Z';
    int x = findX(users);
    if (ip1 >= 0 && ip1 <= 127) {
        cl = 'A';
        if (x <= 8) {
            string sbB = "";
            for (int y = 1; y <= x; y++) {
                sbB += '1';
            }
            for (int y = 1; y <= 8 - x; y++) {
                sbB += '0';
            }
            sb2 = binaryToDecimal(sbB);
            cout << sb1 << "." << sbB << "." << sb3 << "." << sb4 << endl;

        } else if (x >= 8 && x <= 16) {
            sb2 = 255;
            string sbB = "";

            for (int y = 1; y <= x - 8; y++) {
                sbB += '1';
            }
            for (int y = 1; y <= 8 - (x - 8); y++) {
                sbB += '0';
            }
            cout << sb1 << "." << sb2 << "." << sbB << "." << sb4 << endl;

            sb3 = binaryToDecimal(sbB);
        } else if (x >= 16 && x <= 24) {
            sb2 = 255;
            sb3 = 255;
            string sbB = "";

            for (int y = 1; y <= x - 16; y++) {
                sbB += '1';
            }
            for (int y = 1; y <= 8 - (x - 16); y++) {
                sbB += '0';
            }
            sb4 = binaryToDecimal(sbB);
            cout << sb1 << "." << sb2 << "." << sb3 << "." << sbB << endl;
        }

    } else if (ip1 >= 128 && ip1 <= 191) {
        cl = 'B';
        sb1 = 255;
        sb2 = 255;

        if (x <= 8) {
            string sbB = "";
            for (int y = 1; y <= x; y++) {
                sbB += '1';
            }
            for (int y = 1; y <= 8 - x; y++) {
                sbB += '0';
            }
            sb3 = binaryToDecimal(sbB);
            cout << sb1 << "." << sb2 << "." << sbB << "." << sb4 << endl;

        } else if (x >= 8 && x <= 16) {
            sb3 = 255;
            string sbB = "";

            for (int y = 1; y <= x - 8; y++) {
                sbB += '1';
            }
            for (int y = 1; y <= 8 - (x - 8); y++) {
                sbB += '0';
            }
            sb4 = binaryToDecimal(sbB);
            cout << sb1 << "." << sb2 << "." << sb3 << "." << sbB << endl;
        }

    } else if (ip1 >= 192 && ip1 <= 223) {
        cl = 'C';
        sb1 = 255;
        sb2 = 255;
        sb3 = 255;
        if (x <= 8) {
            string sbB = "";
            for (int y = 1; y <= x; y++) {
                sbB += '1';
            }
            for (int y = 1; y <= 8 - x; y++) {
                sbB += '0';
            }
            cout << sb1 << "." << sb2 << "." << sb3 << "." << sbB << endl;

            sb4 = binaryToDecimal(sbB);
        }
    } else {
    }
    cout << "Class : " << cl << endl;
    cout << "Update Subnet : ";
    cout << sb1 << "." << sb2 << "." << sb3 << "." << sb4 << endl;
    int r1, r2, r3, r4;
    r1 = 255 - sb1;
    r2 = 255 - sb2;
    r3 = 255 - sb3;
    r4 = 255 - sb4;
    cout << "Range Value : ";
    cout << r1 << "." << r2 << "." << r3 << "." << r4 << endl;
    cout << "Range : " << endl;

    for (int y = 1; y <= pow(2, x); y++) {
        cout << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << endl;
        ip4 += r4;
        cout << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << endl;
        ip4++;
        cout << endl;
    }

    return 0;
}