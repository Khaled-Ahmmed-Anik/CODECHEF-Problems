/*
      
    problem: ANUUND
    OJ: CODECHEF
    Problem link: https://www.codechef.com/problems/ANUUND
    Idea: sort the array. Let, firstPart = half part of the arrar  & lastPart = last part of the array .

          Now,continue printing ->  1 element from end of firstPart and 1 element from the beginning of lastPart...

*/
#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n,midIndex, decPoint, inPoint;

    cin>>n;

    midIndex=n/2;
    
    if (!(n&1))midIndex--; // for odd, we seperate the array from index 0 to (midIndex-1).
    
    decPoint=midIndex,inPoint=midIndex+1;

    int arr[n];

    for (auto &x:arr) cin>>x;


    sort(arr, arr+n);

    for(int i=0;i<n;i++){
        if (i&1)cout<<arr[inPoint++]<<" ";
        else cout<<arr[decPoint--]<<" ";
    }

    cout<<"\n";

}

int main() {
    int t = 1;
    cin>>t;
    //test cases
    while (t--)
        solve();
}
