#include<iostream>

using namespace std;

int main(){

  cout << "\nEnter the size of the array: ";
  int n; cin >> n;
  int arr[n];
  cout << "\nEnter the array elements: ";
  for(int i=0;i<n;i++) cin >> arr[i];
  int target;
  cout << "\nEnter the target element: ";
  int start = 0, end = n-1, mid, ans = -1;
  
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid] == target) break;
    else if(arr[mid] > target) end = mid - 1;
    else start = mid + 1;
  }
  
  cout << ans << "\n";
  
return 0;
}
