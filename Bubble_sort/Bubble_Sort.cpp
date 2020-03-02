#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,a[1005],n,temp;
    cin >> n;
    for(i=0;i<n;i++){

        cin >> a[i];


    }
    for(i=0;i<n;i++){

        for(j=i;j<n;j++){

            if(a[i]>a[j]){

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;



            }


        }


    }
    for(i=0;i<n;i++){

        cout << a[i] << " ";


    }











}
