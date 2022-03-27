class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string res;
    int sz1=word1.size();
    int sz2=word2.size();
	for(int k=0,i=0,j=0;k<sz1+sz2;k++){ 
	
        if(sz1<=i){
            res+=word2.substr(j,sz2-j);
            break;
        }
        else if(sz2<=j){
            res+=word1.substr(i,sz1-i);
            break;
        }
		
        else if(k%2==0){
            res+=word1[i];
            i++;
        }
        else if(k%2!=0){
            res+=word2[j];
            j++;
        }
        
    }
    return res;
    }
};