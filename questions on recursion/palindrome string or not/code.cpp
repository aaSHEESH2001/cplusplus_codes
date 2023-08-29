#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

bool check_Palindrome(string& str, int i, int j){
    if(i > j){
        return true;
    }
    if(str[i] == str[j]){
        i++;
        j--;
        bool res = check_Palindrome(str,i,j);
        return res;
    }
    else{
        return false;
    }
}

int main(){

    string str = "JahaJ";
    int size = str.size();
    bool res = check_Palindrome(str,0,size-1);
    
    if(res){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

}