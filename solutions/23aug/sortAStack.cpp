#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class SortedStack{
public:
    stack<int> s;
    void sort();
    
};


/* The below method sorts the stack s
you are required to complete the below method */
void insertAtRightPlace(stack<int>& s, int ele) {
    // Your code here
    if(s.empty()||s.top()<ele){
        s.push(ele);
        return;
    }
    int x=s.top();
    s.pop();
    insertAtRightPlace(s,ele);
    s.push(x);
}

void SortedStack ::sort() {
    // Your code here
    if(s.empty()){
        return;
    }
    int ele=s.top();
    s.pop();
    sort();
    insertAtRightPlace(s,ele);
}

