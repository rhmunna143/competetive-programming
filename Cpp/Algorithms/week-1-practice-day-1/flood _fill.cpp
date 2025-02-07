class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startColor = image[sr][sc];
        if (startColor == color) return image;

        int rows = image.size();
        int cols = image[0].size();
        queue<pair<int, int>> q;
        q.push({sr, sc});

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            if (r < 0 || r >= rows || c < 0 || c >= cols || image[r][c] != startColor)
                continue;
                
            image[r][c] = color;
            
            q.push({r+1, c});
            q.push({r-1, c});
            q.push({r, c+1});
            q.push({r, c-1});
        }

        return image;
    }
};