#include <iostream.h>
#include <conio.h>
int main()
{
int i,j,n,spasi;
cout<<"Masukkan Jumlah Baris: "; cin>>n;
for (i=1; i<=n; i++)
{
spasi=n-i;
for(j=1; j<=spasi;j++)
cout<<"  ";
for(j=1;  j<=i; j++)
cout<<"* ";
cout<<endl;
}
getch();
}
