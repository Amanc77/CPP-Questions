
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

int get (struct Array arr, int index)
{
    if(index>=0 && index < arr.length)
    {
            return arr.A[index];


    }
    else
        return -1;
}


int max (struct Array arr)
{
   int max = arr.A[0];
   for(int i = 1 ; i<arr.length ; i++)
   {
    if(arr.A[i] > max)
    {
        max = arr.A[i];
    }
   }
   return max;
}
int min (struct Array arr)
{
   int min = arr.A[0];
   for(int i = 1 ; i<arr.length ; i++)
   {
    if(arr.A[i] < min)
    {
        min = arr.A[i];
    }
   }
   return min;
}
int SumOfDigit (struct Array arr)
{
   int SumOfDigit = 0;
   
   for(int i = 0 ; i<arr.length ; i++)
   {
    SumOfDigit += arr.A[i];
   }
   return SumOfDigit;
}

int avrageofN (struct Array arr)
{
   int avrageofN = 0;
   
   for(int i = 0 ; i<arr.length ; i++)
   {
    avrageofN += arr.A[i];
   }
   return avrageofN/(arr.length - 1);
}



void ReverseArray(struct Array *arr)
{
    for(int i =0 , j = arr->length-1; i<j; i++,j--  )
    {
        swap(arr->A[i],arr->A[j]);
    }

}


void LeftShift(struct Array arr, int positionCount)

{
    for(int i = 0 ; i<arr.length - positionCount; i++)
    { 
       
        arr.A[i] = arr.A[i+positionCount];
        
        

    }
    for(int i = arr.length - positionCount; i <arr.length; i++)
    { 
       
      arr.A[i] = 0;
        
        

    }
    
    Display(arr);
}


void RightShift(struct Array arr, int positionCount)

{
    for(int i = arr.length -1 ; i >= positionCount; i--)
    { 
       
        arr.A[i] = arr.A[i-positionCount];
        
        

    }
    for(int i = 0; i <positionCount; i++)
    { 
       
      arr.A[i] = 0;
        
        

    }
    
    Display(arr);
}

int isSort(struct Array arr)
{
    int i;
    for (int i=0; i<arr.length-1; i++)
    {
        if(arr.A[i] <= arr.A[i+1])
        {
            return 1;
        }
    }
    return 0;
}


int main()
{ 
    struct Array arr= {{1,2,3,4,5,6,7,8,9,10},10,15} ; // object arr is created;
   

    struct Array arr2 = {{5,23,234,524,634,43},6,10};

    struct Array *arr3;
    Display(arr);

   cout<<"reversing Array ..\n";
   ReverseArray(&arr);
   Display(arr);
   ReverseArray(&arr);

   cout<<"left shift ";
   LeftShift(arr,3);
    
   
   cout<<"right shift ";
   RightShift(arr,4);
    

    return 0;
}