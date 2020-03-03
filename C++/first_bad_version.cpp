// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1, right = n;
        
        while(left < right) {
            if(isBadVersion((left + right) / 2)) right = (left + right) / 2;
            else {
                if(isBadVersion((left + right) / 2+1)) return (left + right) / 2+1;
                left = (left + right) / 2;
            }
        }
        return left;
    }
};
