#include<bits/stdc++.h>
using namespace std;
int subset_sum[1005][1005];
int main()
{

    int a[1005],n,sum,i,j;
    cin >> n >> sum;
    for(i=0;i<n;i++){


        cin >> a[i];



    }
    subset_sum[0][0]=1;
    subset_sum[0][a[i]]=1;

    for(i=1;i<n;i++){

        subset_sum[i][0]=1;

        for(j=0;j<=sum;j++){

            if(j<a[i]){

                subset_sum[i][j]=subset_sum[i-1][j];


            }
            else{

                subset_sum[i][j]=subset_sum[i-1][j] | subset_sum[i-1][j-a[i]];


            }



        }


    }
    int store[1005];
    int index=0;
    if(subset_sum[n-1][sum]==0){

        cout << "Impossible" << endl;


    }
    else{


        cout << "Possible and possible combination...." << endl;

        for(int k=n-1;k>=0;k--){


            if(subset_sum[k][sum]==1 && subset_sum[k-1][sum]==0){

                store[index]=a[k];
                sum=sum-a[k];
                index++;

                if(sum<=0){

                    break;

                }

            }

        }

    }
    for(int i=0;i<index;i++){


        cout << store[i] << " ";


    }











}
