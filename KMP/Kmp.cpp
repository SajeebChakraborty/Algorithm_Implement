#include<bits/stdc++.h>
using namespace std;
int lps[1005];
int main()
{
    int i,j=0,txt_len,pat_len;
    string txt,pat;
    cin >> txt >> pat;
    txt_len=txt.size();
    pat_len=pat.size();
    for(i=1;i<pat_len;){

        if(pat[i]==pat[j]){

            j++;
            lps[i]=j;
            i++;

        }
        else{

            if(j==0){

                lps[i]=0;
                i++;


            }
            else{

                j=lps[j-1];

            }



        }

    }
    j=0;
    int c=0;
    for(i=0;i<txt_len;){

        if(txt[i]==pat[j]){

            j++;
            if(j==pat_len){

                c++;

            }
            //lps[i]=j;
            i++;

        }
        else{

            if(j==0){

                //lps[i]=0;
                i++;


            }
            else{

                j=lps[j-1];

            }



        }


    }

    cout << c << endl;




}
