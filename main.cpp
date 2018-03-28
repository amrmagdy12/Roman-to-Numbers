#include <iostream>

using namespace std;

int main()
{   string input ;
    char roman_n[10]={'M','D','C','L','X','V','I'} ;
    int arabic_n[10]={1000,500,100,50,10,5,1} ;
    int index1=0,sum=0,index2=0;
    cout<<"Please Enter your Roman numerical : " ;
    cin>>input ;
    for(int i=0 ;i<input.size();i++)
    {
        for(int k=0;k<7;k++)
        {
            if(input[i]==roman_n[k])
            {
                index1=k ;
            }
             if(i!=input.size()-1&&input[i+1]==roman_n[k])
            {
                index2=k ;
            }
        }
          if(index1>index2){
              sum+=arabic_n[index2]-arabic_n[index1];
                i++ ;
            }
          else{
               sum+=arabic_n[index1] ;
          }
    }
        cout<<sum;

    return 0;
}
