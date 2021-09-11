#include<bits/stdc++.h>
using namespace std;

void computeLPSArray(string pat, int M, int* lps); 
 int res; 
 int index;
// Prints occurrences of txt[] in pat[] 
void KMPSearch(string pat, string txt) 
{ 	res=0;
    int M = pat.size(); 
    int N = txt.size(); 
  
   
    int lps[M]; 
    computeLPSArray(pat, M, lps); 
    int i = 0;
    int j = 0; 
    while (i < N) { 
        if (pat[j] == txt[i]) { 
            j++; 
            i++; 
        } 
  
        if (j == M) { 
          //  printf("Found pattern at index %d ", i - j); 
           	index=i-j;
           	return;
		    j = lps[j - 1]; 
        } 
  
         
        else if (i < N && pat[j] != txt[i]) { 
             
            if (j != 0)
			{
			 	if (j>res)
			 	{
				 	res=j;
				 	index=i-j;
			 }
                j = lps[j - 1]; 
        	}
            else
                i = i + 1; 
        } 
    } 
} 
  

void computeLPSArray(string pat, int M, int* lps) 
{ 
    
    int len = 0; 
  
    lps[0] = 0;  
   
    int i = 1; 
    while (i < M) { 
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else 
        { 
             
            if (len != 0) { 
                len = lps[len - 1]; 
  
                // Also, note that we do not increment 
                // i here 
            } 
            else // if (len == 0) 
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 





void fun1()
{	
	index=0;
	res=0;
	int n;
	cin>>n;
	string a;
	string b;
	cin>>a;
	cin>>b;
	
	KMPSearch(a,b+b);
	cout<<index<<endl;
	
}











/*

void fun()
{
	int n;
	cin>>n;
	
	string a;
	string b;
	cin>>a;
	cin>>b;
	int index=0;
	/*
	for (int i=0;i<n;i++)
	{
		 size_t  temp=b.find(a.substr(0,i+1));
		if (temp!=string::npos)
		{
			index=temp;
		}
		else
		{
			break;
		}
	}
	
	
	int low=0;
	int high=n;
	while(low<=high)
	{
		int mid=(low+high)/2;
		size_t  temp=b.find(a.substr(0,mid));
		if(temp!=string::npos)
		{
			index=temp;
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	
	cout<<index<<endl;
}*/

int main()
{

fun1();
	
 return 0;
}

