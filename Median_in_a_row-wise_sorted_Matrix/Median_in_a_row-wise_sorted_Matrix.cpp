class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here   
        int startval = 0, endval = 2000,midval;
        int n = R*C;
        
        while(startval<=endval){
            
            midval = (endval+startval)/2;
            int ans=0;
            for(int i = 0 ;i<R;i++){
                int low = 0,high = C-1;
                while(low<=high){
                    int mid = low + (high-low)/2;
                    if(matrix[i][mid] <= midval) low=mid+1;
                    else high = mid-1;
                }
                ans += low;
            }
            
            if(ans<=n/2) startval = midval+1;
            else endval = midval-1;
        }
        return startval;
    }
};
