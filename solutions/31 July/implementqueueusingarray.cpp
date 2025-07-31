#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class Queue{
    int * arr;
    int n=5;
    int front, rear;
    int cnt;
    public:
    Queue(){
        int * arr[n];
        int rear=0;
        int front=0;
        int cnt=0;
    }
    void push(int x){
        if(cnt==n){
            cout<<"queue is full";
        }
        arr[rear%n]=x;
        rear+=1;
        cnt+=1;
    };
    void pop(){
        if(cnt==0){
            cout<<"queue is empty";
        }
        arr[front%n]=-1;
        front+=1;
        cnt-=1;
    };
    int top(){
        if(cnt==0){
            cout<<"queue is empty";
        }
        return arr[front%n];
    };
};