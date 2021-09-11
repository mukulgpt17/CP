#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define Loop(i,a,b) for (int i=a;i<b;i++)


using namespace std;
void fun()
{
	int n ;
	cin>>n;
	vector<int> vec;
	 map<int,int,greater<int> > mp ;
	int temp;
	for (int i=0;i<2*n;i++)
	{
		cin>>temp;
		vec.pb(temp);
//		if (mp.find(temp)==mp.end())
//			mp[temp]=1;
//		else mp[temp]++;
	}
	sort(vec.begin(),vec.end());
//	mp[vec[vec.size()-1]]--;
//	if (mp[vec[vec.size()-1]]==0) mp.erase(vec[vec.size()-1]);
//
//	for (auto i=mp.begin();i!=mp.end();i++)
//	{cout<<i->first<<" "<<i->second<<endl;
//	}
//		
	
	int x=vec[vec.size()-1];
	for (int i=0;i<vec.size()-1;i++)
	{	
		//cout<<vec[i]<<endl;
		mp.clear();
		for (int j=0;j<vec.size()-1;j++)
		{
			if (i!=j)
			{	if (mp.find(vec[j])==mp.end())
				mp[vec[j]]=1;
				else
				mp[vec[j]]++;
			}
		}
		
		
		vector<pair<int,int>> pr;
		int flag=1;
//		cout<< vec[vec.size()-1]<<" "<<vec[i]<<endl;
//		cout<< <<endl;
		int sum=vec[vec.size()-1]+vec[i];
	
		x=vec[vec.size()-1];
	
		pr.pb({vec[vec.size()-1],vec[i]});
	
//		for (auto k=mp.begin();k!=mp.end();k++)
//		cout<<k->first<<" ";
//		cout<<endl;
		while (mp.size())
		{
			int a=(mp.begin())->first;
			if (mp.find(x-a)!=mp.end())
			{	
				int b=x-a;
				mp[x-a]--;
				mp[a]--;
				pr.pb({a,b});
				x=a;
				if (mp[b]==0)
				mp.erase(b);
				if(mp[a]==0)
				mp.erase(a);
//				cout<<a<<" "<<b<<endl;
			}
			else
			{
				flag=0;
				break;
			}
		}		
		
		if (flag==1)
		{	cout<<"YES"<<endl;
			cout<<sum<<endl;
			for (int k=0;k<pr.size();k++)
			{
				cout<<pr[k].first<<" "<<pr[k].second<<endl;
			}	
			return ;
		}
			
		
	//	cout<<"-----------------"<<endl;
		
	}
	cout<<"NO"<<endl;
	

}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	 fun();
	}
 return 0;
}

