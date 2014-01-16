//Name   : Rishabh Jain
#include <iostream>
#include <cmath>
using namespace std;

void compute(int num){  
    int i = 31, j=0, ans=0, rem=num;
    char truthval = 'f';
    while(rem>0)
    {
        if((rem - pow(2,i))>=0)
        {
            rem = rem - pow(2,i);
            ans = ans + pow(2,j);
            truthval = 't';
        }
       
        if(truthval=='t')
            j++;
        i--;
    }
   
    //cout<<"The Final Answer is: ";
    cout<<ans;
}

int main(){
//We have to take in a number which is greater than 1 and less than 1000000000
//so we use a do while loop for that!
   
    int num = 1;
   
    do{
        //cout<<"Enter the Value to be converted: "
        cin>>num;
        //cout<<num<<endl;
    }
    while(num<1 || num>1000000000);
   
//Entered number as a variable num
//Have to call the function compute
    compute(num);
    return 0;
} 