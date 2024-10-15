class Solution {
public:
    int count(int i, int n, string &vowels){

   		if(n==0) return 1; 

   		if(i>=5) return 0; 

   		int pick, notPick;
   		pick= count(i, n-1, vowels);
   		notPick= count(i+1, n, vowels);

   		return pick + notPick;
   }

   int countVowelStrings(int n) {
   	 string vowels= "aeiou";
   	 return count(0, n, vowels);
   }
};