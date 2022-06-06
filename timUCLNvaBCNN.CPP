#include<bits/stdc++.h>
using namespace std;

void nhapMang(int a[], int &n){
   cout<<"Nhap so luong mang: ";
   cin>>n;
   for(int i=0; i<n; i++){
      cout<<"a["<<i<<"]: ";
      cin>>a[i];
   }
}
void xuatMang(int a[], int n){
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}
 int UCLN( int a,  int b) {
   if(a==b)
      return a;
   else
      if(a>b)
         return UCLN(a-b,b);
      else
         return UCLN(a,b-a);
}
int UCLN(int a[],  int n) {
    int temp;
   if(n==1)
      return abs(a[0]);
   else 
   {
      temp = abs(a[0]);
      for( int i = 1; i<n; i++)
         temp = UCLN(temp, abs(a[i]));
   }
   return temp;
}
int BCNN(int a, int b){
    return (a*b/UCLN(a,b) );
}
int BCNN_Mang(int a[],int n){
        int temp = BCNN(a[0], a[1] );
        for(int i=2;i<n;i++){
            temp = BCNN(temp, a[i]);    
        }
        return temp;
}
int main(){
   int a[100], n;
   nhapMang(a, n);
   xuatMang(a, n);
   ofstream ghiFile("UCLN.txt");
   ghiFile<<UCLN(a,n);
   ofstream ghiFile1("BCNN.txt");
   ghiFile1<<BCNN_Mang(a,n);
   
   return 0;
}