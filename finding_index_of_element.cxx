#include<iostream>
using namespace std;

int * find_Index(int arr[], int num){
   int left = 0;
   int right = 5;
   int * indx = new int[2];
   int sum = 0;
   while(left < right){
       sum = arr[left] + arr[right];
      if(sum == num){
        indx[0]= left;
        indx[1]= right;
        return indx;
      }
      else if(sum > num){
        right--;
      }
      else if(sum < num){
        left++;
      }
    } 
    indx[0] = -1;
    indx[1] = -1;
    return indx;
}

int main(){
    int sum_num, arr[6];
    cout<<"enter number"<<endl;
    cin>>sum_num;
    cout<<"Enter Array"<<endl;
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
   
    int *result = find_Index(arr,sum_num);
    if(result[0] != -1 && result[1] != -1){
       cout<<"Indices whose sum is equal to number are "<<result[0]<<" and "<<result[1]<<endl;
    }
    else{
      cout<<"Combination not available "<<endl;
    }
    return 0;
}
