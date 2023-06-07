#include<bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

    //Brute FOrce
	pair<int, int> ans;

    int hash[n+1] = {0};

    for(int i=0; i<n; ++i){
        hash[arr[i]]++;
    }

    int r = -1, m = -1;

    for(int i=1; i<=n; ++i){
        if(hash[i] == 2) r=i;
        else if(hash[i] == 0) m=i;

        if(r != -1 && m != -1){
            break;
        }
    }
	ans.first = m;
    ans.second = r;
	return ans;
}


int main(){
    vector<int> vec = {1, 3, 5, 4, 4};
    int n = vec.size();
    pair<int, int> ans = missingAndRepeating(vec, n);
    cout << ans.first << " " << ans.second << endl;
}