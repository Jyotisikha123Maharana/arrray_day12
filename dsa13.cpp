#include <iostream>
using namespace std;

int main (){
    /*int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;

    int key = 15;

    bool flag = 0;

    // LINEAR SEARCH 

    for(int i = 0; i < size; i++){
        if(arr[i]==key){
            flag = 1;
        }
    }
if (flag)
cout << "PResent "<< endl;
else 
cout << "absent "<< endl;
}*/

int arr[]={ 1, 0 , 1, 0, 1, 1, 1, 0, 0, 0, 0 ,1, 1 ,1, 0, };
    int size = 15;

    int numzeros = 0;
    int numones = 0; 

    for(int i = 0; i < size; i++){
        if (arr[i] == 0){
            numzeros++;
        }
        if (arr[i] == 1){
            numones++;
        }
    }
cout << "numzeros "<< numzeros << endl;
cout << "numones "<< numones << endl;

}