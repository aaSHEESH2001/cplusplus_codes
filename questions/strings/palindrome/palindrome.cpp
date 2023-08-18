#include<iostream>
using namespace std;

int palindrome(char str[], int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        if(str[start] != str[end]){
            return -1;
        }
        start++;
        end--;
    }
    return 1;
}

int string_len(char str[]){
    int i = 1;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}


int main(){

    char str[50] = "letsgo";

    int size = string_len(str);

    int result =  palindrome(str,size);

    if(result == -1){
        cout<<"Not a palindrome ";
    }
    else{
        cout<<"The string is a palindrome";
    }

    return 0;
}