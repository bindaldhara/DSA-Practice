class Solution {
public:
    vector<int> evenOddBit(int n) {
        string temp="";
        vector<int>res;
        int even=0;
        int odd=0;
        while(n!=0){
            temp+=n%2;
            n=n/2;
        }
        for(int i=0;i<temp.size();i++){
            if(i%2 == 0 && temp[i] == 1)
                even++;
            else if(i%2 !=0 && temp[i] == 1)
                odd++;
        }
        res.push_back(even);
        res.push_back(odd);
        return res;
    }
};