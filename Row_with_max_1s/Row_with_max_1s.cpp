class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int top = 0;
	    int col = m-1;
	    int ans = -1;
	    
	    while(col >=0 && top < n){
	        
	        for(int i = col ; i>=0 ;i--){
	            
	            if(arr[top][i] ==1 ){
	                col--;
	                ans = top;
	            }
	            else{
	                top++;
	                break;
	            }
	            
	        }
	    }
	    return ans;
	}

};
