/*#include<iostream>
using namespace std;
int main()
{    int t;    
     cin>>t;
     while(t--)    
     {        
          int n,k,p;        
          cin>>n;        
          int a[n];
          cin>>k;
          for(int i=0;i<n;i++)
          {
              cin>>a[i];        
          }        
          k%=n;
          cout<<"K = "<<k<<endl;
          for(int i=0;i<n;i++)
          {
               cout<<"(i+(n-k))%n = "<<(i+(n-k))%n<<endl;
               p = a[(i+(n-k))%n];
               cout<<p<<" ";
          } cout<<"\n";
      }
return 0;
}
*/
#include <iostream>
using namespace std;
void right_rotate_by_one(int arr[], int n)
{

/* Shift operation to the left */
int temp = arr[n-1], i;
for (i = n-1; i >0; i--)
arr[i] = arr[i - 1];
arr[i] = temp;
}

void array_right_rotate(int arr[], int no_of_rotations, int n)
{
for (int i = 0; i < no_of_rotations; i++)
right_rotate_by_one(arr, n);   // Function is called for no_of_rotations times 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int arr[n];
        cin>>k;
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        array_right_rotate(arr,k,n);
        for(int j = 0;j<n;j++){
            cout<<arr[j]<<" ";
        }
    }
    return 0;
}