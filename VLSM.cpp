#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int
#define mod 1000000007
#define pq priority_queue
#define pb push_back
#define ld long double
#define REP(x, n) for (int x = 0; x < n; x++)

using namespace std;
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
        }     x--;
        dec_value += bit * base;

        base = base * 2;
    }

    return dec_value;
}
class Solution {
   public:
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("Input1.txt", "r", stdin);
    freopen("Output1.txt", "w", stdout);
#endif
    int ip1, ip2, ip3, ip4;
    // cout << "Enter space seperated IP Address : " << endl;
    cin >> ip1 >> ip2 >> ip3 >> ip4;

    int u1, u2, u3, u4, u5;
    cin >> u1 >> u2 >> u3 >> u4 >> u5;
    u1 += 2;
    u2 += 2;
    u3 += 2;
    u4 += 2;
    u5 += 2;
    int hb1, hb2, hb3, hb4, hb5;
    hb1 = findX(u1);
    hb2 = findX(u2);
    hb3 = findX(u3);
    hb4 = findX(u4);
    hb5 = findX(u5);
    // hb4 = findX(u4);
    cout << "Host Bits of 1st : " << hb1 << endl;
    cout << "Host Bits of 2nd : " << hb2 << endl;
    cout << "Host Bits of 3rd : " << hb3 << endl;
    cout << "Host Bits of 4th : " << hb4 << endl;
    cout << "Host Bits of 5th : " << hb5 << endl;

    string sbB1 = "";
    vector<int> sb1;
    cout << "Subnet Mask of 1st : " << endl;
    for (int x = 1; x <= 32 - hb1; x++) {
        sbB1 += '1';
    }
    for (int x = 1; x <= hb1; x++)
        sbB1 += '0';
    for (int x = 0; x < 32; x += 8) {
        string t = sbB1.substr(x, 8);
        cout << t << ".";
        sb1.pb(binaryToDecimal(t));
    }
    cout << endl;
    REP(x, sb1.size()) {
        cout << sb1[x] << ".";
    }
    cout << endl;

    string sbB2 = "";
    vector<int> sb2;
    cout << "Subnet Mask of 2nd : " << endl;
    for (int x = 1; x <= 32 - hb2; x++) {
        sbB2 += '1';
    }
    for (int x = 1; x <= hb2; x++)
        sbB2 += '0';
    for (int x = 0; x < 32; x += 8) {
        string t = sbB2.substr(x, 8);
        cout << t << ".";
        sb2.pb(binaryToDecimal(t));
    }
    cout << endl;
    REP(x, sb2.size()) {
        cout << sb2[x] << ".";
    }
    cout << endl;

    string sbB3 = "";
    vector<int> sb3;
    cout << "Subnet Mask of 3rd : " << endl;
    for (int x = 1; x <= 32 - hb3; x++) {
        sbB3 += '1';
    }
    for (int x = 1; x <= hb3; x++)
        sbB3 += '0';
    for (int x = 0; x < 32; x += 8) {
        string t = sbB3.substr(x, 8);
        cout << t << ".";
        sb3.pb(binaryToDecimal(t));
    }
    cout << endl;
    REP(x, sb3.size()) {
        cout << sb3[x] << ".";
    }
    cout << endl;

    string sbB4 = "";
    vector<int> sb4;
    cout << "Subnet Mask of 4th: " << endl;
    for (int x = 1; x <= 32 - hb4; x++) {
        sbB4 += '1';
    }
    for (int x = 1; x <= hb4; x++)
        sbB4 += '0';
    for (int x = 0; x < 32; x += 8) {
        string t = sbB4.substr(x, 8);
        cout << t << ".";
        sb4.pb(binaryToDecimal(t));
    }
    cout << endl;
    REP(x, sb4.size()) {
        cout << sb4[x] << ".";
    }
    cout << endl;

    string sbB5 = "";
    vector<int> sb5;
    cout << "Subnet Mask of 5th : " << endl;
    for (int x = 1; x <= 32 - hb5; x++) {
        sbB5 += '1';
    }
    for (int x = 1; x <= hb5; x++)
        sbB5 += '0';
    for (int x = 0; x < 32; x += 8) {
        string t = sbB5.substr(x, 8);
        cout << t << ".";
        sb5.pb(binaryToDecimal(t));
    }
    cout << endl;
    REP(x, sb5.size()) {
        cout << sb5[x] << ".";
    }
    cout << endl;

    cout << "Range of 1st : ";
    vector<int> r1;
    for (int x = 0; x < 4; x++) {
        r1.push_back(255 - sb1[x]);
    }
    REP(x, 4) {
        cout << r1[x] << ".";
    }
    cout << endl;

    cout << "Range of 2nd : ";
    vector<int> r2;
    for (int x = 0; x < 4; x++) {
        r2.push_back(255 - sb2[x]);
    }
    REP(x, 4) {
        cout << r2[x] << ".";
    }
    cout << endl;

    cout << "Range of 3rd : ";
    vector<int> r3;
    for (int x = 0; x < 4; x++) {
        r3.push_back(255 - sb3[x]);
    }
    REP(x, 4) {
        cout << r3[x] << ".";
    }
    cout << endl;

    cout << "Range of 4th : ";
    vector<int> r4;
    for (int x = 0; x < 4; x++) {
        r4.push_back(255 - sb4[x]);
    }
    REP(x, 4) {
        cout << r4[x] << ".";
    }
    cout << endl;

    cout << "Range of 5th : ";
    vector<int> r5;
    for (int x = 0; x < 4; x++) {
        r5.push_back(255 - sb5[x]);
    }
    REP(x, 4) {
        cout << r5[x] << ".";
    }
    cout << endl;
    vector<int> r;
    r.pb(r1[3]);
    r.pb(r2[3]);
    r.pb(r3[3]);
    r.pb(r4[3]);
    r.pb(r5[3]);

    cout << "Range of IP : " << endl;
    for (int x = 0; x < 5; x++) {
        cout << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << endl;
        ip4 += r[x];
        cout << ip1 << "." << ip2 << "." << ip3 << "." << ip4 << endl;
        ip4++;
        cout << endl;
    }

    return 0;
}