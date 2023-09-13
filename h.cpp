#include<bits/stdc++.h>
using namespace std;
int lumuto(int a[],int l, int r)
{
  int i = l - 1;
  int pivot = a[r];
  for(int j = l; j < r; j++)
  {
    if(a[j] <= pivot){
      i++;
      swap(a[i], a[j]);
    }
  }
  i++;
  swap(a[i], pivot);
  return i;
}
int hoare(int a[], int l, int r)
{
  int pivot = a[l];
  int i = l - 1;
  int j = r + 1;
  while(1)
  {
    do{
      i++;
    } while(a[i] < pivot);
    do{
      j--;
    }while(a[j] > pivot);
    if(i < j) swap(a[i], a[j]);
    else return j;
  }
}
void quickSort(int a[], int l, int r)
{
  if( l >= r) return;
  int p = hoare(a,l,r);
  quickSort(a,l, p);
  quickSort(a, p + 1, r);

}
int main()
{
  srand(time(NULL));
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
  {
    a[i] = rand() % 100;
  }
  quickSort(a, 0, n - 1);
  for(int x : a) cout << x << " ";
  return 0;
}