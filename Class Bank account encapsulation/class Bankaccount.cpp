// Application proper encapsulation making attributes private in class:Bankaccount

/* NAME:Nimrod Mutai
   REG NO: BSE-05-0178/2024
   BSE Group 3 */
   
#include<iostream>
#include<string>
using namespace std;

class Bankaccount{
	private:
		string Accountholder;
		double balance;
		
		  //Setter Accountholder
		public:
			void setAccountholder(string AH){
				Accountholder=AH;
			}
			
			 //Getter Accountholder
	          string getAccountholder(){
	        	return Accountholder;
	          }
	           
	           //Setter balance
	          void setbalance(double B){
	          	 balance=B;
			  }
			  
			  //Getter balance
			  double getbalance(){
			  	return balance;
			  }
			  
			  	  
};
  
  int main(){
  	  Bankaccount e1;
  	  e1.setAccountholder ("Amad Diallo");
  	  e1.setbalance (4000);
  	  cout << e1.getAccountholder()<<endl;
  	  cout <<e1.getbalance()<<endl;
  	  
  	  return 0;
  }
  