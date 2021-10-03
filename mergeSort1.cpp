#include <bits/stdc++.h>
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
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
	FAST1;
	FAST2;
	int v[] = {17,2,41,54,1};
// 	for(int i=0;i<v.size()-1;i++){
// 	    int idx=i;
// 	    int m = v[i];
// 	    for(int j=i+1;j<v.size();j++){
// 	        if(v[idx]>v[j]){
// 	            idx = j;
// 	        }
// 	    }
// 	    int t = v[idx];
// 	    v[idx] = v[i];
// 	    v[i] = t;
// 	}
// 	for(int i=1;i<v.size();i++){
// 	    int j=i-1;
// 	    int c=v[i];
// 	    while(c<v[j] and j>=0){
// 	        v[j+1]=v[j];
// 	        j--;
// 	    }
// 	    v[j+1]=c;
// 	}
    mergeSort(v,0,4);
	for(int i=0;i<=4;i++){
	    cout<<v[i]<<"  ";
	}
	return 0;
}
