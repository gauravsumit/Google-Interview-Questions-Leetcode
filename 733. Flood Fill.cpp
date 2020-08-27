class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(image.size()==0 || newColor == image[sr][sc] )
        {
            return image;
        }
        else
        {
            int oldcolor=image[sr][sc];
            image[sr][sc]=newColor;
            if(sr>0)
            {
                if(image[sr-1][sc]==oldcolor)
                {
                    floodFill(image,sr-1,sc,newColor);
                }
            }
            if(sc>0)
            {
                if(image[sr][sc-1]==oldcolor)
                {
                    floodFill(image,sr,sc-1,newColor);
                }
        }
            if(sr<image.size()-1)
            {
                if(image[sr+1][sc]==oldcolor)
                {
                    floodFill(image,sr+1,sc,newColor);
                }
            }
            if(sc<image[0].size()-1)
            {
                if(image[sr][sc+1]==oldcolor)
                {
                    floodFill(image,sr,sc+1,newColor);
                }
            }
        }
        return image;
    }
};









