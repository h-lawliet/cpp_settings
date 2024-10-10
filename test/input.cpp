#include <iostream>
using namespace std;

int main() {
  int n, sum;
  cin >> n;
  int num[n];
  for (int i=0; i<n; i++) {
    scanf("%1d", &num[i]);
  }
  for (int i=0; i<sizeof(num)/sizeof(int); i++) {
    sum += num[i];
  }
  cout << sum << endl;
}