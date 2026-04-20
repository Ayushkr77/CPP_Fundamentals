// 1's complement: Flip all the bits(if number given is in decimal, convert it into binary and flip all the bits)
// 1's complement of "0111" is "1000".  1's complement of "1100" is  "0011" 
// 2's complement: Do 1's complement and add 1 to it
// 2's complement of "0111" is  "1001".  2's complement of "1100" is  "0100" 

// Decimal to Binary and Binary to Decimal
#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int n) {
    string s="";
    while(n>0) {
        if(n%2==1) s+='1';
        if(n%2==0) s+='0';
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int binaryToDecimal(string s) {
    int n=0,p=1;
    for(int i=s.length()-1;i>=0;i--) {
        if(s[i]=='1') n=n+p;
        p=p*2;
    }
    return n;
}
int main() {
    // int n;
    // cin>>n;
    // cout<<decimalToBinary(n);

    string s;
    cin>>s;
    cout<<binaryToDecimal(s);
}


// Operators: AND,0R,XOR,SHIFT,NOT
// These are bitwise AND(&), bitwise OR(|). Not logical(&&,||)
// difference between bitwise and logical AND:  The logical AND operator ‘&&’ expects its operands to be boolean expressions (either 1 or 0) and returns a boolean value. The bitwise and operator ‘&’ work on Integral (short, int, unsigned, char, bool, unsigned char, long) values and return Integral value. 

// AND: all true=true, all false=false. Ex.: 13 & 7=5. Explanation: 1101 & 0111=0101 which is 5 in decimal

// OR: any one true=true, all false=false.  Ex.: 13 | 7=15. Explanation: 1101 | 0111=1111 which is 15 in decimal

// XOR: no. of 1s is odd=1, no. of 1s is even=0.  Ex.: 13 ^ 7=10. Explanation: 1101 | 0111=1010 which is 10 in decimal
// XOR of same numbers is 0. XOR of a number with 0 is the same number.

// Right SHIFT(>>): Ex.: 13>>1=6. 13=1101. We have to do right shift by 1 place. Means 0110=110, which is 6(in decimal). Ex.: 13>>2=3. 13=1101 We have to do right shift by 2 places. Means 0011=11, which is 3(in decimal). If right shift of 13 by 4 places, then answer 0.
// Formula. x>>k=x/2^k. x divided by 2 power k

// How -ve numbers are stored in binary(Read gfg also, 3 methods: Signed Magnitude Method, 1’s Complement Method, 2’s Complement Method)
// https://www.geeksforgeeks.org/representation-of-negative-binary-numbers/
// If +ve, leftmost bit=0, if -ve number, leftmost bit=1. Using 2's complement. Computer uses 2s complement to store -ve numbers
// Must read from gfg
// Thats why, INT_MAX=2^31 - 1. It means all 31 bits are 1 except the last bit, which is 0(indicating +ve number). 0111111111...111111.
// Not 2^31 and there's -1 bcz to be a pefect 2 power something leftmost bit is1 and rest 0. And when 2 power something-1, all the bits are 1, ex.: 15=1111 and 16=10000
// We cant do left shift of INT_MAX 01111111111...111111, it'll lead to overflow
// INT_MIN= -2^31
// Also study lsb(least significant bit) and msb(most significant bit). According to me, rightmost bit is lsb and leftmost bit is msb

// Left SHIFT(<<): ex.: 13<<1=26. 13=1101 and we have to do left shift by1 place. Means 11010, which is 26(in decimal).
// Formula. x<<k=x*2^k. x multiplied by 2 power k

// NOT(~): Flip all the bits. Check if its -ve number or not, if -ve, it stores 2s complement, otherwise stores as it is.
// Ex.: Check video Striver(1st video last)