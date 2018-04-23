#include <iostream>

using namespace std;
int main()
{
	int galones,litros,i,n;
    
      cout<<"introduzca galones litros:\n";
	  cin>>n;
	  
	  	for(i=1;i<=n; i=i+1)
	  	{
	  	  cout<<"introduzca los galones:\n";
	      cin>>galones;
	      litros= galones*3.785;
	      cout<<"el equivalente es:\n"<<litros<<endl; 
		}     
    return 0;
}
