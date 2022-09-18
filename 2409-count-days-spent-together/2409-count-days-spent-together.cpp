class Solution {
public:
    int dateconvert(string s){
        vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sum=0,m=stoi(s.substr(0,2)),d=stoi(s.substr(3,2));
        for(int i=0;i<m-1;i++)
            sum+=month[i];
        return (sum+d);
    }
    
    int countDaysTogether(string aA, string lA, string aB, string lB) {
        int a1=dateconvert(aA),a2=dateconvert(aB),l1=dateconvert(lA),l2=dateconvert(lB);
        return max(0,min(l1,l2)-max(a1,a2)+1);
    }
};
