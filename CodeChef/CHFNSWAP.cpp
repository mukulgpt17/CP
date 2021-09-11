#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false); cin.tie(0)
using namespace std; 





int main()
{   boost;
    int t;
    cin>>t;
    
    
    while(t--)
    {
    	unsigned long long int  n;
        cin>>n;
        if (((n*(n+1))/2)%2==0)
        {	
        	unsigned long long int sum=(n*(n+1))/4;
        	unsigned long long int count=0;
 		
			unsigned long long int high=n;
			unsigned long long int low=1;
			unsigned long long int temp1;
			
			while(low<high)
			{
				unsigned long long int mid=(high+low)/2;
				
				unsigned long long int ans=((mid+1)*(mid+1+1))/2;
				unsigned long long int ans1=((mid)*(mid+1))/2;
				
				if (ans1==sum)
				{
					temp1=mid;
					break;
				}
			else 	if (ans1>sum)
				{
					high=mid;
				}
				
			else
			{
				if (ans>=sum)
				{
					temp1=mid+1;
					break;
				}
				else
				{
					low=mid;
				}
			}
							
			}
			
			
			low=1;
			high=temp1;
			
			unsigned long long int temp2;
			while (low<high)
			{
				unsigned long long int mid=(high+low)/2;
				
				unsigned long long int ans=sum-(mid*(mid+1))/2;
				unsigned long long int ans1=sum-((mid+1)*(mid+2))/2;
				if (ans==(n-1))
				{
					temp2=mid;
					break;
				}
				else if (ans>=n)
				{
					if (ans1<=n-1)
					{
						temp2=mid+1;
						break;
					}
					else
					{
						low=mid;
					}
				}
				else
				{
					high=mid;
				}
			}
	//		cout<<temp2<<" "<<temp1<<endl;
		for (unsigned long long int i=temp2;i<=temp1;i++)
        {
            unsigned  long long int Si=(i*(i+1))/2;
           // cout<<Si<<endl;
           if (Si==sum)
            {
                count+=((i*(i-1))/2 + ((n-i)*(n-i-1))/2);
            }
            
            else  if (Si<sum && (sum-Si<n) ) 
            {   
                unsigned long long int mini =(sum-Si)+1;
                unsigned long long int maxi= (sum-Si)+i;
                if (mini<=n && maxi>=i+1)
                {
                    count+=(min(n,maxi)-max(mini,i+1)+1);
                }
            }
            else if (Si>sum)
            {
                break;
            }	        	
        }
        cout<<count<<endl;
        }
        else 
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
