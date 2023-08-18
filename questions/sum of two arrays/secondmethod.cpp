#include<iostream>
#include<vector>
using namespace std;

vector<int> sum2array(vector<int> a,vector<int> b){
    int i = a.size()-1;
    int j = b.size()-1;
    int carry = 0;
    vector<int> ans;
    while(i >= 0 && j >=0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    return ans;
}


int main(){

    vector<int> num1 = {1,2,3,4};
    vector<int> num2 = {6};

    vector<int> num3 = sum2array(num1,num2);

    for(int i:num3){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}