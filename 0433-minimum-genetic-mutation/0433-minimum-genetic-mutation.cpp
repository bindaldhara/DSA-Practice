class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> visited;
        unordered_set<string> temp;
        int cnt=0;
        queue<string>q;
        vector<char> choice = {'A','C','G','T'};
        for(int i=0;i<bank.size();i++){
            temp.insert(bank[i]);
        }
        q.push(start);
        visited.insert(start);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                if(q.front() == end)
                    return cnt;
                for(int i=0;i<8;i++){
                    string curr = q.front();
                    
                    for(int j=0;j<4;j++){
                        curr[i] = choice[j];
                        //cout<<curr<<" "<<endl;
                        if(visited.find(curr) == visited.end() && temp.find(curr) != temp.end()){
                            q.push(curr);
                            visited.insert(curr);
                        }     
                    }
                }
                q.pop();
            }
            cnt++;
        }
        return -1;
    }
};