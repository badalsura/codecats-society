/*Write a C program to check whether a number is even or odd.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI 3.14
#define vi vector<int> 
#define vll vector<long long>
#define m 1000000007
void solve(){
	int no;
	cin>>no;
	cout<<(no&1?"Odd":"Even");
	//alternates
	//cout<<((no^1)<no?"Odd":"Even");
	//cout<<(no%2?"Odd":"Even");
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}