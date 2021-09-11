#include<iostream>
#include<bits/stdc++.h>
#include<set>
#include<unordered_map>

using namespace std;
 void fun1(string str1,string str2)
 {
 	set<char> set1;
 	unordered_map<char,int> data;
 	
 	for (int i=0;i<str1.size();i++)
 	{
 		set1.insert(str1[i]);
	 }
	 for (int i=0;i<str2.size();i++)
	 {
	 	if (data.find(str2[i])==data.end())
	 	{
	 		data[str2[i]]=1;
		 }
		else
		{
			data[str2[i]]++;
		}
	 }
	 
	 int count=0;
	 for (auto i=set1.begin();i != set1.end();i++)
	 {
	 	if (data.find(*i)!=data.end())
	 	{
	 		count+=data[*i];
		 }
	 }
	 cout<<count<<endl;
	 return;
 }

int main()
{
	int test_case;
	cin>>test_case;
	string str1;
	string str2;
	
	for (int i=0;i<test_case;i++)
	{
		cin>>str1;
		cin>>str2;
		
		fun1(str1,str2);
	}
	return 0;
}
