#include<iostream.h>

class value{
	value *prev;
	value *next;
	int data;
public:
	value(const int d){
		data=d;
		prev=next=NULL;
	}
	~value(){;}

	friend class function;
};

class function
{
	value *head;
	value *curr;
	value *tail;
	int min_val,max_val;

public:
	function(){
		head=curr=tail=NULL;
		min_val=max_val=0;
	}
	~function(){;}	

	void setfirst	()	{ curr=head; }
	void setprev	()	{ curr=curr->prev; }
	void setpointer (value *point){ curr=point; }
	void setnext	()	{ curr=curr->next; }
	void setlast	()	{ curr=tail; }
	void seteop		()	{ head=curr=tail=NULL; }// Jagsaaltiin ustgah
		void setposition(int n);

	value *getfirst		()	{ return head; }
	value *getprev		()	{ return curr->prev; }
	value *getpointer	()	{ return curr; }
	value *getnext		()	{ return curr->next; }
	value *getlast		()	{ return tail; }
		int geteop		()	{ return NULL; }
		int getlength();
		int getposition();

	void setfirstval	(int val) { head->data=val; }
	void setprevval		(int val) { curr->prev->data=val; }
	void setvalue		(int val) { curr->data=val; }
	void setnextval		(int val) { curr->next->data=val; }
	void setlastval		(int val) { tail->data=val; }
		void inspvalue	(int val);
		void insvalue	(int val);
		void setmaxmin	(int val);

	int getfirstval	()	{ return head->data; }
	int getprevval	()	{ return curr->prev->data; }
	int getvalue	()	{ return curr->data; }
	int getnextval	()	{ return curr->next->data; }
	int getlastval	()	{ return tail->data; }
		int getmaxval() { return max_val; }
		int getminval() { return min_val; }
	
	void printlist();

	bool isempty(value *obj=NULL){
		if(obj==NULL)
			return true;
		else
			return false;
	}
};
//PRINTING
void function::printlist(){
	int t=1;
	value *tmp;

	if(head!=NULL){
		tmp=curr;
		curr=head;
		while(curr!=tail->next){
			cout<<t<<"."<<curr->data<<endl;
			curr=curr->next;
			t++;
		}
		curr=tmp;
	}
}
//SAVING
void function::inspvalue(int val){// Jagsaaltiin ehnii zangilaand shine zangilaa uusgej zalgah
	value *tmp;
	
	if(head==NULL){
		head=curr=tail=new value(val);
		min_val=max_val=val;
	}else{
		tmp=curr;
		curr=curr->prev;
		if( curr==NULL ){
			head=curr=new value(val);
			curr->next=tmp;
		}else{
			curr->next=new value(val);
			curr=curr->next;
			curr->next=tmp;
		}
	}
	// enehuu bodolt ni ooroo zangilaag shalgaj busad zangilaanii utgiig
	//hondolguigeer zaasan hesegiin omno shine zangilaag nemen oruulah bolno
}
void function::insvalue (int val){// Jagsaaltand shine zangilaa nemen oruulah
	
	value *tmp;
	
	if(head==NULL){
		head=curr=tail=new value(val);
		min_val=max_val=val;
	}else if(curr->next==NULL){
		tmp=curr;
		curr->next=new value(val);
		curr=curr->next;
		curr->prev=tmp;
		tail=curr;
	}else{
		tmp=curr->next;
		curr->next=new value(val);
		curr->next->prev=curr; 
		curr=curr->next;
		curr->next=tmp;
	}
	// enehuu bodolt ni ooroo zangilaag shalgaj busad zangilaanii utgiig
	//hondolguigeer zaasan hesegiin daraa shine zangilaag nemen oruulah bolno
}
void function::setmaxmin(int val){
	if (max_val<=val)
		max_val=val;
	else if(min_val>=val){
		min_val=val;
	}
}
//SETTING
void function::setposition(int n){
	int t=1;
	if(head!=NULL){
		curr=head;

		while(t<n){
			curr=curr->next;
			t++;
		}
	}
}
//GETTING
int function::getlength(){// Jagsaaltiin urtiig avah
	int t=0;
	value *tmp;

	tmp=curr;
	
	if(head==NULL)
		return -1;
	else{
		curr=head;

		while(curr!=tail->next){
			curr=curr->next;
			t++;
		}
		curr=tmp;
	}
	return t;
}
int function::getposition(){// Yag odoo zaaj baigaa zangilaa hed deh ni ve?
	int t=0;
	value *tmp;

	tmp=curr;
	if(tmp==NULL)
		return -1;
	else{
		curr=head;

		while(curr!=tmp->next){
			t++;
			curr=curr->next;
		}
		curr=tmp;
	}
	return t;
}
//Deerhi method -uud ni neg hemjeest jagsaaltand shaardlagatai
//buh properties -uudiig aguulsan baigaa.
//Mon hamgiin gol ni method -uudiig ashiglahad tuhain
//zangilaanii zaagch bolon utga oorchlogdohgui sain zohion baiguulagdsan.
