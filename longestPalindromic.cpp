#include<iostream>
#include<string>
using namespace std;
int palindrome(string,int,int);
int main()
{
    string str;
    int len;
    getline(cin,str);
    len = str.length();
    string str1;
    //cout<<len;
    int result = 0;
    for(int i=0;i<len;i++){
        string res1="",res2="";
        int j = i , k = len-1-i;
        while(k>j){
            int result1 = palindrome(str,j,k);
            if(result<=result1)
            {
                result= result1;

            }
            j++;
            k--;
        }
    }
    //cout<<str1;
    //cout<<result;
}
int palindrome(string result,int j,int k){
    int start = j,last = k;
    int flag = 0;
    string cha = "";
    while(last>start)
    {
        if(result[last]==result[start]){
            flag = 1;
            last--;
            start++;
        }
        else{
            flag = 0;
            break;
        }
    }
    if (flag==1)
    {
        cha = result.substr(j,k+1);
        cout<< cha<<"\n";
        return (result.length());
    }
    else{
        cout<<flag;
        return 0;
    }
}
