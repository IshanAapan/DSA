class Solution {
public:
    int heightChecker(vector<int>& heights) {
        std::size_t len = heights.size();
        vector<int>expected(heights);
        int count = 0;
        std::sort(expected.begin(),expected.end());
        for(int i=0;i<len;i++){
            if(heights[i]!=expected[i]){
                count+=1;
            }
        }
        return count;
    }
};
