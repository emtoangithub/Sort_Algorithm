#include<bits/stdc++.h>
using namespace std; 
void selection_Sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min_index=i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index]) min_index = j;
        }
        swap(a[min_index], a[i]);
    }
}
int main()
{
    cout<<"n: ";
    int n; cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    selection_Sort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
}