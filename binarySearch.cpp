#include<iostream>

using namespace std;

int main(){

  cout << "\nEnter the size of the array: ";
  int n; cin >> n;
  int arr[n];
  cout << "\nEnter the array elements in ascending order: ";
  for(int i=0;i<n;i++) cin >> arr[i];
  int target;
  
  cout << "\nEnter the target element: ";
  cin >> target;
  int start = 0, end = n-1, mid, ans = -1;
  
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid] == target){
      ans = mid;
      break;
    }
    else if(arr[mid] > target) end = mid - 1;
    else start = mid + 1;
  }
  
  if(ans!=-1){
    cout << "\nTarget element is present at "<<ans<<" index in array\n";
  }
  else cout << "\nTarget element is not present in the array\n";
  
return 0;
}
