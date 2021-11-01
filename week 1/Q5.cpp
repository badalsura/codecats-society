/*Write a program in C to display the number in reverse order

Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321
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
	int no,rev_no=0,temp;
	cin>>no;
	temp=no;
	while(no){
		rev_no*=10;
		rev_no+=no%10;
		no/=10;
	}
	cout<<"Reverse of "<<temp<<" is "<<rev_no;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}