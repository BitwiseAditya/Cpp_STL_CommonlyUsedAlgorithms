#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }


    //pre-compute
    unordered_map<int, int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    //iterating the map
   /* for(auto it : hash){
        cout<<it.first<<"->"<<it.second<<endl;
    } */
    

    int q;
    cin>>q; 
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }
    return 0;
}