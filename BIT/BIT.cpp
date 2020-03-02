#include<bits/stdc++.h>
using namespace std;
int tree[1005],a[1005],sum;
void update(int tree[],int a[],int i, int value, int n){

    tree[i]=tree[i]+value;
    while(i<=n){

        i=i+(i&-i);
        tree[i]=tree[i]+value;

    }


}
int query(int tree[],int a[],int i,int n){

    sum=tree[i];

    while(i>0){

        i=i-(i&-i);
        sum=sum+tree[i];

    }
    return sum;

}

int main()
{

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){

        cin >> a[i];
        update(tree,a,i,a[i],n);


    }

    for(int i=1;i<=n;i++){

        cout << tree[i] << " ";



    }
    cout << endl;
    int result = query(tree,a,6,n);
    cout << result << endl;
    update(tree,a,3,9,n);
     for(int i=1;i<=n;i++){

        cout << tree[i] << " ";



    }
    cout << endl;
    result = query(tree,a,6,n);
    cout << result << endl;








}
