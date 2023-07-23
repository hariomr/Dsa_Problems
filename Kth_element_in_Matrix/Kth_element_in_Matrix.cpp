int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int start = mat[0][0];
  int end = mat[n-1][n-1];
  
  int midval;
  while(start <= end){
      
      midval = (start+end)/2;
      int ans = 0;
      for(int i=0;i<n;i++){
          
          int low = 0 , high = n-1;
          
          while(low<=high){
              int mid = low + (high-low)/2;
              
              if(mat[i][mid] <= midval){
                  low= mid+1;
                }
                else{
                 high = mid-1;   
                }
            }
            ans +=low;
        }
        
        if(ans<k){
            start = midval+1;
        }
        else{
            end = midval-1;
        }
    }
    return start;
}
