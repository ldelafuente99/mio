/**/
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int piedra,temp,pesos[20],array1[10],array2[10],suma1=0,suma2=0,minimo, mid,aux1=0,aux2=0,j=0;
	cin>>piedra;
	if(piedra<0 ||piedra>20){
		return 0;
	}
	for(int i=0;i<piedra;i++){
		cin>>pesos[i];
	}
    for(int i=0;i<piedra;i++){
        for(int j=0;j<piedra;j++){
            if(pesos[j]>pesos[i]){
                temp=pesos[i];
                pesos[i]=pesos[j];
                pesos[j]=temp;
            }
        }
    }
    for(int i=0;i<piedra;i++){
        array1[i]=0;
        array2[i]=0;
    }
    mid=(piedra/2);
    /*for(int i=0;i<piedra;i++){
       cout<<pesos[i]<<" ";
    }
    for(int i=0;i<piedra;i++){
        if(j==mid){
            aux1=i; aux2=piedra-(i+1);
            break;
        }
        array1[i]=pesos[i];
        array1[piedra-(i+1)]=pesos[piedra-(i+1)];
        //suma1=pesos[i]+pesos[piedra-(i+1)]+suma1;
        j=j+2;

    }
    /*cout<<"suma1 "<<suma1<<endl;
    for(int i=aux1;i<=aux2;i++){
        array2[i]=pesos[i];
        //suma2=pesos[i]+suma2;
    }
    /*cout<<"suma2 "<<suma2<<endl;
    cout<<endl;
    for(int i=0;i<piedra;i++){
        suma1=suma1+array1[i];
    }
    for(int i=0;i<piedra;i++){
        suma2=suma2+array2[i];
    }
    minimo=abs(suma2-suma1);
    cout<<minimo<<endl;
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
bool b[18];
int piedra;
void get(int a,int piedra)
{
    for ( int i= 0; i < piedra; i ++)
    {
        if (a%2==0) b[i]=false;
        else b[i]=true;
        a=a/2;
    }
}
int main(){
    int piedra,pesos[18],dn;
    int s1=0,s2=0,dx,dk;
    cin >> piedra;
    for ( int i = 0; i < piedra; i++)
    {
        cin >> pesos[i];
        s1=s1+pesos[i];
    }
    dx=abs(s1-s2);
    dn=(1<<piedra);
    s1=0;
    for (int i = 1; i < dn; i++)
    {
        get(i,piedra);
        s1=0;s2=0;
        for (int j=0;j<piedra;j++)
        {
        if (b[j]) s2=s2+pesos[j];
        else s1=s1+pesos[j];
        }
        dk=abs(s1-s2);
        dx=min(dx,dk);
    }
    cout<<dx<<endl;
    return 0;
}