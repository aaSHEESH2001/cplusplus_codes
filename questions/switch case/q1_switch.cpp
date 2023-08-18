#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your total amount : ";
    cin>>num;
    int ans = 0;

    switch(num / 100 >= 1){     // this expression either gives 0(false) or 1(true)
        case 1: ans = num/100;
                num = num % 100;
                cout<<"No of notes required of "<<100<<" is "<<ans<<endl;
                
        //there is no break statement here so the case 0 will also run

        case 0:
                switch(num / 50 >= 1){
                    case 1: ans = num/50;
                            num = num % 50;
                            cout<<"No of notes required of "<<50<<" is "<<ans<<endl;

                    case 0:
                        switch(num / 20 >= 1){
                            case 1: ans = num/20;
                                    num = num % 20;
                                    cout<<"No of notes required of "<<20<<" is "<<ans<<endl;

                            default: ans = num/1;
                                    num = num % 1;
                                    cout<<"No of notes required of "<<1<<" is "<<ans<<endl;
                        }
                }
    }
}