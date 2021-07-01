
#include <iostream>
#include <vector>
using namespace std;
 

void  printLIS(vector<int>& arr)
{    int sum=0;
    for (int x : arr)
        sum+=x;
     cout<<sum<<endl;   

}
 

void  constructPrintLIS(int arr[], int n)
{
    vector<vector<int> > L(n);
 
    
    L[0].push_back(arr[0]);
 
    for (int i = 1; i < n; i++)
    {
        
        for (int j = 0; j < i; j++)
        {
            if ((arr[i] >= arr[j]) &&
                    (L[i].size() < L[j].size() + 1))
                L[i] = L[j];
        }
 
        L[i].push_back(arr[i]);
    }

    vector<int> max = L[0];

    
    for (vector<int> x : L)
        if (x.size() > max.size())
            max = x;
            
    printLIS(max);
}
 
// Driver function
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    constructPrintLIS(arr, n);
 
    return 0;
}
