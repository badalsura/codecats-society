/*https://www.codechef.com/problems/FCTRL*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI 3.14
#define vi vector<int> 
#define vll vector<long long>
#define m 1000000007
void solve(){
	int limit;
	cin>>limit;
	ull zero_count=0;
	for(int i=5;i<limit;i*=5)zero_count+=limit/i;
	cout<<"No of zeroes in end of factorial of "<<limit<<" are "<<zero_count;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}