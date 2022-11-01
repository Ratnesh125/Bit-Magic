//https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        if(n>>k&1!=0)
            return 1;
        else
            return 0;
    }
};
// example->
// n=13
// k=2
// 13->  1101
//        ^
// we have to check 2nd bit
// right shift it by 2
// now 2nd bit at 0th position
// now use & bitwise operator
