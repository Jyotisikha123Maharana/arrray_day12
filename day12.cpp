#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i =0; i<size ; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}
void inc(int arr[], int size){
    arr[0]= arr[0]+10;
    printArray(arr, size);
}
int main(){
    /*int arr[500];
    int n;
    cout << "How many numbers u want to add in array"<< endl;

    cin >> n;

    cout << "Enter the number "<< endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];

    }

    //print doubles 
    cout << "Doubles:";
    for (int i=0; i<n; i++){
        cout << 2* arr[i]<< "";
    }

    return 0;*/

    /*int arr[10]={0};
    for (int i=0; i<10; i++){
        cout << arr[i] << " ";
    }

    return 0;*/

    /*int arr[10];
    memset (arr,2 ,sizeof(arr));
     for ( int i=0; i<10; i++){
        cout << arr[i] <<" ";
     }*/

}