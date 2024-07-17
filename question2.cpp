/*write a progam to find the  max element from the list*/
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
int max =arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
cout<<"Max element is "<<max<<endl;
return 0;
}
