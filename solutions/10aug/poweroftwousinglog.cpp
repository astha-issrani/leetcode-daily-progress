#include <stack>
#include <string>
#include <cmath>
using namespace std;

class solution{
    public:
    bool isPowerOfTwo(int n) {
        return n>0 && log2(n)==(int) log2(n);
    }
};