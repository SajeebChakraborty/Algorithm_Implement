#include<bits/stdc++.h>
using namespace std;
int dfa_array[1005][1005];
int main()
{

    int txt_len,pat_len,i,j,lps=0,c=0;
    string txt,pat;
    cin >> txt >> pat;
    txt_len=txt.size();
    pat_len=pat.size();
    dfa_array[0][pat[0]-'a']=1;
    for(i=1;i<=pat_len;i++){

        for(j=0;j<26;j++){

            dfa_array[i][j]= dfa_array[lps][j];


        }
        if(i<pat_len){

            dfa_array[i][pat[i]-'a']=i+1;
            lps=dfa_array[lps][pat[i]-'a'];


        }



    }
    lps=0;
    for(int i=0;i<txt_len;i++){

        lps=dfa_array[lps][txt[i]-'a'];
        if(lps==pat_len){

            c++;

        }

    }
    cout << c << endl;










}
