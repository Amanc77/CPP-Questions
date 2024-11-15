#include<iostream>
using namespace std;

struct Stack{
    int size;
    int top ;
    int *s;
};

void push(struct Stack* st, int x){
    if(st->top == st->size - 1 ){
        cout<<"Stack is overflow mean stack is full";
    }
    else{
        st->top++;
        st->s[st->top] = x;

    }
}



int pop( Stack &st  ){
    int  x = -1;
    if(st.top == -1)
      {cout<<"stack is underflow";}
        

   else{
      x = st.s[st.top];
      st.top--;
     
   }
    return x;
 }

void Display(const Stack &st) {
    for (int i = st.top; i >= 0; i--) {
        cout << st.s[i] << " ";
    }
    cout << endl;
}

int main()
{ 
    struct Stack st;
    cout<<"enter size ";
    cin>>st.size;

    st.s = new int(st.size);
    st.top = -1;


    push( &st, 5);
    push( &st, 15);
    push( &st, 25);
    push( &st, 35);
    push( &st, 45);
    

    Display(st);
    cout<<"poped eliment is "<<pop(st)<<endl;
    Display(st);


    return 0;
}