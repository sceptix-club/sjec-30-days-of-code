#include <bits/stdc++.h>
// #define int long long int
#define nl cout << "\n";
#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

/*
    1, 4, 7
    2, 5, 8
    3, 6, 9
*/

void solve(int count) {
    int t, size=3;
    int arr[size];
  for(int i=0; i<size; ++i) {
      cin >> t;
      arr[i] = t;
  }
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr+n);
 
  if(count % 3 == 0) {
      cout << arr[2];nl
  }
 
  if(count % 3 == 1) {
      cout << arr[0];nl
  }
 
  if(count % 3 == 2) {
      cout << arr[1];nl
  }
 
}

int32_t main() {
    IOS;
int t; cin >> t;
int count=0;
while(t--) solve(++count);
return 0;
}