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
            else if (count ==  8)file >> arr8[i];
            else if (count == 9) file >> arr9[i];
            else if (count == 10) file >> arr10[i];
        }
        count++;
    }

    selection_Sort(arr1, 10000);
    selection_Sort(arr2, 10000);
    selection_Sort(arr3, 10000);
    selection_Sort(arr4, 10000);
    selection_Sort(arr5, 10000);
    selection_Sort(arr6, 10000);
    selection_Sort(arr7, 10000);
    selection_Sort(arr8, 10000);
    selection_Sort(arr9, 10000);
    selection_Sort(arr10, 10000);
    
    file.close();


    ofstream file1;
    file1.open("Result.txt");


    end = clock();
    double time = (end - start)*1000 / CLOCKS_PER_SEC;
    file1 << "Time: " << time << "ms";
    

    file1.close();
    
    
	return 0;
}