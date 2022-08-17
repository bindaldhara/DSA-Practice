class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v = {".-","-...","-.-.","-..",".","..-.","--.","....",
                            "..",".---","-.-",".-..","--","-.","---",".--.",
                            "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
  	  unordered_set<string>s;
  	  for(auto w:words) {
  		 string str;
  		 for (auto i:w) 
            str+=v[i-'a'];
  		s.insert(str);
  	 }

  return s.size ();
    }
};

