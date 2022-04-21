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
    clock_t start, end;
    start = clock();

    ifstream file;
    file.open("Test.txt");


    int arr1[10000], arr2[10000],arr3[10000], arr4[10000], arr5[10000];
    int arr6[10000], arr7[10000], arr8[10000], arr9[10000], arr10[10000];

    int count = 1;
    while (count <= 10)
    {
        for (int i = 0; i < 10000; i++)
        {
            if (count == 1) file >> arr1[i];
            else if (count == 2) file >> arr2[i];
            else if (count == 3) file >> arr3[i];
            else if (count == 4) file >> arr4[i];
            else if (count == 5) file >> arr5[i];
            else if (count == 6) file >> arr6[i];
            else if (count == 7) file >> arr7[i];
            else if (count == 8) file >> arr8[i];
            else if (count == 9) file >> arr9[i];
            else if (count == 10) file >> arr10[i];
        }
        count++;
    }

    insertion_Sort(arr1, 10000);
    insertion_Sort(arr2, 10000);
    insertion_Sort(arr3, 10000);
    insertion_Sort(arr4, 10000);
    insertion_Sort(arr5, 10000);
    insertion_Sort(arr6, 10000);
    insertion_Sort(arr7, 10000);
    insertion_Sort(arr8, 10000);
    insertion_Sort(arr9, 10000);
    insertion_Sort(arr10, 10000);
    
    file.close();


    ofstream file1;
    file1.open("Result.txt");


    end = clock();
    double time = (end - start)*1000 / CLOCKS_PER_SEC;
    file1 << "Time: " << time << "ms";
    

    file1.close();
    
    
	return 0;
}