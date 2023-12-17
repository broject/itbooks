#include"jagsaalt.h"

int main(int argc, char argv[])
{
	function list;
	int ch=1;
	int spos=0;

	while(ch!=0){
		cout<<"Yamar too jagsaaltand nemmeer baina?"<<endl;
		cout<<"toon utga: ";cin>>ch;

		list.setfirst();
		
		if( list.getpointer() == NULL ) {
			list.insvalue(ch);
			list.setmaxmin(ch);
		}else{

			while( list.getpointer() != NULL ){
				if( list.getvalue()>ch ){
						list.inspvalue(ch);
						list.setlast();
						list.insvalue(ch);
						list.setmaxmin(ch);
						list.setlast();
				}else 
					if( list.getmaxval()==list.getvalue() ){
						list.insvalue(ch);
						list.insvalue(list.getprevval());
						list.setmaxmin(ch);
						list.setlast();
					}else if( list.getvalue()<=ch && ch<=list.getnextval() ){
						list.insvalue(ch);
						list.setposition( list.getlength()-list.getposition()+1 );
						list.insvalue(ch);
						list.setmaxmin(ch);
						list.setlast();
					}
				
				list.setnext();
			}
			//Deerhi uildliin davuu tal ni jagsaaltiin ooriinh ni method -duudiig ashiglan
			//garaas orson toon utgiig 12321 geh met helbert shuud shiljuulen oruulj baigaad yum
			//Oor bas olon uildliig jagsaaltiin ootiinh ni method -uudaar guitsetgej bolno.
		}

		list.printlist();
	}

	return 1;
}