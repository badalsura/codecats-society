/*Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
[ADDON] : Sum of odd numbers and also even numbers (Use bitwise AND(&) operator in checking  even odd).*/
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
	ull sum=(limit*(limit+1))/2,odd_sum=limit&1?sum/2+1:sum/2,even_sum=limit&1?sum/2:sum/2+1;
	cout<<"Sum of Natural Nos Upto "<<limit<<" is "<<sum;
	cout<<"\nSum of Odd Natural Nos Upto "<<limit<<" is "<<odd_sum;
	cout<<"\nSum of Even Natural Nos Upto "<<limit<<" is "<<even_sum;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}