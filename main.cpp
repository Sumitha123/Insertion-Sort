//
//  main.cpp
//  InsertionSort
//
//  Created by Sumitha on 5/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
void insertion_sort (int arr[], int length){
    int j, temp;
    
    for (int i = 0; i < length; i++){
        j = i;
        
        while (j > 0 && arr[j] > arr[j-1]){
            temp = arr[j];
            //std :: cout << temp << std :: endl;
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}


int main(int argc, const char * argv[]) {
    for(int count = 0;count <1;count++){
    unsigned long start_s=clock();
    int length = 10000;
    int *a = new int[length];
    //int a[10] = {2,1,4,2,9,5,7,3,1,5};
   
    
    for (int i = 0; i < length; i++){
        a[i] = rand() % 100;
       // std :: cout << a[i] << " ";
    }
 
    insertion_sort(a,length);
    for (int i = 0; i < length; i++){
       // a[i] = rand() % 100;
       // std :: cout << a[i] << " ";
    }
    unsigned long stop_s=clock();
    std :: cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std :: endl;

    //return 0;
    }
}
