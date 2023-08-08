#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void SapXep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

int main(){
	int a[100],n,i;
	srand(time(NULL));
	cout<<"Nhap so phan tu mang:";cin>>n;
	for(i=0;i<n;i++){
		a[i]=rand()%100+0;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<"	";
	}
	SapXep(a,n);
	cout<<endl<<"Ham sau khi sap xep la:"<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<"	";	
	}
}
