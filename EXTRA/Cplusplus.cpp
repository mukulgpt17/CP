#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b? b : a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define mp make_pair

int global_var=5;

void globalVar()
{
	int global_var=4;
	// here global_var is global and theres also local var of same name 
	// precedent to local var is given first
	cout<<"local var "<<global_var<<endl;

	// to access the global var with same name as local var use scope resolution 

	cout<<"global var "<<::global_var<<endl;
}

class Base
{
	public:
		 virtual ~Base() {} // dont know why virtual is used (worked for polymorphism)
		 // reason: Making base class destructor virtual guarantees 
		 // that the object of derived class is destructed properly, i.e., 
		 // both base class and derived class destructors are called.


		void printof()
		{cout<<"base class"<<endl;}
};

class Dervied:public Base
{
	public:
		void printof()
		{cout<<"derived class "<<endl;}

};

void explicitCasting()
{

	int number=(int)'a';  // forceful conversion 
	// static cast operator 
	int number2=static_cast<int>('a');
	cout<<"static cast "<<number<<" "<<number2<<endl;

	// dynamic cast operator 
	// used for : polymorphism (Dervied class can be stored in base class refrence/pointer)

	Base *b=new Dervied();

	Dervied *d=dynamic_cast<Dervied *>(b);

	cout<<"base refrence and derived object -> ";b->printof();
	cout<<"dyamic cast -> ";d->printof();

}

int sumi()
{
	return 0;
}

template<typename T,typename... Args> 
auto sumi(T s,Args... args)
{
	return s+sumi(args...);	
}


void extra()
{
ll temp=1ll*(1e14);
int temp1=(int)1e8;
// long temp2=1l*(1e11);
int te1=__builtin_ffs(temp1);
// long te2=__builtin_ffsl(temp2);
ll te=__builtin_ffsll(temp); // gives index(1-based) of least set bit 
							 // add ll for long long 

cout<<__builtin_clz(8)<<endl; // 32-3 (8 -> 1000) -> unset bits on right side
cout<<__builtin_ctz(8)<<endl; // unset bits on left side 
cout<<__builtin_popcount(8)<<endl; // single set bit 

auto ans=sumi(1.1,2,3,4.6,5.8);
cout<<"totol_sum "<<ans<<endl;

}


void set_map()
{

	vector<int> ve{1,2,3,4,4,4,5};

	// diffferent types of declaration of set : 
	set<int> s1={ve.begin(),ve.end()};
	
	set<int> s2;
	s2.insert(3);
	s2.insert(5);

	set<int> s3={1,1,1,1,3,4,3,4,5};
	
	for(auto i:s1)
		cout<<i<<" ";
	cout<<endl;

	for(auto i:s2)
		cout<<i<<" ";
	cout<<endl;

	for(auto i:s3)
		cout<<i<<" ";
	cout<<endl;


	// insert -> overloaded function 

	set<int> s4;
	auto temp=s4.insert(6); // return pair <iterator,bool>
		
	cout<<*temp<<endl;


	// search in the set 

	int ct=s1.count(3); // either return 1 or 0 in set logn 
	cout<<"count "<<ct<<endl;

	auto itr=s1.find(0); // logn
	auto itr1=lower_bound(s1.begin(),s1.end(),4);
	auto itr2=upper_bound(s1.begin(),s1.end(),4);


	// deletes 

	auto itr=s3.erase(s3.begin()) ; // O(1) -> is passing iterator ; return itr 

	int  del_ct=s3.erase(4); // log n -> return count of key deleted (in set 0 or 1 )


	









}


main() {
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);


	// globalVar();
	
	// explicitCasting();
	
	// extra();

	set_map();
return 0;
}
