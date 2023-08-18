#include<iostream>
#include<string>
using namespace std;

string rev_char(string c){
    int start = 0;
    int end = c.size()-1;
    while(start<=end){
        swap(c[start],c[end]);
        start++;
        end--;
    }
    return c;
}

string rev_order(string s){
    string c;
    string rev_string;
    for(int i = s.size()-1; i >= 0; i--){
        if(isalnum(s[i])){
            c.push_back(s[i]);
        }
        else{
            rev_string.append(rev_char(c));
            rev_string.append(" ");
            c.clear();
        }
    }
    rev_string.append(rev_char(c));
    return rev_string;
}
int main(){

    string s = "My name is Ashish Negi";

    string rev_ = rev_order(s);

    cout<<rev_;

    return 0;
}