#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
char ch;
int details(int k);

int main()
{
	
	value_of_passenger:

	system("cls");
	int pass;


/*train test art*/
printf("   ______________________________   _____________________________   _______________________________________^__ \n");
printf("|||  ___   ___   ___    ___ ___  ||| ___ ___     ___   ___   ___ |||  ___   ___   ___    ___ ___  |   __  ,----\\ \n");
printf("||| |   | |   | |   |  |   |   | ||||   |   |   |   | |   | |   |||| |   | |   | |   |  |   |   | |  |  | |_____\\ \n");
printf("||| |___| |___| |___|  | O | O | |||| O | O |   |___| |___| |___|||| |___| |___| |___|  | O | O | |  |  |        \\ \n");
printf("|||                    |___|___| ||||___|___|                    |||                    |___|___| |  |__|         ) \n");
printf("|||______________________________|||_____________________________|||______________________________|______________/ \n");
printf("|||                              |||                             |||                                        /--------\n");
printf("'''------------------------------'''-----------------------------'''---------------------------------------'\n");


	printf("How many passenger==");
	scanf("%d",&pass);
	if(pass>1 && pass<=20)
		{
			printf("Please enter the details of the passengers\n");
		}
	else if (pass==1)
		{
			printf("Please enter the details of the passenger\n");
		}
	else if(pass>=21)
	{
		printf("sorry! maximum amount of passenger\n");

		/*sending user to refill it*/
		again:
    	printf ("\n\t\t\t\t\tDo you want to repeat the operation(Y/N): ");
    	scanf (" %c", &ch);

    	if(ch == 'y' || ch == 'Y')
			{
    		    goto value_of_passenger;
    		}
    	else if(ch == 'n' || ch == 'N')
			{
    		    return 0;
    		}
    	else
			{
    		    printf("\n\t\t\t\t\tPlease enter Yes or NO.\n");
    		    goto again;
    		}
	}
	details(pass);

}

/* passenger's details */
int details(int k)
{
	int i, a,num;
	char val[20], gen[6];
	int age[2];
	details:
	for (i = 1; i <= k; i++)
	
	 {
		passenger_name:
		printf("Enter The %dth Passenger Name: ", i);
		scanf("%s",&val[i]);
		if( val[i]>=65 && val[i]<=90 || val[i]>=97 && val[i]<=122 )//i only user only enter alphabtic values
		{
			gender:
			printf("\nEnter The %dth Passenger Gender(M/F): ", i);
			scanf("%s",&gen[i]);
			if(gen[i]=='m'|| gen[i]=='M' || gen[i]=='f' || gen[i]=='F')
				{
					age:
					printf("\nEnter The %dth Passenger Age: ", i);
					scanf("%d",&age);
					if(age[i]>=48 && age[i]<=57)
					{
						printf("\t\t\t\t\tgoto next section");
					
					}
					else
					{
						printf("\t\t\t\t\tplease,keep the vlaues in digits");
						Sleep(3);
						goto age;
					}
				}
			else
			{	
				printf("\t\t\t\t\tenter the coresponding values!");
				Sleep(2);
				goto gender;
			}
			
		}

		else
		{
			printf("\t\t\t\t\tkeep text in alphabets!\n");
			Sleep(3);
			goto passenger_name;
			
		}

		
		
		/*
		printf("\nEnter The %dth Passenger Age: ", i);
		scanf("%d",&age);
		if(val[i]>=48 && val[i]<=57)
		
		 
		*/
		
	}
	return 0;
}




