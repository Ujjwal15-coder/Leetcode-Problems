class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = 0;  // Step 1: To store the largest diagonal^2 we find
        int maxArea = 0;      // Step 2: To store the area of the rectangle with that max diagonal
        
        for(auto& rect:dimensions) // Step 3: Loop through every rectangle
        {
            int l = rect[0]; 
            int w = rect[1];
            int diag = l*l + w*w; // Step 4: Calculate diagonal^2 (no sqrt needed)
            int area = l*w; // Step 5: Calculate area of the rectangle
        
        // Step 6: If this rectangle has a bigger diagonal than any we've seen
        if(diag > maxDiagonal){
            maxDiagonal = diag; // update max diagonal
            maxArea = area;     // update max area
        }
         // Step 7: If diagonals are equal, pick the one with the bigger area
        else if(diag == maxDiagonal){
            maxArea = max(maxArea,area); //compare areas , not diagonals
        }

        }
        return maxArea;
    }
};