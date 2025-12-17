#include <bits/stdc++.h>
using namespace std;
bool is_valid(vector<vector<char>>& board, int row, int col,char digit)
{
     int startrow=3*(row/3);
    int startcol=3*(col/3);
    for(int i=0;i<9;i++)
    {
        if(board[row][i]==digit) return false;
        if(board[i][col]==digit) return false;
        if(board[startrow + i/3][startcol + i%3]==digit) return false;
    }
   
    return true;
}
bool solve_sudoku(vector<vector<char>>&board)
{
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char digit='1';digit<='9';digit++)
                    {
                        if(is_valid(board,i,j,digit))
                        {
                            board[i][j]=digit;
                            if(solve_sudoku(board)) return true;
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
}
int main()
{
    vector<vector<char>> board(9,vector<char>(9));
        for(int i=0;i<9;i++)
            {
                for(int j=0;j<9;j++)
                {
                    cin>>board[i][j];
                }
            }
        if(solve_sudoku(board))
        {
            for(auto &row:board)
            {
                for(char c:row) cout<<c<<" ";
                cout<<"\n";
            }
        }
        else{
            cout<<"No Solution Exists \n";
        }
        return 0;
}
