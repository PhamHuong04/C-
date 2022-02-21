#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long kq=-1e9;
		for(int i=0;i<n;i++){
			long long Max=1;
			for(int j=i;j<n;j++){
				Max=Max*a[j];
				kq=max(Max,kq);
			}
		}
		cout<<kq<<endl;
	}
}
