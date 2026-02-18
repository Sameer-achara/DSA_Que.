// reverse an array --->
int arr[8]={22,54,23,87,34,89,33,77};
     for(int i=7;i>=0;i--){
         cout<<arr[i]<<endl;
    }

// swap alternative --->
int arr[9]={5,2,7,2,6,3,1,9,1};

 for(int i=0;i<9;i++){
     for(int j=i+1;j<9;j++){
     if(arr[i] == arr[j]){
         cout<<arr[i]<<" ";
     }
   }
 }

// intersection of two array's

int arr[9]={5,2,7,2,6,3,1,9,1};
 int arr2[9]={2,4,21,5,5,78,99,1,1};
 for(int i=0;i<9;i++){
     for(int j=0;j<9;j++){
     if(arr[i] == arr2[j]){
         cout<<arr[i]<<" ";
         break; // ye multiple time print na ho isliye lagaya hai
     }
   }
 }

// pair sum --->

int a[5]={2,1,3,6,2};
 int a2[5]={2,5,8,9,10};
 for(int i=0;i<5;i++){
     for(int j=0;j<5;j++){
         if(a[i]+a2[j] == 12){
             cout << a[i] << " " << a2[j] << endl;
         }
     }
 }

// triplet sum ---->

int a[5]={2,1,3,6,2};
 int a2[5]={2,5,8,9,10};
 int a3[5]={1,4,2,5,7};
 for(int i=0;i<5;i++){
     for(int j=0;j<5;j++){
         for(int k=0;k<5;k++){
         if(a[i]+a2[j]+a[k] == 15){
             cout << a[i] << " " << a2[j] << " " << a[k]<< endl;
         }
     }
     }
 }


// sort by 0's and 1's

int arr[6] = {1, 0, 1, 0, 0, 1};
    int n = 6;

    int countZero = 0;

    // Step 1: Count number of 0s
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            countZero++;
        }
    }

    // Step 2: Fill first part with 0s
    for(int i = 0; i < countZero; i++){
        arr[i] = 0;
    }

    // Step 3: Fill remaining part with 1s
    for(int i = countZero; i < n; i++){
        arr[i] = 1;
    }

    // Print result
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

