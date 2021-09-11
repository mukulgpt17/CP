#include<bits/stdc++.h>
using namespace std;


vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    
     
    deque<int> dq;
    vector<int> ans;
    for (int i=0;i<k;i++)
    {
        
        while (dq.empty()!=true && arr[dq.back()]<arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    
    for (int i=k;i<n;i++)
    {
        while(dq.empty()!=true && i-dq.front()>=k)
        {
            dq.pop_front();
        }
        while (dq.empty()!=true && arr[dq.back()]<arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }
    return ans;
}






int main()
{
	
	int arr[]={1,2,3,1,4,5,2,3,6};
	vector<int> ss=max_of_subarrays(arr,9,3);
	
	for (auto i:ss)
	cout<<i<<" ";
	
	return 0;
}
