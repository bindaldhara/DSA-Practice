class Trie {
public:
    Trie() {
        
    }

	void insert(string word) {
		s.insert(word);
	}

	bool search(string word) {
		return s.count(word);
	}

	bool startsWith(string prefix) {
		auto it = s.lower_bound(prefix);
		return !(it == s.end() || it->length() < prefix.length() || it->substr(0, prefix.length()) != prefix);
	}

private:
	set<string>s;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */