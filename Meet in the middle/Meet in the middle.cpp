#include<bits/stdc++.h>
using namespace std;
int main()
{

    int store[1005],store1[1005],store2[1005],i,j,n,a[1005],temp,k,sum1,sum2,result;

    cin >> n;
    cin >> result;
    for(i=0;i<n;i++){

        cin >> a[i];


    }
    for(i=0;i<pow(2,n/2);i++){
        j=i;
        sum1=0;
        k=0;
        while(j>0){

            temp=j%2;
            if(temp==1){

                sum1=sum1+a[k];

            }
            j=j/2;
            k++;


        }
        store1[i]=sum1;


    }
    for(i=0;i<pow(2,n/2);i++){
        j=i;
        sum2=0;
        k=n/2;
        while(j>0){

            temp=j%2;
            if(temp==1){

                sum2=sum2+a[k];

            }
            j=j/2;
            k++;


        }
        store2[i]=sum2;


    }


    for(i=0;i<pow(2,n/2);i++){

        for(j=0;j<pow(2,n/2);j++){

            store[i]=store1[i]+store2[j];
            cout << store[i] << endl;



        }


    }







}

