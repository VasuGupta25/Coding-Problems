// The Hurdle Race in C++

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, p = 0;
  int arr[100];
  cin >> n >> k;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  sort(arr, arr + n);

  if (arr[n - 1] < k) {
    cout << 0;
  } else {
    p = arr[n - 1] - k;
    cout << p;
  }
  return 0;
}

