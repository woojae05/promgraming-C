#include<stdio.h>
void Bubblesort(int* arr, int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int arr[5] = { 5,4,3,2,1 };
	Bubblesort(arr, 5);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}
