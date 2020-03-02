#include<bits/stdc++.h>
using namespace std;
int main()
{

    int store[1005],i,j,n,a[1005],temp,k,sum,result;

    cin >> n;
    cin >> result;
    for(i=0;i<n;i++){

        cin >> a[i];


    }
    for(i=0;i<pow(2,n);i++){
        j=i;
        sum=0;
        k=0;
        while(j>0){

            temp=j%2;
            if(temp==1){

                sum=sum+a[k];

            }
            j=j/2;
            k++;


        }
        store[i]=sum;


    }

    for(i=0;i<pow(2,n);i++){

        cout << store[i] << endl;


    }

    for(i=0;i<pow(2,n);i++){

        if(store[i]==result){

            cout << "Possible" << endl;
            break;

        }




    }






}
