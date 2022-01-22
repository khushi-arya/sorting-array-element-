#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,3,2,8};
    int i;
    for(i=0;i<5;i++){
        cout<<"  "<<arr[i];
    }
    cout<<"\n";
    cout<<"sorted array: \n";
    int j;
    for(i=0;i<5;i++){
        for(j=i+1;j<4;j++){
         if(arr[i]>arr[j]){
             swap(arr[i],arr[j]);
         }
        }
    }
    for(i=0;i<5;i++){
   cout<<"  "<<arr[i];
   }
   return 0;
}