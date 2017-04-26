#include <iostream>

using namespace std;

template <typename T>
T* selectionSort(T arr[], int n){

	for(int i = 0; i < n; i ++){

		int minIndex = i;
		for(int j = i + 1; j < n; j ++)
			if(arr[j] < arr[minIndex])
				minIndex = j;

		swap(arr[i], arr[minIndex]);
	}

	return arr;
}




#include <iostream>

using namespace std;

template <typename T>
T* selectionSort(T arr[], int n){

	for(int i = 0; i < n; i ++){

		minIndex = i;
		for(int j = i + 1; j < n; j ++)
			if(arr[j] < arr[minIndex])
				minIndex = j;
		swap(arr[i], arr[minIndex]);
	}

	return arr;
}