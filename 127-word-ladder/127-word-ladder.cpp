class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>words;
        
        
        bool isPresent = false;
        for(auto word: wordList)
        {
            if(endWord.compare(word) == 0)
                isPresent = true;
            
            words.insert(word);
        }
        
    
        if(isPresent == false)
            return 0;
        
        queue<string>wordQueue;
        wordQueue.push(beginWord);
        int path = 0;
        
    
        while(!wordQueue.empty())
        {
            path += 1;
            int elementsSize = wordQueue.size();
            
            while(elementsSize--)
            {
                string curr = wordQueue.front();
                wordQueue.pop();
                int len = curr.length();
                
                
                
                for(int i = 0; i < len; i++)
                {
                    string temp = curr;
                    for(char letter = 'a'; letter <= 'z'; letter++)
                    {
                        temp[i] = letter;
                        
                        
                        if(curr.compare(temp) == 0)
                            continue;
                        
                    
                        if(temp.compare(endWord) == 0)
                            return path + 1;
                        
        
                        if(words.find(temp) != words.end())
                        {
                            wordQueue.push(temp);
                            words.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};