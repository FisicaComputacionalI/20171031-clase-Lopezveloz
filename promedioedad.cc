#include<iostream>
using namespace std;
int main(){
  int sum=0;
  int edad[16];
for (int i=0; i<16; i++){
  cout<<"¿Qué edad tienes?"<<endl;
  cin>>edad[i];
    }
for (int j=0; j<16; j++)
  sum+=(edad[j]+3);
for (int j=0; j<16; j++)
  cout<<edad[j]<<" , ";
cout<<endl;
cout<<"el promedio de edad a la que se graduará este grupo es"<<sum/16<<endl;
return 0;
}
