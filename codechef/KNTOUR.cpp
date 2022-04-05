#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool KnightTour(vector<vector<int>> &board, int r, int c, int moves)
{
    if (r < 0 || c < 0 || r >= board.size() || c >= board.size() || board[r][c] != 0)
        return false;

    else if (moves == board.size() * board.size())
    {
        board[r][c] = moves;
        return true;
    }

    board[r][c] = moves;

    if (KnightTour(board, r - 2, c + 1, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r - 1, c + 2, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r + 1, c + 2, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r + 2, c + 1, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r + 2, c - 1, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r + 1, c - 2, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r - 1, c - 2, moves + 1))
    {
        return true;
    }
    if (KnightTour(board, r - 2, c - 1, moves + 1))
    {
        return true;
    }

    board[r][c] = 0;

    return false;
}

int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        KnightTour(ans, 0, 0, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}