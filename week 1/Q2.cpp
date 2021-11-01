/*Write a C program to find the maximum between two numbers.

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define PI 3.14
#define vi vector<int> 
#define vll vector<long long>
#define m 1000000007
#define pb push_back
void solve(){
	int num1,num2;
	cin>>num1>>num2;
	cout<<max(num1,num2);
	//alternates
	//cout<<(num1>num2?num1:num2);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}