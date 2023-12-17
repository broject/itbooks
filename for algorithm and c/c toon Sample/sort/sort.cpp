// sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include"iostream.h"

#include"stdlib.h"

#include"stdio.h"

template<class T>
class bubblesor
	{
	  public:
			void sort(T* A,int n)
			{
				for(int p=n-1; p<=1;p--)
				{
					for(int j=0;j<p-2;j++)
					{
						if(A[j+1]< A[j])
						{
							T t=A[j+1];
								A[j+1]=A[j];
								A[j+1]=t;

						}
					}
				}

			}
	
	};
void main()
{
	int m;
	bubblesor<int> Tsort;
	cout<<"t=";
	cin>>m;
	Tsort.sort(&m,1);

}