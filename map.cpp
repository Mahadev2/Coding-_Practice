#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    unordered_map<int,string> m; // Use map<int,string> m if you want sorted by key in asanding order
    m.insert({11,"Parag"});
    m.insert({7,"Vishvitha"});
    m[10] = "Avnish";
    m.insert({7,"Sumit"});
    int a = 10;
    if(m.find(a)!=m.end()){
        cout<<"Yes I am present"<<endl;
        unordered_map<int,string> :: iterator it;
        it = m.find(a);
        
        //auto it = m.find(a);
        
        cout<<"Key is : "<< it->first <<" and Value is : "<<it->second<<endl;
        //cout<<"Key is : "<< m.find(a)->first <<" and Value is : "<<m.find(a)->second<<endl;
    }
    else{
        cout<<"Hey, I am not present :("<<endl;
    }
    
    auto it = m.begin();
    
    for(it; it!=m.end(); it++){
        cout<<"Key : "<<it->first<<" Value : "<<it->second<<endl;
    }
    
    
    
}
