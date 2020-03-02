#include<bits/stdc++.h>
using namespace std;
int tree[1005],arr[1005];
void construct(int node,int b,int e){

    if(b==e){

        tree[node]=arr[b];
        return;

    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    construct(left,b,mid);
    construct(right,mid+1,e);
    tree[node]=tree[left]+tree[right];

}
int query(int node,int b,int e,int i,int j){

    if(i>e || j<b){

       return 0;

    }
    if(i<=b && j>=e){

        return tree[node];

    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2= query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int i,int value){

    if(i>e || i<b){

       return;

    }
    if(b==i && e==i){

       tree[node]=value;
       return;

    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node]=tree[left]+tree[right];

}

int main()
{

    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    construct(1, 1, n);

    cout << query(1, 1, n, 4, 6) << endl;
    update(1, 1, n, 2, 7);
    cout << query(1, 1, n, 2, 4) << endl;
    return 0;









}
