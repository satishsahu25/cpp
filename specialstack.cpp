#include<bits/stdc++.h>
using namespace std;

int mini;

void push(stack<int>& s, int a){



// ********GOOD STRATEGY***********
// push karte samay hi hum minimum nikaal ke rakh rahe hai



	// Your code goes here
	if(s.empty()){
	    mini=a;
	    s.push(a);
	}else{
	    mini=min(a,mini);
	    s.push(a);
	}

}

bool isFull(stack<int>& s,int n){
	// Your code goes here
    if(s.size()==n){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(stack<int>& s){
	// Your code goes here
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

int pop(stack<int>& s){
	// Your code goes here
    int ele=s.top();
    s.pop();
    return ele;

}

int getMin(stack<int>& s){
	// Your code goes here
    return mini;
}



int main(){
    stack<int> s;

    push(s,18);
    push(s,19);
    push(s,29);
    push(s,15);
    push(s,16);
    pop(s);
    cout<<isEmpty(s)<<endl;
    push(s,16);

    cout<<getMin(s);

    return 0;
}