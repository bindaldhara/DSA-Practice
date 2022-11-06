#define CHAR_SIZE 26

class Trie{
    public: 
    bool isLeaf;
    string word;
    Trie* character[CHAR_SIZE];
    Trie(){
        this->isLeaf = false;
        for(int i=0; i < CHAR_SIZE; i++){
            this->character[i] = nullptr;
        }
    }
    void insert(string);
    };

void Trie::insert(string key)
{
    Trie* curr = this;
    int size = key.size();
    for(int i=0; i < size; i++){
        if(curr->character[key[i]-'a'] == nullptr){
            curr->character[key[i]-'a'] = new Trie();
        }
        curr = curr->character[key[i]-'a'];
    }
    curr->isLeaf = true;
    curr->word = key;
}

class Solution{

public:
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};
    void searchForWord(vector<vector<char>>& board, vector<vector<bool>>& visited, int x, int y, Trie* tree, vector<string>& result){
    int m = board.size(), n = board[0].size();
    
    if(x>=0 && y>=0 && x<m && y<n && tree->character[board[x][y]-'a'] != nullptr){
        if(visited[x][y] == true){
            return;
        }
        tree = tree->character[board[x][y]-'a'];
        if(tree->isLeaf){
            tree->isLeaf = false;
            result.push_back(tree->word);
        }
         
        visited[x][y] = true;
        for(int k=0; k<4; k++){
            int new_x = x + dx[k];
            int new_y = y + dy[k];
            searchForWord(board, visited, new_x, new_y,tree , result);
        }
        visited[x][y] = false;
    }
    
}

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* tree = new Trie();
        for(auto word : words){
            tree->insert(word);
        }
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        int m = board.size(), n = board[0].size();
        vector<string> result;
       
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                searchForWord(board, visited, i, j, tree, result);
            }
        }
        return result;
    }

};