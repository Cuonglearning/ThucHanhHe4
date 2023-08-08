#include<iostream>
using namespace std;
int XuatHien(int a[],int n,int x){
	int S=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			S++;
		}
	}
	return S;
}

int main(){
	int a[100],n,x;
	cout<<"Nhap so phan tu mang:";cin>>n;
	for (int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	cout<<"Nhap so can tim:";cin>>x;
	if(XuatHien(a,n,x)==0)
		cout<<"So "<<x<<" khong co trong mang.";
	cout<<"So "<<x<<" xuat hien trong mang "<<XuatHien(a,n,x)<<" lan.";
}
