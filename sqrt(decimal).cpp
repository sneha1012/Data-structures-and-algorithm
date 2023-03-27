#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        int s= 0;
        int e= n;
        long long int mid= s+ (e-s)/2;

        long long int ans= -1;

        while(s<=e){
            long long int square = mid*mid;
            if(square == n)
            return mid;
            if(square <n){
                s= mid+1;

                ans= mid;
            }
            else{
                e= mid -1;
            }
            mid= s+ (e-s)/2; // update your mid after your complete function

        }
        return ans;
 }

 double morePrecision(int n, int precision, int tempsol){

    double factor = 1;
    double ans= tempsol;

    for(int i=0; i<precision; i++){
        factor= factor/10;
        for(double j=0; j*j<n;  j= j*factor){
            ans = j;

        }
    }
    return ans;

 }
 int main(){
    int n;
    cout<<"enter the number" << endl;
    cin>>n;

    int tempsol= sqrtInteger(n);
    cout<< "answer is"<< morePrecision(n, 3, tempsol);
    return 0;
 }