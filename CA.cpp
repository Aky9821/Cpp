#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> stored;
int sp = 7;

void submitAllPossibleBoards(vector<vector<int>>& board) {
    ofstream fout;
    fout.open("AllPossibleCombinations.txt", ios::app);
    system("color F");
    int n = board.size();
    fout << "\n\n";
    if (n == 2 || n == 3 || n == 4)
        sp = 6;
    else if (n == 5 || n == 6 || n == 7)
        sp = 5;
    else if (n == 8)
        sp = 4;
    fout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < sp; j++) fout << "\t";
        for (int j = 0; j < n; j++) {
            fout << "----";
        }
        fout << "-";
        fout << endl;
        for (int j = 0; j < sp; j++) fout << "\t";
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                fout << "| ";
            }
            if (board[i][j] != 0) {
                fout << "* ";
            } else
                fout << "  ";
            fout << "| ";
        }
        fout << endl;
    }
    for (int j = 0; j < sp; j++) fout << "\t";
    for (int i = 0; i < n; i++) {
        fout << "----";
    }
    fout << "-";
    fout.close();
}

void printBoard(vector<vector<int>>& board) {
    system("color A");
    int n = board.size();
    cout << "\n\n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < sp; j++) cout << "\t";
        for (int j = 0; j < n; j++) {
            cout << "----";
        }
        cout << "-";
        cout << endl;
        for (int j = 0; j < sp; j++) cout << "\t";
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                cout << "| ";
            }
            if (board[i][j] != 0) {
                cout << "* ";
            } else
                cout << "  ";
            cout << "| ";
        }
        cout << endl;
    }
    for (int j = 0; j < sp; j++) cout << "\t";
    for (int i = 0; i < n; i++) {
        cout << "----";
    }
    cout << "-";
}

bool isSafe(int row, int col, vector<vector<int>>& board, int n) {
    int row_c = row;
    int col_c = col;
    while (row_c >= 0 && col_c >= 0) {
        if (board[row_c][col_c] == 1) {
            cout << "\n\n";
            for (int j = 0; j < sp; j++) cout << "\t";
            cout << "Not valid";
            system("color C");
            usleep(1000);
            return false;
        }
        row_c--;
        col_c--;
    }
    row_c = row;
    col_c = col;
    while (col_c >= 0) {
        if (board[row_c][col_c] == 1) {
            cout << "\n\n";
            for (int j = 0; j < sp; j++) cout << "\t";
            cout << "Not valid";
            system("color C");
            usleep(1000);
            return false;
        }
        col_c--;
    }
    col_c = col;

    while (row_c < n && col_c >= 0) {
        if (board[row_c][col_c] == 1) {
            cout << "\n\n";
            for (int j = 0; j < sp; j++) cout << "\t";
            cout << "Not valid";
            system("color C");
            usleep(1000);
            return false;
        }
        row_c++;
        col_c--;
    }
    cout << "\n\n";
    for (int j = 0; j < sp; j++) cout << "\t";
    cout << "Valid";
    usleep(1000);
    return true;
}

void solve(int col, vector<vector<int>>& board, int n) {
    if (col == n) {
        for (int j = 0; j < sp - 2; j++) cout << "\t";
        cout << "\n\nFound " << stored.size() + 1 << " Solution" << endl;
        usleep(5000);
        stored.push_back(board);
        return;
    }
    for (int i = 0; i < n; i++) {
        board[i][col] = 1;
        system("cls");
        printBoard(board);
        usleep(2000);
        board[i][col] = 0;
        if (isSafe(i, col, board, n)) {
            board[i][col] = 1;
            solve(col + 1, board, n);
            board[i][col] = 0;
        } else {
            system("color B");
            usleep(1000);
        }
    }
}

int main() {
    int n = -1;
    while (n == -1) {
        system("cls");
        system("color E");
        cout << "\t\t\t\t\t\tEnter numver of Queens:\t";
        int x;
        cin >> x;
        if (x > 8) {
            cout << "\nGiven Number is Very large. Please enter number between 1 to 8." << endl;
        } else if (x < 1) {
            cout << "\nEnter valid number of Queen." << endl;
        } else {
            n = x;
        }
    }
    if (n == 2 || n == 3 || n == 4)
        sp = 6;
    else if (n == 5 || n == 6 || n == 7)
        sp = 5;
    else if (n == 8)
        sp = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    printBoard(board);
    cout << "\n\t\t\t\t\t\tStarting in 1 Second.";
    usleep(5000);
    solve(0, board, n);
    system("cls");
    ofstream fout;
    fout.open("AllPossibleCombinations.txt");
    fout << "\n";
    fout.close();
    fout.open("AllPossibleCombinations.txt", ios::app);
    fout << "\t\tFound total " << stored.size() << " possible positions";
    fout << "\n\n\n";
    fout << "\t\tAll Possible positions for Queens mentioned below";
    fout << "\n\n";
    fout.close();
    for (int i = 0; i < stored.size(); i++) {
        submitAllPossibleBoards(stored[i]);
        fout << "\n\n";
    }
    return 0;
}