#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    bool dfs(vector<vector<char>>& grid, int r, int c, string word,int word_idx){
        if(word_idx ==word.length()){
            return true;
        }
        //basecase
        if(r<0||c<0||r>=grid.size()||c>=grid[0].size()){
            return false;
        } //outofbound
        if(grid[r][c]=='.'||grid[r][c]!=word[word_idx]){
            return false;
        }
        //validcase
        char ch=grid[r][c];
        grid[r][c]='.';
        bool found=dfs(grid,r,c-1,word,word_idx+1)||
        dfs(grid,r-1,c,word,word_idx+1)||
        dfs(grid,r,c+1,word,word_idx+1)||
        dfs(grid,r+1,c,word,word_idx+1);
        grid[r][c]=ch;
        return found;
    }
        
    bool exist(vector<vector<char>>& board, string word) {
        int rows=board.size();
        int columns=board[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(dfs(board, i,j,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};