/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int en=n;
        int st=1;
        while(en>=st)
        {
            int mid = st + (en-st)/2;
            if(guess(mid)==0)
            {
                return mid;
            }
            else if(guess(mid)==-1)
            {
                en=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        return 1;
    }
};

//O(log n)

// 1 ..   n


// chosen =10

// what is that number 

// k=10
// guess(k)  == actual :0
    
    
// 7
// guess(k) < actual : 1
    

// 11
// guess(k) > actual  : -1
    
    

    
    
    
    
    
//     chosen number =35
//     n=100
    
    
    
    
//     mid = 100/2 =50
//     guess(50) :-1
//     range reduced by a factor of 2  
//     1 - 100
//     1 - 50
    
//     mid 25
//     guess(25) : +1
//     range 25-50
    
    
//     mid = 37
//     guess(37) : -1
//     range 25-36
    
//     mid
    
    
