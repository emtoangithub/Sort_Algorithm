#include<bits/stdc++.h>
using namespace std;
void insertion_Sort(int a[], int n)
{
    int pos, current;
    for (int  i = 1; i < n; i++)
    {
        current = a[i];
        pos = i - 1;
        while (pos >= 0 && a[pos] > current)
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = current;
    }
}
int main()
{
    // ifstream filein;
    // filein.open("INPUT.TXT", ios_base :: in);
    // int n;
    // filein >> n;
    // int tmp;
    // for (int i = 1; i <= n;i++)
    // {
    //     filein >> tmp;
    //     cout<<tmp<<" ";
    // }
    // filein.close();
    int a[]= {5,4,3,2,1,0};
    insertion_Sort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
}