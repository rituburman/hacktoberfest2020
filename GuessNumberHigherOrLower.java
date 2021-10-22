
public class Solution extends GuessGame {
    
    public int guessNumber(int n) {
        int start=1, end = n;
        while(true){
            int mid = start + (end - start)/2;
            int res = guess(mid);
            if(res == 0){
                return mid;
            }
            else if(res == -1){
                end  = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
    }
}
