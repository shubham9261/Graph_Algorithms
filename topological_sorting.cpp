#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define deb(x) cout << #x << " = " << x << endl
#define deb2(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
stack<int>st;
void topological_util(vector<vector<int>> &adj,int n,int m,int curr,stack<int>&st,set<int>&s)
{
     s.insert(curr);
    for(int i=0;i<adj[curr].size();i++)
    {
        if(s.find(adj[curr][i])==s.end())
            topological_util(adj,n,m,adj[curr][i],st,s);
       
    }
    cout<<curr<<" ";
     st.push(curr);
}
 void topological_sort(vector<vector<int>> &adj,int n,int m)
 {
     cout<<" here";
    // stack<int>st;
     set<int>s;
     for(int i=0;i<n;i++)
     {
        if(s.find(i)==s.end())
        {
            topological_util(adj,n,m,i,st,s);
        }
     }
    // return st;
 }
 
 

//It is for directed graph.
void test()
{    // n :vertices m:edges
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>vec(n);

    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
      //  v1--;
      //       v2--;
        vec[v1].push_back(v2);
    } 
    topological_sort(vec,n,m);
    while(!st.empty())
    {
        cout<<st.top()+1<<" ";
        st.pop();
    }
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    //cin >> t;
    while (t--)
    {
      //  test();
    }
    cout<<"helljjjo";
    return 0;
}