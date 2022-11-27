#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
//create namespace
/*Branch name
*
*
*/
//prototype

int indexarr();

void readarr(int b[],int &h);


//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declar number of array
int n;

//Get Number of array
n = indexarr();

//Seperator
cout<<endl<<endl<<"-----------------------------"<<endl<<endl;

//Declare array
int a[n];

readarr(a , n);

getch();
}
//function variable
//--------------------------
//functions

//read number of array
int indexarr()
{
    int n;
    cout<<"Enter number of array = ";
    cin>>n;

    return n;
}


//Function for read number for array
void readarr(int b[],int &h)
{
    
    for(int i=0; i<h; ++i)
    {
        cout<<i<<" = ";
        cin>>b[i];
        cout<<endl;
    }
}