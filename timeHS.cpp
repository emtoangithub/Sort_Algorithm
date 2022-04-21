#include<bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int i)
{
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left<n && a[left]>a[largest]) largest = left;
    if (right<n && a[right]>a[largest]) largest = right;

    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }

}

void heapSort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
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

    heapSort(arr1, 10000);
    heapSort(arr2, 10000);
    heapSort(arr3, 10000);
    heapSort(arr4, 10000);
    heapSort(arr5, 10000);
    heapSort(arr6, 10000);
    heapSort(arr7, 10000);
    heapSort(arr8, 10000);
    heapSort(arr9, 10000);
    heapSort(arr10, 10000);
    
    file.close();


    ofstream file1;
    file1.open("Result.txt");


    end = clock();
    double time = (end - start)*1000 / CLOCKS_PER_SEC;
    file1 << "Time: " << time << "ms";
    

    file1.close();
    
    
	return 0;
}