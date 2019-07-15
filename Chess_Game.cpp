#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

void printboard(char displayBoard[][53],int len);
int winner(char displayBoard[][53],int len);

class Pawn{
	public:
	int movepawnA(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		
		int iter=0;
		if(fcom2==19&&lcom2==lcom1&&displayBoard[fcom1][lcom1]=='P'&&displayBoard[fcom1-4][lcom1]==' '){
				if(displayBoard[fcom2][lcom2]==' '){
					displayBoard[fcom2][lcom2]='P';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
			}
		else if(fcom2==fcom1-4&&lcom2==lcom1){
				if(displayBoard[fcom2][lcom2]==' '){
					displayBoard[fcom2][lcom2]='P';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
			}	
		else if(fcom2==fcom1-4&&lcom2==lcom1+6){
			    if(displayBoard[fcom2][lcom2]!=' '&&(displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
			    	displayBoard[fcom2][lcom2]='P';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
		}
		else if(fcom2==fcom1-4&&lcom2==lcom1-6){
			    if(displayBoard[fcom2][lcom2]!=' '&&(displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
			    	displayBoard[fcom2][lcom2]='P';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
		}
		return iter;	
	}
	
	int movepawnB(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		
		int iter=0;
		if(fcom2==15&&lcom2==lcom1&&displayBoard[fcom1][lcom1]=='p'&&displayBoard[fcom1+4][lcom1]==' '){
				if(displayBoard[fcom2][lcom2]==' '){
					displayBoard[fcom2][lcom2]='p';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
			}
		else if(fcom2==fcom1+4&&lcom2==lcom1){
				if(displayBoard[fcom2][lcom2]==' '){
					displayBoard[fcom2][lcom2]='p';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
			}	
		else if(fcom2==fcom1+4&&lcom2==lcom1+6){
			    if(displayBoard[fcom2][lcom2]!=' '&&(displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
			    	displayBoard[fcom2][lcom2]='p';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
		}
		else if(fcom2==fcom1+4&&lcom2==lcom1-6){
			    if(displayBoard[fcom2][lcom2]!=' '&&(displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
			    	displayBoard[fcom2][lcom2]='p';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
		}
		return iter;	
	}
	
	
};
class Rook{
	public:
	int moverookA(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		
		int temp=0;
		int iter=0;
		if(fcom2==fcom1){
			if(lcom2>lcom1){
				for(int j=lcom1+6;j<lcom2;j++){
					if(displayBoard[fcom1][j]==' '){
			    	  temp++;
					}
					j=j+5;
				}
				if(temp==(lcom2-(lcom1+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
					displayBoard[fcom2][lcom2]='R';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
			}
			else if(lcom2<lcom1){
				    for(int j=lcom1-6;j>lcom2;j--){
			    		if(displayBoard[fcom1][j]==' '){
			    			temp++;
						}
						j=j-5;
					}
					if(temp==(lcom1-(lcom2+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='R';
					    displayBoard[fcom1][lcom1]=' ';
					    iter++;
					}
			}
		}
		else if(lcom2==lcom1){
			    if(fcom2>fcom1){
				   for(int i=fcom1+4;i<fcom2;i++){
				     	if(displayBoard[i][lcom1]==' '){
						   temp++;
					     }
					     i=i+3;
					}
					if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
					     displayBoard[fcom2][lcom2]='R';
					     displayBoard[fcom1][lcom1]=' ';
					     iter++;
				    }
			    }
				else if(fcom2<fcom1){
					    for(int i=fcom1-4;i>fcom2;i--){
					         if(displayBoard[i][lcom1]==' '){
						        temp++;
					         }
					         i=i-3;
				        }
				        if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
					         displayBoard[fcom2][lcom2]='R';
					         displayBoard[fcom1][lcom1]=' ';
					         iter++;
				       }
				}	
		}
		return iter;
	}
	
	int moverookB(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		
		int temp=0;
		int iter=0;
		if(fcom2==fcom1){
			if(lcom2>lcom1){
				for(int j=lcom1+6;j<lcom2;j++){
					if(displayBoard[fcom1][j]==' '){
			    	  temp++;
					}
					j=j+5;
				}
				if(temp==(lcom2-(lcom1+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
					displayBoard[fcom2][lcom2]='r';
					displayBoard[fcom1][lcom1]=' ';
					iter++;
				}
			}
			else if(lcom2<lcom1){
				    for(int j=lcom1-6;j>lcom2;j--){
			    		if(displayBoard[fcom1][j]==' '){
			    			temp++;
						}
						j=j-5;
					}
					if(temp==(lcom1-(lcom2+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='r';
					    displayBoard[fcom1][lcom1]=' ';
					    iter++;
					}
			}
		}
		else if(lcom2==lcom1){
			    if(fcom2>fcom1){
				   for(int i=fcom1+4;i<fcom2;i++){
				     	if(displayBoard[i][lcom1]==' '){
						   temp++;
					     }
					     i=i+3;
					}
					if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
					     displayBoard[fcom2][lcom2]='r';
					     displayBoard[fcom1][lcom1]=' ';
					     iter++;
				    }
			    }
				else if(fcom2<fcom1){
					    for(int i=fcom1-4;i>fcom2;i--){
					         if(displayBoard[i][lcom1]==' '){
						        temp++;
					         }
					         i=i-3;
				        }
				        if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
					         displayBoard[fcom2][lcom2]='r';
					         displayBoard[fcom1][lcom1]=' ';
					         iter++;
				       }
				}	
		}
		return iter;
	}
};
class Knight{
	public:
	int moveknightA(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		 
		 int iter=0;
		 if(displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p'||displayBoard[fcom2][lcom2]==' '){
		 	
	     	if(fcom2==fcom1-8&&(lcom2==lcom1-6||lcom2==lcom1+6)){
		 	   displayBoard[fcom2][lcom2]='N';
		 	   displayBoard[fcom1][lcom1]=' ';
		 	   iter++;
		    }
		    else if(fcom2==fcom1-4&&(lcom2==lcom1-12||lcom2==lcom1+12)){
		 	        displayBoard[fcom2][lcom2]='N';
		 	        displayBoard[fcom1][lcom1]=' ';
		 	        iter++;
		    }
		    else if(fcom2==fcom1+4&&(lcom2==lcom1-12||lcom2==lcom1+12)){
		 	        displayBoard[fcom2][lcom2]='N';
		 	        displayBoard[fcom1][lcom1]=' ';
		 	        iter++;
		    }
		    else if(fcom2==fcom1+8&&(lcom2==lcom1-6||lcom2==lcom1+6)){
		 	        displayBoard[fcom2][lcom2]='N';
		 	        displayBoard[fcom1][lcom1]=' ';
		 	        iter++;
		    }
		}
		    return iter;
	}
	
	int moveknightB(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		 
		 int iter=0;
		 if(displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P'||displayBoard[fcom2][lcom2]==' '){
		 	
	     	if(fcom2==fcom1-8&&(lcom2==lcom1-6||lcom2==lcom1+6)){
		 	   displayBoard[fcom2][lcom2]='n';
		 	   displayBoard[fcom1][lcom1]=' ';
		 	   iter++;
		    }
		    else if(fcom2==fcom1-4&&(lcom2==lcom1-12||lcom2==lcom1+12)){
		 	        displayBoard[fcom2][lcom2]='n';
		 	        displayBoard[fcom1][lcom1]=' ';
		 	        iter++;
		    }
		    else if(fcom2==fcom1+4&&(lcom2==lcom1-12||lcom2==lcom1+12)){
		 	        displayBoard[fcom2][lcom2]='n';
		 	        displayBoard[fcom1][lcom1]=' ';
		 	        iter++;
		    }
		    else if(fcom2==fcom1+8&&(lcom2==lcom1-6||lcom2==lcom1+6)){
		 	        displayBoard[fcom2][lcom2]='n';
		 	        displayBoard[fcom1][lcom1]=' ';
		 	        iter++;
		    }
		}
		    return iter;
	}
			
};
class Bishop{
	public:
	int movebishopA(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		
		int temp=0;
		int iter=0;
		int constant=lcom1;
		if(fcom2<fcom1){
			if(lcom2<lcom1){
				if((fcom1-fcom2)/4==(lcom1-lcom2)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1-6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='B';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}
					
				}
			}
			else if(lcom2>lcom1){
				if((fcom1-fcom2)/4==(lcom2-lcom1)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1+6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='B';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}	
				}	
			}
			
		}
		else if(fcom2>fcom1){
			    if(lcom2<lcom1){
			    	if((fcom2-fcom1)/4==(lcom1-lcom2)/6){
			    		for(int i=fcom1+4;i<fcom2;i++){
			    			lcom1=lcom1-6;
			    			if(displayBoard[i][lcom1]==' '){
							   temp++;
						    }
						    i=i+3;
						}
						if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
							displayBoard[fcom2][lcom2]='B';
						    displayBoard[fcom1][constant]=' ';
						    iter++;
						}
					}
				}
				else if(lcom2>lcom1){
				     	if((fcom2-fcom1)/4==(lcom2-lcom1)/6){
						    for(int i=fcom1+4;i<fcom2;i++){
						    	lcom1=lcom1+6;
						    	if(displayBoard[i][lcom1]==' '){
							       temp++;
						        }
						        i=i+3;
							}
							if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
								displayBoard[fcom2][lcom2]='B';
						        displayBoard[fcom1][constant]=' ';
						        iter++;
							}
					    }
				}
		}
		return iter;
	}
	int movebishopB(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		
		int temp=0;
		int iter=0;
		int constant=lcom1;
		if(fcom2<fcom1){
			if(lcom2<lcom1){
				if((fcom1-fcom2)/4==(lcom1-lcom2)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1-6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='b';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}
					
				}
			}
			else if(lcom2>lcom1){
				if((fcom1-fcom2)/4==(lcom2-lcom1)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1+6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='b';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}	
				}	
			}
			
		}
		else if(fcom2>fcom1){
			    if(lcom2<lcom1){
			    	if((fcom2-fcom1)/4==(lcom1-lcom2)/6){
			    		for(int i=fcom1+4;i<fcom2;i++){
			    			lcom1=lcom1-6;
			    			if(displayBoard[i][lcom1]==' '){
							   temp++;
						    }
						    i=i+3;
						}
						if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
							displayBoard[fcom2][lcom2]='b';
						    displayBoard[fcom1][constant]=' ';
						    iter++;
						}
					}
				}
				else if(lcom2>lcom1){
				     	if((fcom2-fcom1)/4==(lcom2-lcom1)/6){
						    for(int i=fcom1+4;i<fcom2;i++){
						    	lcom1=lcom1+6;
						    	if(displayBoard[i][lcom1]==' '){
							       temp++;
						        }
						        i=i+3;
							}
							if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
								displayBoard[fcom2][lcom2]='b';
						        displayBoard[fcom1][constant]=' ';
						        iter++;
							}
					    }
				}
		}
		return iter;
	}
};
class Queen{
	public:
	int movequeenA(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
	     
	    int temp=0;
		int iter=0;
		int constant=lcom1;
		if(fcom2<fcom1){
			if(lcom2<lcom1){
				if((fcom1-fcom2)/4==(lcom1-lcom2)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1-6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='Q';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}
					
				}
			}
			else if(lcom2>lcom1){
				if((fcom1-fcom2)/4==(lcom2-lcom1)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1+6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='Q';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}	
				}	
			}
			else if(lcom2==lcom1){
				for(int i=fcom1-4;i>fcom2;i--){
					if(displayBoard[i][lcom1]==' '){
						temp++;
					}
					i=i-3;
				}
				if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
					displayBoard[fcom2][lcom2]='Q';
					displayBoard[fcom1][constant]=' ';
					iter++;
				}
			}
			
		}
		else if(fcom2>fcom1){
			    if(lcom2<lcom1){
			    	if((fcom2-fcom1)/4==(lcom1-lcom2)/6){
			    		for(int i=fcom1+4;i<fcom2;i++){
			    			lcom1=lcom1-6;
			    			if(displayBoard[i][lcom1]==' '){
							   temp++;
						    }
						    i=i+3;
						}
						if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
							displayBoard[fcom2][lcom2]='Q';
						    displayBoard[fcom1][constant]=' ';
						    iter++;
						}
					}
				}
				else if(lcom2>lcom1){
				     	if((fcom2-fcom1)/4==(lcom2-lcom1)/6){
						    for(int i=fcom1+4;i<fcom2;i++){
						    	lcom1=lcom1+6;
						    	if(displayBoard[i][lcom1]==' '){
							       temp++;
						        }
						        i=i+3;
							}
							if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
								displayBoard[fcom2][lcom2]='Q';
						        displayBoard[fcom1][constant]=' ';
						        iter++;
							}
					    }
				}
				else if(lcom2==lcom1){
				     for(int i=fcom1+4;i<fcom2;i++){
				     	 if(displayBoard[i][lcom1]==' '){
						    temp++;
					     }
					     i=i+3;
					 }
					 if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
					     displayBoard[fcom2][lcom2]='Q';
					     displayBoard[fcom1][constant]=' ';
					     iter++;
				     }
				}
		}
		else if(fcom2==fcom1){
			    if(lcom2<lcom1){
			    	for(int j=lcom1-6;j>lcom2;j--){
			    		if(displayBoard[fcom1][j]==' '){
			    			temp++;
						}
						j=j-5;
					}
					if(temp==(lcom1-(lcom2+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='Q';
					    displayBoard[fcom1][constant]=' ';
					    iter++;
					}
				}
				else if(lcom2>lcom1){
					for(int j=lcom1+6;j<lcom2;j++){
						if(displayBoard[fcom1][j]==' '){
			    			temp++;
						}
						j=j+5;
					}
					if(temp==(lcom2-(lcom1+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
						displayBoard[fcom2][lcom2]='Q';
					    displayBoard[fcom1][constant]=' ';
					    iter++;
					}
					
				}
		}
		return iter;
	}
	
	int movequeenB(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
	     
	    int temp=0;
		int iter=0;
		int constant=lcom1;
		if(fcom2<fcom1){
			if(lcom2<lcom1){
				if((fcom1-fcom2)/4==(lcom1-lcom2)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1-6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='q';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}
					
				}
			}
			else if(lcom2>lcom1){
				if((fcom1-fcom2)/4==(lcom2-lcom1)/6){
					for(int i=fcom1-4;i>fcom2;i--){
						lcom1=lcom1+6;
						if(displayBoard[i][lcom1]==' '){
							temp++;
						}
						i=i-3;
					}
					if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='q';
						displayBoard[fcom1][constant]=' ';
						iter++;
					}	
				}	
			}
			else if(lcom2==lcom1){
				for(int i=fcom1-4;i>fcom2;i--){
					if(displayBoard[i][lcom1]==' '){
						temp++;
					}
					i=i-3;
				}
				if(temp==(fcom1-(fcom2+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
					displayBoard[fcom2][lcom2]='q';
					displayBoard[fcom1][constant]=' ';
					iter++;
				}
			}
			
		}
		else if(fcom2>fcom1){
			    if(lcom2<lcom1){
			    	if((fcom2-fcom1)/4==(lcom1-lcom2)/6){
			    		for(int i=fcom1+4;i<fcom2;i++){
			    			lcom1=lcom1-6;
			    			if(displayBoard[i][lcom1]==' '){
							   temp++;
						    }
						    i=i+3;
						}
						if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
							displayBoard[fcom2][lcom2]='q';
						    displayBoard[fcom1][constant]=' ';
						    iter++;
						}
					}
				}
				else if(lcom2>lcom1){
				     	if((fcom2-fcom1)/4==(lcom2-lcom1)/6){
						    for(int i=fcom1+4;i<fcom2;i++){
						    	lcom1=lcom1+6;
						    	if(displayBoard[i][lcom1]==' '){
							       temp++;
						        }
						        i=i+3;
							}
							if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
								displayBoard[fcom2][lcom2]='q';
						        displayBoard[fcom1][constant]=' ';
						        iter++;
							}
					    }
				}
				else if(lcom2==lcom1){
				     for(int i=fcom1+4;i<fcom2;i++){
				     	 if(displayBoard[i][lcom1]==' '){
						    temp++;
					     }
					     i=i+3;
					 }
					 if(temp==(fcom2-(fcom1+4))/4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
					     displayBoard[fcom2][lcom2]='q';
					     displayBoard[fcom1][constant]=' ';
					     iter++;
				     }
				}
		}
		else if(fcom2==fcom1){
			    if(lcom2<lcom1){
			    	for(int j=lcom1-6;j>lcom2;j--){
			    		if(displayBoard[fcom1][j]==' '){
			    			temp++;
						}
						j=j-5;
					}
					if(temp==(lcom1-(lcom2+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='q';
					    displayBoard[fcom1][constant]=' ';
					    iter++;
					}
				}
				else if(lcom2>lcom1){
					for(int j=lcom1+6;j<lcom2;j++){
						if(displayBoard[fcom1][j]==' '){
			    			temp++;
						}
						j=j+5;
					}
					if(temp==(lcom2-(lcom1+6))/6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
						displayBoard[fcom2][lcom2]='q';
					    displayBoard[fcom1][constant]=' ';
					    iter++;
					}
					
				}
		}
		return iter;
	}
	
};
class King{
	public:
	int movekingA(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		int iter=0;
		    if(fcom2<fcom1){
		    	if(lcom2<lcom1){
                    if((fcom2==fcom1-4&&lcom2==lcom1-6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2>lcom1){
                    if((fcom2==fcom1-4&&lcom2==lcom1+6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2==lcom1){
                    if(fcom2==fcom1-4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
			    }
		    }
			else if(fcom2>fcom1){
				if(lcom2<lcom1){
                    if((fcom2==fcom1+4&&lcom2==lcom1-6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2>lcom1){
                    if((fcom2==fcom1+4&&lcom2==lcom1+6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2==lcom1){
                    if(fcom2==fcom1+4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}   
				
			    }
		    }
			else if(fcom2==fcom1){
                if(lcom2<lcom1){
                    if(lcom2==lcom1-6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2>lcom1){
                    if(lcom2==lcom1+6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='r'||displayBoard[fcom2][lcom2]=='n'||displayBoard[fcom2][lcom2]=='b'||displayBoard[fcom2][lcom2]=='q'||displayBoard[fcom2][lcom2]=='k'||displayBoard[fcom2][lcom2]=='p')){
                    	displayBoard[fcom2][lcom2]='K';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
			}
			return iter;
	}
	
	int movekingB(int fcom1,int lcom1,int fcom2,int lcom2,char displayBoard[][53],int len){
		int iter=0;
		    if(fcom2<fcom1){
		    	if(lcom2<lcom1){
                    if((fcom2==fcom1-4&&lcom2==lcom1-6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2>lcom1){
                    if((fcom2==fcom1-4&&lcom2==lcom1+6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2==lcom1){
                    if(fcom2==fcom1-4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
			    }
		    }
			else if(fcom2>fcom1){
				if(lcom2<lcom1){
                    if((fcom2==fcom1+4&&lcom2==lcom1-6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2>lcom1){
                    if((fcom2==fcom1+4&&lcom2==lcom1+6)&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2==lcom1){
                    if(fcom2==fcom1+4&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}   
				
			    }
		    }
			else if(fcom2==fcom1){
                if(lcom2<lcom1){
                    if(lcom2==lcom1-6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
				else if(lcom2>lcom1){
                    if(lcom2==lcom1+6&&(displayBoard[fcom2][lcom2]==' '||displayBoard[fcom2][lcom2]=='R'||displayBoard[fcom2][lcom2]=='N'||displayBoard[fcom2][lcom2]=='B'||displayBoard[fcom2][lcom2]=='Q'||displayBoard[fcom2][lcom2]=='K'||displayBoard[fcom2][lcom2]=='P')){
                    	displayBoard[fcom2][lcom2]='k';
						displayBoard[fcom1][lcom1]=' ';
						iter++;
					}
				}
			}
			return iter;
	}
};
int main(){
	
	int index;
	int i1,j1,i2,j2,temp2=0;;
	char displayBoard[34][53] = {
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', ' ', ' ', ' ', ' ', ' ', '2', ' ', ' ', ' ', ' ', ' ', '3', ' ', ' ', ' ', ' ', ' ', '4', ' ', ' ', ' ', ' ', ' ', '5', ' ', ' ', ' ', ' ', ' ', '6', ' ', ' ', ' ', ' ', ' ', '7', ' ', ' ', ' ', ' ', ' ', '8', ' ', ' ', ' '},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '1', ' ', '#', ' ', ' ', 'r', ' ', ' ', '#', ' ', ' ', 'n', ' ', ' ', '#', ' ', ' ', 'b', ' ', ' ', '#', ' ', ' ', 'q', ' ', ' ', '#', ' ', ' ', 'k', ' ', ' ', '#', ' ', ' ', 'b', ' ', ' ', '#', ' ', ' ', 'n', ' ', ' ', '#', ' ', ' ', 'r', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '2', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#', ' ', ' ', 'p', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '3', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '4', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '5', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '6', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '7', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#', ' ', ' ', 'P', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, 
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', '8', ' ', '#', ' ', ' ', 'R', ' ', ' ', '#', ' ', ' ', 'N', ' ', ' ', '#', ' ', ' ', 'B', ' ', ' ', '#', ' ', ' ', 'Q', ' ', ' ', '#', ' ', ' ', 'K', ' ', ' ', '#', ' ', ' ', 'B', ' ', ' ', '#', ' ', ' ', 'N', ' ', ' ', '#', ' ', ' ', 'R', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#'},
	{' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},};
    
	printboard(displayBoard,34);
	
    Pawn playerP;
    Rook playerR;
    Knight playerN;
    Bishop playerB;
    Queen playerQ;
    King playerK;
	
	while(1){
		    
		    bool player=temp2%2!=0;
		    cout<<"Enter a parameter such as 72,64...It means '7' is a row,'2' is a column"<<endl;
		    
		    cout<<player+1<<".Player enter your starting position:";
	
		    cin>>index;
	        i1=index/10;
	        i1=(i1*4)-1;
	        j1=index%10;
	        j1=(j1*6)+1;
	
		    cout<<player+1<<".Player enter your destination position:";
	
	        cin>>index;
	        i2=index/10;
	        i2=(i2*4)-1;
	        j2=index%10;
	        j2=(j2*6)+1;
	        
		    if(displayBoard[i1][j1]=='P'){
		       	        int temp=playerP.movepawnA(i1,j1,i2,j2,displayBoard,34);
			            system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}   
			}
		    else if(displayBoard[i1][j1]=='p'){
		            	int temp=playerP.movepawnB(i1,j1,i2,j2,displayBoard,34);
			            system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}  
		
			}
			else if(displayBoard[i1][j1]=='R'){
				    	int temp=playerR.moverookA(i1,j1,i2,j2,displayBoard,34);
			            system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}  
			}
			else if(displayBoard[i1][j1]=='r'){
			            int temp=playerR.moverookB(i1,j1,i2,j2,displayBoard,34);
			            system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;
						}  
			}
			else if(displayBoard[i1][j1]=='N'){
			        	int temp=playerN.moveknightA(i1,j1,i2,j2,displayBoard,34);
			        	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}  
			}
			else if(displayBoard[i1][j1]=='n'){
			        	int temp=playerN.moveknightB(i1,j1,i2,j2,displayBoard,34);
			        	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}  
			}
			else if(displayBoard[i1][j1]=='B'){
				    	int temp=playerB.movebishopA(i1,j1,i2,j2,displayBoard,34);
				    	system("cls");
					    printboard(displayBoard,34);
					    int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
					    if(temp!=0){
					       temp2++;	
						}   
			}
			else if(displayBoard[i1][j1]=='b'){
				        int temp=playerB.movebishopB(i1,j1,i2,j2,displayBoard,34);
				    	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}   
			}
			else if(displayBoard[i1][j1]=='Q'){
				    	int temp=playerQ.movequeenA(i1,j1,i2,j2,displayBoard,34);
				    	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}   
			}
		    else if(displayBoard[i1][j1]=='q'){
				    	int temp=playerQ.movequeenB(i1,j1,i2,j2,displayBoard,34);
				    	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}   
			}
			else if(displayBoard[i1][j1]=='K'){
				    	int temp=playerK.movekingA(i1,j1,i2,j2,displayBoard,34);
				    	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}   
			}
			else if(displayBoard[i1][j1]=='k'){
				        int temp=playerK.movekingB(i1,j1,i2,j2,displayBoard,34);
				    	system("cls");
			            printboard(displayBoard,34);
			            int cost=winner(displayBoard,34);
			            if(cost==0){
			            	return 0;
						}
						if(temp==0){
							cout<<"Invalid Operation"<<endl;
						}
			            if(temp!=0){
					       temp2++;	
						}   
			}
			else{
				cout<<"Invalid Operation"<<endl;
			}
	}
}

void printboard(char displayBoard[][53],int len){
	
	for(int i = 0; i < len; i++){
		cout<<endl;
		for(int j = 0; j < 53; j++){
			cout<<displayBoard[i][j];
		}
	}
	cout<<endl<<endl;
}

int winner(char displayBoard[][53],int len){
	
	bool t1,t2;
	for(int i = 0; i < len; i++){
		for(int j = 0; j < 53; j++){
			if(displayBoard[i][j]=='k'){
				   t1=1;
			}
	    }
    }
    
    for(int i = 0; i < len; i++){
		for(int j = 0; j < 53; j++){
			if(displayBoard[i][j]=='K'){
				   t2=1;
			}
	    }
    }
    if(t1==0){
    	cout<<"-------------------Congratulations!!!------------------"<<endl;
    	cout<<"-------------------Player 1 is winner------------------"<<endl;
    	return 0;
	}
	else if(t2==0){
		cout<<"-------------------Congratulations!!!------------------"<<endl;
    	cout<<"-------------------Player 2 is winner------------------"<<endl;
    	return 0;
	}
	return 1;
}

