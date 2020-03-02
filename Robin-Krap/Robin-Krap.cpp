#include<bits/stdc++.h>
using namespace std;
int main()
{

    int txt_len,pat_len,i,j,sum,txt_hash[1005],pat_hash,a,x,c=0;
    string txt,pat;
    cin >> txt >> pat;
    txt_len=txt.size();
    pat_len=pat.size();
    sum=0;
    for(i=0;i<pat_len;i++){

        a = pat[i] - 'a';
        a++;
        x=pow(3,i);
        x=x*a;
        sum=sum+x;

    }
    pat_hash=sum;
    sum=0;
    txt[0]=0;
    for(i=0;i<txt_len;i++){

        a = txt[i] - 'a';
        a++;
        x=pow(3,i);
        x=x*a;
        sum=sum+x;
        txt_hash[i+1]=sum;

    }
    for(i=pat_len,j=0;i<=txt_len;i++,j++){

        x=txt_hash[i]-txt_hash[j];
        if(pat_hash*pow(3,j)==x){

            c++;



        }



    }

    cout << c << endl;







}
