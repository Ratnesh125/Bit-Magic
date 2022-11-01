#include <iostream>
using namespace std;
int main() {
    int x=2; //10
    int y=3; //11  
    int z=22; //111
    unsigned int u=5;
//     Bitwise AND
    cout<<(x&y)<<endl; //only 1&1=1
//     Bitwise OR
    cout<<(x|y)<<endl; //(1|0 0|1 1|1) = 1
//     Bitwise XOR
    cout<<(x^y)<<endl; //(1|0 0|1) = 1
//     Left Shift 
    cout<<(x<<2)<<endl; // x*2^n   10<<1000 = 8
//     Right shift
    cout<<(x>>1)<<endl; // n/2^n   10>>1 
//     Bitwise NOT
//     ->for signed integers
    cout<<(~z)<<endl; //for -z=z+1 for +z=-(z-1)
//     ->for unsigned integers
    cout<<(~u)<<endl; //2^32-1 = 4294967295
//     for 5 
//     0.....0101
//     1.....1010
//     4294967295-(2^0+2^2)=4294967290
    return 0;
}
// output->
// 2
// 3
// 1
// 8
// 1
// -23
// 4294967290
// -6
