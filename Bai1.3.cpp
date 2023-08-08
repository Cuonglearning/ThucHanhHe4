#include<iostream>
using namespace std;

void SapXep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n-1;j++){
			if((a[i]>a[j])&&(a[i]%2==0)&&(a[j]%2==0)){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

int main(){
	int a[100],n,i;
	cout<<"Nhap so phan tu mang:";cin>>n;
	for (i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	cout<<"Mang ban dau:";
	for(i=0;i<n;i++){
		cout<<a[i]<<"	";
	}
	SapXep(a,n);
	cout<<endl<<"Mang sau khi sap xep:";
	for(i=0;i<n;i++){
		cout<<a[i]<<"	";
	}
}
