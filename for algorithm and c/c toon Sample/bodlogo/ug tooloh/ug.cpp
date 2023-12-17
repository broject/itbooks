#include<string.h>
#include<stdio.h>
#include<conio.h>

int main(int argc, char **argv){

	int i,j,tool,sword,eword,stool,etool;
	char tmp,*head,*str=new char[];
	char noword[]="~@&<([{-| :,.\0";//ogullberiig ugend salgaj oilgogdoh temdegtuud
	
	printf("",argc);
	i=1;

	if(argc>1){

		while(i<argc){
			argv++;
			if(i==1)
				strcpy(str,*argv);
			else{
				strcat(str," ");
				strcat(str,*argv);
			}
			i++;
		}

	}else{

		printf("Oguulberee oruulaarai.\n");
		gets(str);
	}
	
	tool=i=eword=stool=etool=sword=0;
	j=strlen(noword);
	head=str;

	tmp=*str;
	
	while(*str){

		for(i=0;i<=j;i++){

			if( *str==noword[i] ){
				etool++;
			}
		}

		eword++;

		if(stool<etool){
			if((eword-sword)>2 && eword!=1){
				//aa.ads 2ug
				tool++;
				//a.s. ug bish
			}
			stool=etool;
			sword=eword;
		}

		tmp=*str;
		str++;
	}
	//Deerhi bodoltiin argachlal ni ugiin togsgol yamar tusgai temdegteer zaaglagdsan baigaag
	//shalgaj davhardliig arilgan toolno.

	tool++;

	for(i=0;i<=j;i++)
		if( tmp==noword[i] ){
			tool--;
		}

	str=head;

	printf("\nString=%s\n",str);
	printf("Ugiin too=%d\n",tool);
		
	return 1;
}