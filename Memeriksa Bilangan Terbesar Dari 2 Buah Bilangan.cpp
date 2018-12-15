#include <iostream>
using namespace std;
int main ()
{
int a,b;

cout<<"Program memeriksa bilangan terbesar dari 2 buah bilangan"<<endl;

cout<<"Masukkan Bilangan Pertama A = ";
cin>>a;
cout<<"Masukkan Bilangan Kedua B = ";
cin>>b;
if(a<b){
	cout<<"B Terbesar\n";}
	else
	if(a>b){
		cout<<"A Terbesar\n";}
		else
		cout<<"error";
		return 0;

}
