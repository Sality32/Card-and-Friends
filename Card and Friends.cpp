#include<iostream>

using namespace std;
int main(){
	int t,w,h,n,i=1;
	
	cin >> t;
	while(t>0){
		cin >> w >> h >> n;
		while(w%2==0 || h%2 == 0){
			if(w%2==0){
				w=w/2;
				i=i*2;
			}
			if(h%2==0){
				h=h/2;
				i=i*2;
			}
		}
		if(i>=n){
			cout << "YES\n" ;
		} else {
			cout << "NO\n";
		}
		i=1;
		t--;
	}
}
