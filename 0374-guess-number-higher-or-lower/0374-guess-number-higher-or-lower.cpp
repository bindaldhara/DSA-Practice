/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long start=1,end=n;
        while(start<end){
            int mid=(start+end)/2;
            int k=guess(mid);
            if(k>0) 
                start=mid+1;
            else if(k<0) 
                end=mid-1;
            else 
                return mid;
        }

        return start;
    }
};