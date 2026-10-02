class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    // even length: x == rev   (1221 -> x=12, rev=12)
    // odd length:  x == rev/10 (12321 -> x=12, rev=123)
    return x == rev || x == rev / 10;
}
};