//write programme to merge 2 arrays find max and min of 2array

#include<iostream>
using namespace std;

int merge(int arr1[], int arr2[], int n, int m){
	int t;
	t = n + m;	//size of merge array
	int merge[t];
	for(int i=0; i<m; i++){ 	
		merge[i] = arr1[i];
	}
	for(int i=m; i<t; i++){
		merge[i] = arr2[i];
	}
}

int main(){ 
	//asking for size of array
	int p, q, i, j;	//n=size
	cout << "Enter size of first array: "<<endl;
	cin >> p;
	int ar1[p];
	
	//save value in array
	cout << "Enter the element of first array: "<<endl;
	for(i=0; i<p; i++){
		cin >> ar1[i];
	}

	cout << "Enter size of secound array: "<<endl;
	cin >> q ;
	int ar2[q];
	
	//save value in array
	cout << "Enter the element of secound array: "<<endl;
	for(j=0; j<q; j++){
		cin >> ar2[j];
	}

	merge(ar1, ar2, p, q);
	cout << merge[0] <<merge[4];
	cout << "Your merge array is: " << endl;
	for(int a=0; a<(p+q); a++){
		cout << merge[a];
	}

return 0;
}

