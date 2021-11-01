/*Write a C program to check whether a given number is an armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
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
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max(a,max(b,c));
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}