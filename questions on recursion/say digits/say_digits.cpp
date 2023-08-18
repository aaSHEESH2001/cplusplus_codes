#include<iostream>
using namespace std;
#include<string>


void print(int i){

    string map[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    
    cout<<map[i]<<endl;

}

int say_digit(int n){

    if(n==0){
        return 0;
    }
    int rem = n % 10;
    say_digit(n/10);

    print(rem);

}

int main(){
    int n;
    cin>>n;

    say_digit(n);
    
}

/*

----------------------------Alternative Method--------------------------------


int say_digit(int n, string arr){

    if(n==0){
        return 0;
    }
    int rem = n % 10;
    n = n/10;
    say_digit(n,arr);
    
    cout<<arr[rem];

}

int main(){
    int n;
    cin>>n;

    string map[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    say_digit(n,map);
    
}

*/