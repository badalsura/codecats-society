/*Write a C program to input any character and check whether it is alphabet, digit or special character.
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
	char character;
	cin>>character;
	if((character>64&&character<91)||(character>96&&character<123))cout<<"Alphabet";
	else if(character>47&&character<58)cout<<"Numeric";
	else cout<<"Special Character";
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
	return 0;
}