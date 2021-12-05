class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0)); // define a 2d array
        int startx = 0, starty = 0; // define the start point for each loop 
        int loop = n / 2; // 
        int mid = n / 2; // 
        int count = 1; // 
        int offset = 1; // 
        int i,j;
        while (loop --) {
            i = startx;
            j = starty;

            for (j = starty; j < starty + n - offset; j++) {
                res[startx][j] = count++;
            }

            for (i = startx; i < startx + n - offset; i++) {
                res[i][j] = count++;
            }
       
            for (; j > starty; j--) {
                res[i][j] = count++;
            }

            for (; i > startx; i--) {
                res[i][j] = count++;
            }


            startx++;
            starty++;

            offset += 2;
        }

        if (n % 2) {
            res[mid][mid] = count;
        }
        return res;
    }
};