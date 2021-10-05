#include <bits/stdc++.h>
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
using namespace std;

void swap(int a[],int i,int j){
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int l,int r){
    int pivot = a[r];
    int i=l-1;
    int j=l;
    while(j<r){
        if(a[j]<pivot){
            i++;
            swap(a,i,j);
        }
        j++;
    }
    swap(a,i+1,r);
    return i+1;
}

void quickSort(int a[],int l,int r){
    if(l<r){
        int p = partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}


int main() {
	FAST1;
	FAST2;
	int v[] = {17,2,41,54,1};
	quickSort(v,0,4);
	for(int i=0;i<=4;i++){
	    cout<<v[i]<<"  ";
	}
	return 0;
}
