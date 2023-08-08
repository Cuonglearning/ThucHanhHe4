#include<iostream>
#include<math.h>
using namespace std;
bool KiemTraSNT(int n)
{
    if(n<2) return false;
    int sq = sqrt(n);
    for(int i=2;i <=sq ;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
	int a[100],n,i;
	cout<<"Nhap so phan tu trong mang:";cin>>n;
	for(i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
	cout<<"Cac so nguyen to trong mang:";
	for(i=0;i<n;i++){
		if(KiemTraSNT(a[i]))	cout<<a[i]<<"	";
	}
}
  
