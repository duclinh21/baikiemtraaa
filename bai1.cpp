#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    while(n--){
	string s;
	cin >> s;
	if(s.size() % 2 != 0){
		cout << "false";
	} 
	else if(s[0] == '}' || s[0] == ']' || s[0] == ')' || s[s.size() - 1] == '(' ||s[s.size() - 1] == '[' || s[s.size() - 1] == '{'){
		cout << "false";
	} 
	else{
		string b = {};
		string a = {};
		int mid = s.size() / 2 - 1;
		for(int i = 0; i <= mid ; i ++){
			a += s[i];
		}
		for(int i = s.size() - 1; i > mid; i --){
			if(s[i] == ')'){
				s[i] = '(';
				b += s[i];
			}
			else if(s[i] == '}'){
				s[i] = '{';
				b += s[i];
			}
			else if(s[i] == ']'){
				s[i] = '[';
				b += s[i];
			}
		}
	//	reverse(b.begin(), b.end());
	//	cout << a << " " << b;
		if(a == b){
			cout << "true";
		}
		else cout << "false";
	}
}
    return 0;
}