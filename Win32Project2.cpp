// Win32Project2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Fetch.h"





		




int _tmain(int argc, _TCHAR* argv[])
{

	 Fetch d;
std::vector<std::wstring> b;
std::vector<vector<std::wstring>> a;

	
	//request store with id = 1
	b=d.Store(1);
	cout<<"Store with id=1\n:\n";
	for(unsigned int i=0;i<b.size();i++)
	wcout<<b[i]<<" ";
	cout<<"\n\n";

	//request all the deals about coffee
	 a=d.Deals(Coffee);
	
	 
	cout<<"Deals about cofee\n:\n";
	for(unsigned int i=0;i<a.size();i++){
		for(unsigned int b=0;b<a[i].size();b++)
			wcout<<a[i][b]<<" ";
		cout<<"\n\n";
	}
	   system("Pause");
	   return 0;
}




