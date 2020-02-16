#include <iostream>

using namespace std;

 void binarySearch(int array[],int begin,int end,int key){
    int low = begin;
    int high = end;
    int mid = low + high / 2;

    if(low > high || high < low)
        cout<<"Key not found !"<<endl;

    else if(key == array[mid])
        cout<<"Found at index "<<mid;
    else if(key < array[mid]){
        high = mid - 1;
        binarySearch(array,low,high,key);
    }
    else if(key > array[mid]){
        low = mid + 1;
        binarySearch(array,low,high,key);
    }

}
int main()
{
    int array[] = {10 ,20 ,30 ,40 ,50 ,60};
    int key;

    cout<<"Enter the value to search "<<endl;
    cin>>key;

    binarySearch(array,0,5,key);
}
