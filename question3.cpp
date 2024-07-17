#include<bits/stdc++.h>
using namespace std;
int divisibleByThree(int arr[],int size){
int flag = 0;
for(int i=0;i<size;i++){
    if(arr[i]%3==0){
        flag++;
    }
    else if(arr[i] < 0){
        cout<<"Invalid";
        exit(0);
    }
    else
      continue;
}
return flag;
}
int main(){
    int size,count;
    int arr[] = {1,3,2,5,6,10};
    size = sizeof(arr)/4;
    if(size<0){
        cout<<"Invalid!";
        exit(0);
    }
    count = divisibleByThree(arr,size);
    cout<<"Elements divisible by 3 : "<<count;
}
