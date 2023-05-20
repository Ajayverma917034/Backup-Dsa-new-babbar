#include <bits/stdc++.h>
using namespace std;

bool isAlpha(char ch)
{
    if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)
        return true;
    return false;
}

string find(string s){
    int i =0, j = s.length()-1;
    while(i<=j){
        while (!isAlpha(s[i]) && i<=j)
        {
            i++;
        }
        while (!isAlpha(s[j]) && i<=j)
        {
            j--;
        }
        if(i<=j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
        
    }
}

int main()
{

    return 0;
}