#include<bits/stdc++.h> 
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std;


int main()
{
    boost;
    int t;
    cin>>t;
  //  int speed[6]={0};
  //  int speed1[6]={0};
    while (t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        int count[n];
        
        for (int i=0;i<n;i++)
        {   int temp=1;
            int temp1=INT_MIN;
            int temp2=arr[i];
            for (int j=0;j<n;j++)
            {
                if (j<i)
                {
                    if (arr[j]>arr[i])
                    {
                        temp++;
                        temp1=max(temp1,arr[j]);
                    }
                    
                }
                else if (j>i)
                {
                    if (arr[j]<arr[i])
                    {	temp2=min(temp2,arr[j]);
                        temp++;
                    }
                    else 
                    {
                        if (temp1>arr[j])
                        {
                            temp++;
                        }
                    }
                }
            }
            for (int j=0;j<n;j++)
            {
            	if (j<i)
            	{
            		if (arr[j]<arr[i])
            		{
            			if (arr[j]>temp2)
            				temp++;
					}
				}
			}
            count[i]=temp;
        }
        
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        for (int i=0;i<n;i++)
        {
            if (count[i]<mini)
            {
                mini=count[i];
            }
            if (count[i]>maxi)
            {
                maxi=count[i];
            }
        }
        
        cout<<mini<<" "<<maxi<<endl;
    }
    
    
    return 0;
}
