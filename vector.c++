
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Hello World";
    
    vector<vector<int>>a(3,vector<int>(5,0));
    
    int s = a[0].size();
    
    cout<<s<<endl;
    
    for(int i=0;i<a[0].size();i++)
    {
        cout<<a[0][0]<<endl;
    }
    
    
    
    
    vector<int> value;
    
    value.push_back(45);
    value.push_back(55);
    value.push_back(65);
    
    int size = value.size();
    
    cout<<size;
    
    value.insert(value.begin(),78);
    
    value.insert(value.begin()+3,99);
    
    
    for(int i=0;i<value.size();i++)
    {
        cout<<"value=" <<value[i]<<endl;
    }
    
    cout<<"after deleting elements from array"<<endl;
    value.erase(value.begin());
     for(int i=0;i<value.size();i++)
    {
        cout<<"value=" <<value[i]<<endl;
    }
    
    value.erase(value.begin(),value.end());
    
    int totalsize = value.size();
    
    cout<<totalsize;
    
    
    
    //initailizing vector 
    
    
    vector<int> newone = {10,20,30,40,50};
    
    for(int f = 0;f<newone.size();f++)
    {
        cout<<newone[f]<<endl;
    }
    
    //sorting elements in vector
    
    cout<<"sort the elements in vector";
    sort(newone.begin(),newone.end());
    
     for(int f = 0;f<newone.size();f++)
    {
        cout<<newone[f]<<endl;
    }
    
    

    return 0;
}
