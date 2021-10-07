#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
 
// Paradigma: Divide y vencerás
 
lli merge(vector<int>&A, int left, int right, int middle){
	// Iteradores
	int x = left; // Primer subarreglo: left -> mitad
	int z = middle+1; // Segundo subarreglo: mitad+1 -> right
	lli inv = 0;
 
	// Arreglo temporal
	vector<int>temp;
 
	while(x<=middle && z<=right){
		if(A[x]<A[z]){
			temp.push_back(A.at(x));
			x++;
		}else{
			temp.push_back(A.at(z));
			z++;
			inv+=(middle-x+1);
		}
	}
 
	while(x<=middle){
		temp.push_back(A.at(x));
		x++;
	}
 
	while(z<=right){
		temp.push_back(A.at(z));
		z++;
	}
 
	for(int i=left; i<=right; i++){
		A.at(i)=temp.at(i-left);
	}
 
	return inv;
}
 
lli mergeSort(vector<int>&A, int left, int right){
	// Caso base: Un sÃ³lo elemento.
	if(right==left) return 0;
	int middle = (left+right) >> 1;
	lli inv = 0;
	inv+=mergeSort(A,left,middle);
	inv+=mergeSort(A,middle+1,right);
	inv+=merge(A, left, right, middle);
 
	return inv;
}
 
int main(){
	int t=0; cin >> t;
 
	while(t--){
		int num_elements;
		cin >> num_elements;
		vector<int> A(num_elements);
 
		for(int i=0; i<num_elements; i++){
			cin >> A.at(i);
		}
 
		cout << mergeSort(A, 0, num_elements-1) << "\n";
	}
 
  return 0;
}