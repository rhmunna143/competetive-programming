#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        for(int i=0;i<word.length() - 5 ;i++)
        {
            if((word[i]=='E'|| word[i]=='e') && (word[i+1]=='G'||word[i]=='g') && (word[i+2]=='Y'||word[i]=='y') && (word[i+3]=='P'||word[i]=='p') && (word[i+4]=='T'||word[i]=='e'))
            {
                cnt++;
                i+=4;
            }
        }
       
        
    }
     cout<<cnt<<endl;

    return 0;
}