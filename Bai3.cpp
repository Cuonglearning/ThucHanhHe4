#include<iostream>
using namespace std;
void Them(int a[],int n,int x){
	int b[100];
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			a[i]=b[j];
			b[n]=x;
		}
	}
}

void SapXep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

int main(){
	int a[100],b[100],n,x,i;
	cout<<"Nhap so phan tu mang:";cin>>n;
	for (i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	SapXep(a,n);
	cout<<endl<<"Mang sau khi sap xep:";
	for(i=0;i<n;i++){
		cout<<a[i]<<"	";
	}
	cout<<"So can them:";cin>>x;
	for(i=0;i<=n;i++){
		b[i]=a[i];
		b[n]=x;
	}
	SapXep(b,n+1);
	cout<<endl<<"Mang sau khi sap xep va them "<<x<<":";
	for(i=0;i<n;i++){
		cout<<a[i]<<"	";
	}
}
