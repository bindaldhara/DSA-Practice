class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int n = arr.size(), i=0;
        if(n>=3){
            while(i+1<n && arr[i]<arr[i+1]) 
                i++;
			
            if(i>=1 && i!=n-1 && arr[i+1] != arr[i])
            {
				int k = i;
                while(k+1<n && arr[k]>arr[k+1]) 
                    k++;
                if(k==n-1 ) 
                    return true;
            }        
        }
          return false; 
    }
};
