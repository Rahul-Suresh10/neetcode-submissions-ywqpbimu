class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        for(int i=0;i<board[0].size();i++)
        {
            for(int j=0;j<board.size();j++)
            {

                char c = board[i][j]; 
                if(c == '.')
                {
                    continue;
                }
                else
                {
                    char element = board[i][j];
                    if(rows[i].count(element) == 0)
                    {
                       rows[i].insert(element);
                    }
                    else
                    {
                        return false;
                    }

                    if(cols[j].count(element) == 0)
                    {
                        cols[j].insert(element);
                    }
                    else
                    {
                        return false;
                    }

                    int boxIndex = i/3 * 3 + j/3;

                    if(boxes[boxIndex].count(element) == 0)
                    {
                        boxes[boxIndex].insert(element);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }



    return true;

        
    }
};
