#include<iostream>
using namespace std;

/*
//Now the bad practice
int& update2(int n){
    int num = n;
    int& ans = num;
    ans = ans + 10;
    cout<<"Ans : "<<ans<<endl;
    return &ans;
}

*/

//pass by reference concept
int update1(int& n){
    n++;
}

int main(){
/*
    int i = 5;
    int j = i;

    cout<<&i<<endl;
    cout<<&j<<endl;

    //How to create a reference varible 
    int &k = i; // created a ref variable with the name k pointing to i

    cout<<"i  "<<&i<<endl;
    cout<<"k  "<<&k<<endl;
*/

/*
    int n = 10;
    //cout<<"Before n : "<<n<<endl;
    //update2(n);
    //cout<<"After n : "<<n<<endl;

    int &m = n;

    cout<<m<<endl;

    int a = 20;
    char* ptr = (char*)&a;

*/

    int arr[20] = {1,2,3,4,5,6};
    cout<<"Address of the particular position : "<<endl;
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;
    cout<<endl<<endl;
    cout<<"Alternative : "<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<endl<<endl<<endl;
    cout<<"Value at particular position : "<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<endl<<endl;
    cout<<"Alternative : "<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    return 0;
}