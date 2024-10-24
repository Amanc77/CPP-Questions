#include<iostream>
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


     
    
 
 
    return 0;
}