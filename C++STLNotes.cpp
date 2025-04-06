#include<bits/stdc++.h>
using namespace std;



void explainPair(){
    pair<int, int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int, int>> p1={1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int, int> arr[]={ {1,2}, {3,4}, {5,6}};
    cout<<arr[2].first<<endl;
}


void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    vector<int> v2(5,100);
    //{100,100,100,100,100}
    vector<int> v3(5);
    //{0,0,0,0,0}
    vector<int> v4(v2);
    //v4=v2=={100,100,100,100,100} 
    //accessing vector members using simple array-like method:-
    cout<<v[0]<<" "<<v[1]<<endl;
    //accessing vector members using iterator(pointer type ka concept lagana):-
    vector<int> v5={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    vector<int>::iterator it;
    it=v5.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it+=2;
    cout<<*it<<endl;
     vector<int>::iterator it=v5.end();
     //vector<int>::iterator it=v5.rend();
     //vector<int>::iterator it=v5.rbegin();

     cout<<v.back()<<endl;
     
     //accessing vector members using loop:-
     //first way:-
    for(vector<int>::iterator it=v5.begin();it!=v5.end();it++){
        cout<<*it<<endl;
    }
    //second way(using auto keyword):-
    for(auto it=v5.begin();it!=v5.end();it++){
        cout<<*it<<endl;
    }
    //third way(using auto keyword):-
    for(auto it:v5){
        cout<<it<<endl;
    }   

    //deletion from a vector:-
    //to erase single elemnts:-
    v5.erase(v5.begin());
    v5.erase(v5.begin()+3);
    //to erase a range of elements(range-[start position,end position)):-
    v5.erase(v5.begin()+6,v5.begin()+10);//erases  {7,8,9,10}

    //insertion in a vector:-
    vector<int> v6(2,100);//{100,100}
    v6.insert(v6.begin(),300);//{300,100,100}   
    v6.insert(v6.begin()+1,2,10);//{300,10,10,100,100}  
    vector<int> copy(2,50);//{50,50}    
    v6.insert(v6.begin()+2,copy.begin(),copy.end());//{300,10,50,50,10,100,100}

    vector<int> v7={1,2,3,4,5}; 
    cout<<v7.size();//5
    cout<<v7.capacity();//5 
    v7.push_back(6);//{1,2,3,4,5,6} 
    v7.pop_back();//{1,2,3,4,5}
    vector<int> v8(2,40);
    v8.swap(v7);//v8={1,2,3,4,5} and v7={40,40}
    v7.clear();//erases the entire vector
    cout<<v7.empty();//returns 1 if vector is empty else returns 0  

    //sorting a vector:-
    vector<int> v9={3,2,5,4,1}; 
    sort(v9.begin(),v9.end());//{1,2,3,4,5} 
    sort(v9.begin(),v9.end(),greater<int>());//{5,4,3,2,1}  
    sort(v9.begin(),v9.end(),less<int>());//{1,2,3,4,5} 
    sort(v9.begin(),v9.end(),[](int a,int b){return a>b;});//{5,4,3,2,1}    
    sort(v9.begin(),v9.end(),[](int a,int b){return a<b;});//{1,2,3,4,5}    
    sort(v9.begin(),v9.end(),[](int a,int b){return a>b;});//{5,4,3,2,1}    
    sort(v9.begin(),v9.end(),[](int a,int b){return a<b;});//{1,2,3,4,5}    
    sort(v9.begin(),v9.end(),[](int a,int b){return a>b;});//{5,4,3,2,1}    
    sort(v9.begin(),v9.end(),[](int a,int b){return a<b;});//{1,2,3,4,5}    
    sort(v9.begin(),v9.end(),[](int a,int b){return a>b;});//{5,4,3,2,1}    
    //and so on.....    
    //sorting a vector of pairs:-   
    vector<pair<int,int>> v10={{1,2},{3,4},{5,6},{7,8},{9,10}}; 
    sort(v10.begin(),v10.end());//sorts according to first element of pair  
    sort(v10.begin(),v10.end(),greater<pair<int,int>>());//sorts according to first element of pair in descending order 
    sort(v10.begin(),v10.end(),less<pair<int,int>>());//sorts according to first element of pair in ascending order 
    sort(v10.begin(),v10.end(),[](pair<int,int> a,pair<int,int> b){return a.first>b.first;});//sorts according to first element of pair in descending order 
    sort(v10.begin(),v10.end(),[](pair<int,int> a,pair<int,int> b){return a.first<b.first;});//sorts according to first element of pair in ascending order  
    sort(v10.begin(),v10.end(),[](pair<int,int> a,pair<int,int> b){return a.second>b.second;});//sorts according to second element of pair in descending order  
    sort(v10.begin(),v10.end(),[](pair<int,int> a,pair<int,int> b){return a.second<b.second;});//sorts according to second element of pair in ascending order   
    sort(v10.begin(),v10.end(),[](pair<int,int> a,pair<int,int> b){return a.first>b.first;});//sorts according to first element of pair in descending order     
    sort(v10.begin(),v10.end(),[](pair<int,int> a,pair<int,int> b){return a.first<b.first;});//sorts according to first element of pair in ascending order  
    //and so on.....

    //sorting a vector of vectors:- 
    vector<vector<int>> v11={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};   
    sort(v11.begin(),v11.end());//sorts according to first element of vector    
    sort(v11.begin(),v11.end(),greater<vector<int>>());//sorts according to first element of vector in descending order 
    sort(v11.begin(),v11.end(),less<vector<int>>());//sorts according to first element of vector in ascending order 
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[0]>b[0];});//sorts according to first element of vector in descending order 
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[0]<b[0];});//sorts according to first element of vector in ascending order  
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[1]>b[1];});//sorts according to second element of vector in descending order    
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[1]<b[1];});//sorts according to second element of vector in ascending order 
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[2]>b[2];});//sorts according to third element of vector in descending order 
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[2]<b[2];});//sorts according to third element of vector in ascending order  
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[0]>b[0];});//sorts according to first element of vector in descending order 
    sort(v11.begin(),v11.end(),[](vector<int> a,vector<int> b){return a[0]<b[0];});//sorts according to first element of vector in ascending order  
    //and so on.....    

    //sorting a vector of strings:- 
    vector<string> v12={"abc","def","ghi","jkl","mno"}; 
    sort(v12.begin(),v12.end());//sorts according to first character of string  
    sort(v12.begin(),v12.end(),greater<string>());//sorts according to first character of string in descending order    
    sort(v12.begin(),v12.end(),less<string>());//sorts according to first character of string in ascending order        
    sort(v12.begin(),v12.end(),[](string a,string b){return a[0]>b[0];});//sorts according to first character of string in descending order 
    sort(v12.begin(),v12.end(),[](string a,string b){return a[0]<b[0];});//sorts according to first character of string in ascending order  
    sort(v12.begin(),v12.end(),[](string a,string b){return a[1]>b[1];});//sorts according to second character of string in descending order    
    sort(v12.begin(),v12.end(),[](string a,string b){return a[1]<b[1];});//sorts according to second character of string in ascending order 
    sort(v12.begin(),v12.end(),[](string a,string b){return a[2]>b[2];});//sorts according to third character of string in descending order 
    sort(v12.begin(),v12.end(),[](string a,string b){return a[2]<b[2];});//sorts according to third character of string in ascending order  
    sort(v12.begin(),v12.end(),[](string a,string b){return a[0]>b[0];});//sorts according to first character of string in descending order 
    sort(v12.begin(),v12.end(),[](string a,string b){return a[0]<b[0];});//sorts according to first character of string in ascending order  
    //and so on.....    

}


