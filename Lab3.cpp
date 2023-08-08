#include<iostream>
using namespace std;
float TongDuong(int a[],int n){
	float S=0.00,t=0.00;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			S=S+a[i];
			t++;
		}
	}
	float kq=(S/t);
	return kq;
}

float TongAm(int a[],int n){
	float S=0.00,t=0.00;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			S=S+a[i];
			t++;
		}
	}
	float kq=(S/t);
	return kq;
}

int main(){
	int a[100],n;
	cout<<"Nhap so phan tu mang:";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	cout<<"Tong cac so duong trong mang:"<<TongDuong(a,n)<<endl;
	cout<<"Tong cac so am trong mang:"<<TongAm(a,n);
}




