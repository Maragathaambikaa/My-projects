/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<ctype.h>
struct eve
{
   char name[30];
   int no;
   char mid[30];
   char pwd[100];
};
void tech()
{
    struct event
	{
		int seat;
		
		int time;
	}e1;
	int totalcost,ticket=100;
	printf("\nEnter the no of seats:");
	scanf("%d",&e1.seat);
	totalcost=e1.seat*ticket;
	printf("Total cost=%d",totalcost);
	scanf("%d",&totalcost);

}
void nontech()
{
    struct event
	{
		int seat;
		int ok;
		int time;
	}e1;
	int totalcost,ticket=100,ok;
	printf("venue:SECE");
	printf("\nEnter the no of seats:");
	scanf("%d",&e1.seat);
	totalcost=e1.seat*ticket;
	printf("Total cost=%d",totalcost);
	scanf("%d",&totalcost);
    printf("Payment:offline mode");
    printf("To confirm booking type ok:%d",ok);
    scanf("%d",&ok);
    if(ok==ok){
     printf("success");   
    }
}

int main()
{
    int has_uppercase = 0;
    int has_lowercase = 0;
    int has_number = 0;
    char pwd[100];
    char mid[30];
    int otp;
    int no,ich,ichoice,ic;
    struct eve s1;
    printf("\n ****EVENT MANAGEMENT SYSTEM****");
    printf("\nName: ");
    scanf("%s", s1.name);
    printf("\nPhone number: ");
    scanf(" %d", &s1.no);
    printf("\nEmail id: ");
    scanf(" %s", s1.mid);
    printf("\nPassword: ");
    scanf(" %s", s1.pwd);
    for (int i = 0; i < strlen(pwd); i++) {
        if (isupper(pwd[i])) {
            has_uppercase = 1;
        } else if (islower(pwd[i])) {
            has_lowercase = 1;
        } else if (isdigit(pwd[i])) {
            has_number = 1;
        }
    }
    if (strlen(pwd) < 7 || !has_uppercase || !has_lowercase || !has_number) {
        printf("Password is not valid. Please make sure it has at least one uppercase letter, one lowercase letter, one number, and a minimum length of 7 characters.\n");
    } else {
        printf("Password is valid.\n");
    }
    printf("Enter otp:");
    scanf("%d",&otp);
    printf("login successful");
   
 
	printf("\n\n1.Technical event.");
	printf("\n\n2.Non Technical event. ");
	printf("\nEnter the choice :");
	scanf("%d",&ichoice);
	switch(ichoice)
	{
		case 1:
			
			printf("\n1.Hackathon");
			printf("\n2.Quiz");
			printf("\n3.Technovista");
			printf("\nEnter the choice for technical event:");
	        scanf("%d",&ich);
			break;
		case 2:
			printf("\n1.Flash mob");
			printf("\n2.Culture");
			printf("\nEnter the choice for non technical event:");
	        scanf("%d",&ic);
			break;	
	}

	switch(ichoice)
	{
		case 1:
			tech();
			break;
		case 2:
		     nontech();	
		     break;
		default:
		   printf("not valid");
	}
			
}
	/*struct event
	{
		int seat;
		
		int time;
		char venue[20];	
	}e1;
	
	int totalcost,ticket=100;
	printf("\nEnter the no of seats:");
	scanf("%d",&e1.seat);
	totalcost=e1.seat*ticket;
	printf("Total cost=%d",totalcost);
	scanf("%d",&totalcost);
*/





