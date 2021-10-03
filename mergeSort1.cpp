#include <bits/stdc++.h>
#define ll long long
using namespace std;

void merge(int a[],int l,int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int a1[n1];
    int a2[n2];
    int j=0;
    for(int i=l;i<=m;i++){
        a1[j]=a[i];
        j++;
    }
    j=0;
    for(int i=m+1;i<=r;i++){
        a2[j]=a[i];
        j++;
    }
    int i=0;
    j=0;
    int s=l;
    while(i<n1 and n2<j){
        if(a1[i]<a2[j]){
            a[s]=a1[i];
            i++;
            s++;
        }else{
            a[s]=a2[j];
            j++;
            s++;
        }
    }
    while(i<n1){
        a[s]=a1[i];
        i++;
        s++;
    }
    while(j<n2){
        a[s]=a2[j];
        j++;
        s++;
    }
}

void mergeSort(int a[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int v[] = {17,2,41,54,1};
    mergeSort(v,0,4);
	for(int i=0;i<=4;i++){
	    cout<<v[i]<<"  ";
	}
	return 0;
}
