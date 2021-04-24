/******************************************************************************

                         بسم الله الرحمن الرحيم
                     Author: Mst: Mhamuda Khatun
                               RUCSE27

*******************************************************************************/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define OrderSetTree tree<ll,null_type/*mapped_type*/,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define pi 2*acos(0.0)
#define f first
#define s second
#define pb push_back
#define gap ' '
#define yes cout<<"YES"
#define no cout<<"NO"
#define all(v) v.begin(),v.end()
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mod 1000000007
#define MAX 1000000000000
#define N 305

int main()
{
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //OrderSetTree ost;

    ll i,j,t,n,p,k,c,pos,start;
    string s,T_shirt_sizes[5]={"S","M","L","XL","XXL"};
    bool flag;
    vector<ll>v(5);

    for(i=0;i<5;i++)
         cin>>v[i];

    cin>>n;

    for(c=0;c<n;c++)
    {
        cin>>s;
        flag=false;

        if(s=="S")
            start=0;
        else if(s=="M")
            start=1;
        else if(s=="L")
             start=2;
        else if(s=="XL")
             start=3;
        else
            start=4;

        for(i=0; ;i++)
        {
            if(start+i==5 || start-i<0)
                break;
            if(v[i+start])
            {
                pos=i+start;
                v[pos]--;
                flag=true;
                break;
            }
            else if(v[start-i])
            {
                pos=start-i;
                v[pos]--;
                flag=true;
                break;
            }
        }

        if(!flag && i+start==5)
        {
                for(j=start-i;j>=0;j--)
                {
                    if(v[j])
                    {
                        pos=j;
                        v[j]--;
                        break;
                    }
                }
        }
        else if(!flag && start-i<0)
        {
            for(j=i+start;j<5;j++)
            {
                if(v[j])
                {
                    pos=j;
                    v[j]--;
                    break;
                 }
            }
         }
        cout<<T_shirt_sizes[pos];
        cout<<"\n";
    }
    return 0;   //:D
}


