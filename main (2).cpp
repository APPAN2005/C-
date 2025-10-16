#include <iostream>
using namespace std;

int main () {
    
    int n;
    cout<<"Total element";
    cin>>n;
    
    int a[n],i,j,temp;
    cout<<"Array: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    cout<<"Sorted Array:";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}