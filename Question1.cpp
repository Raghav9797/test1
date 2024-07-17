/*Write a program to display the array element.*/
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the total no of elements";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;;

}
return 0;
}
