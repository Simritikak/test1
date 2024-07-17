#include<iostream>
#include<list>
using namespace std;
int main(){
    int max = 0;
    list<int> l{3,2,7,8,10};
    for(int i : l){
        if(i>max){
            max=i;
        }
    }
    cout<<"Max Element: "<<max<<endl;
    return 0;
}