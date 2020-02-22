#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int returnsumofpath(int a,int b,vector<vector<int>>V)
{
    long int sum1=V[a][2],sum2=V[b][2];
    int i,j;
    i=V[a][0],j=V[b][0];
    if(i==(b+1)||j==(a+1))
        return sum1+sum2;
    vector<int> V1,V2;
    V1.push_back(sum1);
    while(i!=0)
    {    
        V1.push_back(V[i-1][2]);
        sum1+=V[i-1][2];
        i=V[i-1][0];
    }
    V2.push_back(sum2);
    while(j!=0)
    {   
        V2.push_back(V[j-1][2]);
        sum2+=V[j-1][2];
        j=V[j-1][0];
    }
    int common=0;
    long int sum=sum1+sum2;
    std::vector<int>::reverse_iterator it1,it2;
    for(it1=V1.rbegin(),it2=V2.rbegin();it1!=V1.rend()&&it2!=V2.rend();++it1,++it2)
    {
        if(*it1==*it2)
        {
            common=*it1;
            sum=sum-(2*common);
        }
        else
            break;
    }
    sum=sum+common;
    return sum;
}

int main() {
    int n,x;
    cin>>n>>x;
    vector<vector<int>> V;
    int a;
    while(n--)
    {   vector<int> P;
        int j=3;
        while(j--)
        {
            cin>>a;
            P.push_back(a);
        }
        V.push_back(P);
    }
    long int finalsum=0;
    for(int i=0;i<V.size();i++)
    {
        int w1=V[i][2];
        for(int j=i+1;j<V.size();j++)
        {   
            int w2=V[j][2];
            if(w1+w2==x)
            {   long int k=returnsumofpath(i,j,V);
                if(finalsum==0)
                    finalsum=k;
                else
                    if(finalsum>k)
                        finalsum=k;
            }
        }
    }
    if(finalsum)
        cout<<finalsum<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
