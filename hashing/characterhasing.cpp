#include<iostream>
using namespace std;

int main(){

    char str[] = "ab####cdabefcaabbadfeabc";
    cout<<str;
    cout<<endl;

    //this for only lower case letter
    int hash_arr[26] = {0};
    for(int i=0; i<sizeof(str); i++){
        hash_arr[str[i]-'a'] += 1;
    }

    //for all characters take the hash array size = 256
    int hash[256] = {0};

    for(int i=0; i<sizeof(str);i++){
        hash[str[i]] += 1;
    }
    int num;
    cout<<"enter a number : ";
    cin>>num;
    while(num>0){
        char c;
        cin>>c;
        cout<<"No. of times character "<<c<<" appears "<<hash[c];
        cout<<endl;
        num--;
    }
}