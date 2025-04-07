#include <iostream>
 using namespace std;
 
 int findSmallest(int arr[], int size) {
     int minNumber = arr[0]; 
 
     for (int i = 1; i < size; i++) {
         if (arr[i] < minNumber) {
           minNumber = arr[i];
         }
     }
     return minNumber;
 }
 int main() {
     int arr[] = {12, 45,1, 8, 2, 66, 9, 11}; 
     int size = sizeof(arr) / sizeof(arr[0]); 
 
     int Smallest = findSmallest(arr, size);
     cout << "The Smallest number in the array is: " << Smallest<< endl;
 
     return 0;
 }