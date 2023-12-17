#include<stdlib.h>
#include<stdio.h>

int main(int argc, char argv[])
{
	int a[200];// teatriin neg egnee huu+ohidiin toonoos ih buyu tentsuu geie.
	int huu,ohin;
	int d, n, ih, bg;
	int t=0,i,s=0;
		
	printf("Teatert heden huu =");
	scanf("%d",&huu);
	printf("heden ohin =");
	scanf("%d",&ohin);
	printf("orj irsen bol.\n");

	if(huu<ohin){
		ih=2;//ohin ni ih bol------------------------------------------->
		bg=1;			//												|
		d=ohin-huu;// heden udaa 2ohin 1huu tavih ve gedeg ni			|
		a[1]=2;// 1 eer emegtei huuhed suusan sandaliig temdegleie		|
		a[2]=1;			//												|
	}					//												|
	else{				//												|
		ih=1;//huu ni ih bol-------------------------------------------->
		bg=2;			//												|
		d=huu-ohin;// heden udaa 2huu 1ohin tavih ve gedeg ni			|
		a[1]=1;// 1 eer ergtei huuhed suusan sandaliig temdegleie		|
		a[2]=2;			//												|
	}					//												|
						//												|
	n=ohin+huu;			//												|
	printf("niit suragchiin too=%d\n",n);//								|
	printf("huu=1, \nohin=2\n");//										|
	printf("gej tus tus temdgelsen\n");//								|
						//												|
	for(i=3; i<=n; i++){//												|
		if(t<d){		//												|
			s++;		//												|
			if(s<3)		//												|
				a[i]=ih;//2 udaa<---------------------------------------|
			else{
				a[i]=bg;//1 udaa
				s=0;
				t++;
			}//ih,bg,ih,ih,bg,,,ih,bg,ih,bg,,, geh metchilen huu ohid sooljilno
		}else{
			a[i]=(a[i-1]==ih)? bg: ih;//1,2,1,2,,, geh metchilen huu ohid sooljilno
		}		
	}

	printf("\n| ");
	for(i=1; i<=n; i++){
		if(a[i]==2)
			printf("ohin | ");
		else
			printf("huu | ");		
	}
	//Програмын бодолтыг маш хялбар хийж болох байсан боловч ингэж бичсэнээрээ
	//Илїї олон хувилбард ажилласан болно.
	return 1;
}
//Онол ёсоор бол хїї охидын тооны зєрїї дахин 
//илїїгээс илїї тохиолдолд суулгалт худал болох
//ба програм худал їр дїн гарах нь ойлгомжтой.
//Жишээ нь: хїї=3 бол охин<=6 байж асуудал шийдэгдэнэ.