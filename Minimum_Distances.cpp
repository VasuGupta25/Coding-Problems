#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
  int k, num;
  int temp = 0;
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        k = j - i;
        if (temp == 0)
          num = k;
        temp = 1;
      }
    }
    if (num > k) {
      num = k;
    }
  }
  if (temp == 0)
    cout << "-1";
  else
    cout << num;
}
