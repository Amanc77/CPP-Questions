
#include<iostream>
#include<algorithm>
using namespace std;


struct Array
{
    int A[20];
    int length; 
    int size;
};                            


void Display(struct Array arr)
{
cout<<"now priting value of arr ";
   for(int i = 0 ; i < arr.length; i++)
   {
    cout<<arr.A[i]<< " ";
   }
   cout<<endl;
}


void Append(struct Array *arr, int x)
{
    if(arr->length < arr->size)
    {
        arr->A[arr->length] = x;
        arr->length++;
    }
    else{
        cout<<"Array if full.";
    }

}


void insert(struct Array *arr, int index, int x)
{
 
   if(arr->length < arr->size && index>=0 && index <= arr->length )
    {
        for(int i = arr->length ; i > index ; i-- )
        { 
            arr->A[i] = arr->A[i-1];

        }
        arr->A[index] = x;
        arr->length++;
    }
    else{
        cout<<"index is invalid  ";
    }

}
void leanearSearch(struct Array arr , int key)
{
    bool check = true;
    for(int i =0 ; i <arr.length ; i++)
    {
        if(arr.A[i] == key)
        {
            cout<<key <<" is found at index "<<i<<endl;
            check  = false;
        }
    }
    if(check == true)
          cout<<"key is not found "<<endl;
}


int BinarySearch( struct Array arr, int key)
{
    
 // binarysearch have order of log n time complexity.

    sort(arr.A, arr.A + arr.length); 

    int l , h , mid ;
    l = 0;
    h = arr.length -1;
    mid = (l+h)/2;

    while (l <= h) {
        int mid = (l + h) / 2;

        if (arr.A[mid] == key) {
            return mid; // Return the index where the key is found
        }
        else if (arr.A[mid] < key) {
            l = mid + 1; // Search in the right half
        }
        else {
            h = mid - 1; // Search in the left half
        }
    }

    return -1; // Return -1 if the key is not found


}


void Delete(struct Array *arr , int index)
{
    if(arr->length == 0)
    {
        cout <<"Array is empty";

    }
    for(int i =  index; i<arr->length-1; i++)
    {
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;

}

int main()
{ 
    struct Array arr= {{1,2,3,4,5,6,7,8,9,10},10,15} ; // object arr is created;
   
    cout<<"before append \n";
   Display(arr);
   Append(&arr,11);
    cout<<"after append \n";
   Display(arr);

    cout<<"before insertion \n";
   Display(arr);

   insert(&arr,0,444);
    cout<<"before insertion \n";
   Display(arr);


  
    cout<<"now deleting index 1 element \n";
    Delete(&arr,1);
   Display(arr);


    
    
 leanearSearch(arr, 8);



 int key = 9;
    int index = BinarySearch(arr, key);

    if (index != -1) {
        cout << "Element " << key << " found at index: " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

 
    return 0;
}