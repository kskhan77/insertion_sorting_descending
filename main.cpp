#include <iostream>
using namespace std;
int main() {
int temp_hold,i, j;

int a[6]={5,8,4,3,89,11};

for(i=1;i<6;i++){
temp_hold= a[i];
for(j=i-1;
j>=0 && a[j]<temp_hold;j--){
a[j+1]=a[j];

}
a[j+1]=temp_hold;

}
for(i=0;i<6;i++){
cout<<a[i]<<"\t";
}}





