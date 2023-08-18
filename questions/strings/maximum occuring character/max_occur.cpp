#include<iostream>
#include<string>
using namespace std;

char maxOccurence(string s){
    int arr[26] = {0};
    for(int i = 0; i < s.size(); i++){
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = -1;
    for(int i = 0; i < 26; i++){

        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char ch = ans + 'a';
    return ch;
}

int main(){

    string s;
    cout<<"Enter the string : ";
    cin>>s;

    char character = maxOccurence(s);
    cout<<endl<<"Maximum occuring character : "<<character;

    return 0;
}