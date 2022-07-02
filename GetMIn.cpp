//Design a stack that supports normal stack operatiosn in O(1) and also supprots getMin() in O(1)
#include <iostream>
#include<string.h>

using namespace std;

struct stack
{
   int oarr[10];
   int otop;
   int marr[10];
   int mtop;
}s;
int mpeek()
{
    int c=s.marr[s.mtop];
    return c ;
}

void push(int c)
{
    s.otop++;
    
    s.oarr[s.otop]=c;
    if(s.mtop==-1)
    {
        s.mtop++;
        s.marr[s.mtop]=c;
    }
    else if( mpeek()>c)
    {
        s.mtop++;
         s.marr[s.mtop]=c;
    }
    else
    {
        int d=mpeek();
        s.mtop++;
         s.marr[s.mtop]= d;
    }
    
}
void pop()
{
    
   
    s.otop--;
  
    s.mtop--;
    
    
}
void getmin()
{
    cout<<mpeek()<<endl;
    
}
int main()
{
    s.otop=-1;
    s.mtop=-1;
    push(9);
    push(56);
    push(-78);
      getmin();
    pop();
    getmin();
     push(90);
     push(3);
     pop();
    getmin();
    
    
   
    
}



