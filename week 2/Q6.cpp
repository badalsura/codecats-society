/*C program to find power of a number using for loop.
Test Data :
Input two numbers: 2  4
Expected Output :
2^4  : 16
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
	int no,power;
	cin>>no>>power;
	ull result=1;
	for(int i=0;i<power;i++)result*=no;
	cout<<no<<"^"<<power<<" is "<<result;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}