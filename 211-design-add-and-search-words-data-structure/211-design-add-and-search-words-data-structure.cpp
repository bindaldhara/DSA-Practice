class WordDictionary {
public:
  unordered_map <int, vector <string> >mp;
    
    bool Match( string & str, string & dot){
        
        for( int i = 0 ; i < dot.size() ; i++ ){
            if(dot[i] == '.' ) continue;
            if( dot[i] != str[i] ) return false;
        }
        
        return true;
    }
    
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        mp[word.size()].push_back(word); 
    }
    
    bool search(string word) {
        if( mp.find(word.size()) == mp.end()) return false;
        auto Words = mp[word.size()];
        
        for( auto it: Words){
            if (Match(it,word) ) return true;
        }
        
        return false;   
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */