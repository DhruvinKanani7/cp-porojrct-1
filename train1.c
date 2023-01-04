#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

struct pess
{
    char nm[20],gen[6];
    
    
    

}arr[100];
int age;

int cal(int, int, int); //function for calculation of the amount of bill
void seat(int);//function for seat booking
void payment(int);

//global variables
    char ch,source[10],destination[10],train[20],station[20],class[30];
	int a,time1,time2,a1,a2,d,i;
int main()
{
    valueofpassenger:

	system("cls");
	char pass;


    printf("   ______________________________   _____________________________   _______________________________________^__ \n");
printf("|||  ___   ___   ___    ___ ___  ||| ___ ___     ___   ___   ___ |||  ___   ___   ___    ___ ___  |   __  ,----\\ \n");
printf("||| |   | |   | |   |  |   |   | ||||   |   |   |   | |   | |   |||| |   | |   | |   |  |   |   | |  |  | |_____\\ \n");
printf("||| |___| |___| |___|  | O | O | |||| O | O |   |___| |___| |___|||| |___| |___| |___|  | O | O | |  |  |        \\ \n");
printf("|||                    |___|___| ||||___|___|                    |||                    |___|___| |  |__|         ) \n");
printf("|||______________________________|||_____________________________|||______________________________|______________/ \n");
printf("|||                              |||                             |||                                        /--------\n");
printf("'''------------------------------'''-----------------------------'''---------------------------------------'\n");

    
    int i,j,d;
   
   printf("How many passenger==");
	scanf("%c",&pass);
	
	if(pass>=48 && pass<=57)
	{	
			pass=pass-48;
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
			    			    goto valueofpassenger;
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
	}
	else
	{
		printf("\n\t\t\t\t\t\tinput error");
		printf("\t\t\t\t\tpress enter to correct it");
		scanf("%c",&ch);

		if(ch =='y');
		{
			goto valueofpassenger;
		}
		
		
	}

    int a,num;
	char val[20], gen[6],pkey;

	
	details:
	for (i = 1; i <= pass; i++)
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
                    fflush(stdin);
					printf("\nEnter The %dth Passenger Age: ", i);
					scanf("%c",&age);
					if(age>=48 && age<=57)
					{
						printf("\t\t\t\t\tgoto next section");
					
					}
					else
					{
						printf("\t\t\t\t\tplease,keep the vlaues in digits");
						goto age;
					}
				}
			else
			{	
				printf("\t\t\t\t\tenter the coresponding values!");
				
				goto gender;
			}
			
		}
		else
		{
			printf("\t\t\t\t\tkeep text in alphabets!\n");
			goto passenger_name;	
		}
					
	}
    fflush(stdin);
    printf("\n\nenter the source place:\t");
    scanf("%s",source);
    printf("\n");
    printf("\nenter the destination place:\t");
    scanf("%s",destination);
    printf("\n");
    pselect:
	printf("\t\tThe Following trains are Available.....\n");
    printf("\t\t1. Surat Express.........10:00 a.m........Vadodara Station\n");
    printf("\t\t2. Valsad Express..........05:00 p.m........Surat Station\n");
    printf("\t\t3. Ahmedabad Express..........11:00 p.m........ Valsad Station\n");
    printf("\t\t4 Vadodara Express..........05:00 p.m........Surat Station\n");
    printf("\t\t5. Bharuch Express............07:00 a.m.........Vadodara Station\n");

    scanf("%d",&a);
    switch(a)
    {
        case 1: 
        {
            strcpy(train,"Surat Express");
            strcpy(station,"Vadodara Station");
            time1 = 10;
            time2 = 00;
            a1 = 150;
            a2 = 200;

            // Calling cal() function
            // with the three argument
            // and return value
           d = cal(a1, a2, i);
		printf("Total Bill Amount: %d\n", d);
        }; 
        break;
        case 2: 
        {
            strcpy(train,"Valsad Express");
            strcpy(station,"Surat Station");
            time1 = 05;
            time2 = 00;
            a1 = 150;
            a2 = 100;

            // Calling cal() function with
            // three argument & return value
           d = cal(a1, a2, i);
		printf("Total Bill Amount: %d\n", d);
        }; 
        break;
        case 3: 
        {
            strcpy(train,"Ahmedabad Express");
            strcpy(station,"Valsad Station");
            time1 = 11;
            time2 = 00;
            a1 = 360;
            a2 = 350;

            // Calling cal() function with
           d = cal(a1, a2, i);
		printf("Total Bill Amount: %d\n", d);
        }; 
        break;
        case 4:
        {
            strcpy(train, "Vadodara Express");
            strcpy(station, "Suart Station");
            time1 = 05;
            time2 = 00;
            a1 = 125;
            a2 = 120;

            // Calling cal() function with
            // three argument & return value
           d = cal(a1, a2, i);
		printf("Total Bill Amount: %d\n", d);
        };
        break;
        case 5: 
        {
            strcpy(train, "Bharuch Express");
            strcpy(station, "Vadodara Station");
            time1 = 07;
            time2 = 00;
            a1 = 100;
            a2 = 50;

            // Calling cal() function with
            // three argument & return value
           d = cal(a1, a2, i);
		   printf("Total Bill Amount: %d\n", d);
        };
        break;
        default:
            {
                fflush(stdin);
                printf("Enter Correct choice.....\n");
                goto pselect;
                
                
            }break;
            
        }
        printf("Now Book Your Seats......\n");

        //calling seat function
        seat(i);
        payment(i);
        printf("=========================================================THANK YOU HAPPY JOURNEY=========================================================\n");

}

int cal(int y1, int y2, int h)
{
	int b, c, i, t, r, n;
	pcoach:
	printf("\t\tEnter Your Choice......\n");
	printf("\t\t1. Sleeper ....\n");
	printf("\t\t2. Sitting .......\n");
	scanf("%d", &i);
    fflush(stdin);
	switch (i) 
	{
		case 1: 
		{  
			ac:
			printf("\t\tEnter Your Choice....\n");
			printf("\t\t1. Non A.C ....\n");
			printf("\t\t2. A.C ....\n");
			scanf("%d", &n);
            fflush(stdin);
			switch (n) 
			{
				case 1: 
				{
					strcpy(class, "Non A.C");
					b = y2 * h;
					c = b + (b * 0.18);
				}
				break;
				case 2: 
				{
					strcpy(class, "A.C");
					b = (y2 + 100) * h;
					c = b + (b * 0.18);
				}
				break;
				default: 
				{
                    
					printf("\t\tEnter Right Choice......\n");
                    
                    goto ac;
				}break;
				
		}
	}
	 break;
	case 2:
	{
		non_ac:
		printf("\t\tEnter Your Choice....\n");
		printf("\t\t1. Non A.C ....\n");
		printf("\t\t2. A.C ....\n");
		scanf("%d", &n);
        fflush(stdin);
		switch (n) 
		{
		case 1: 
		{
			strcpy(class, "Non A.c");
			b = y1 * h;
			c = b + (b * 0.18);
		}
		break;
		case 2: 
		{
			strcpy(class, "A.C");
			b = (y1 + 1000) * h;
			c = b + (b * 0.18);
		}
		break;
		default: 
		{
			printf("\t\tEnter Right Choice......\n");
		}
		goto non_ac;
		}
	}
	break;
	default: 
	{
		printf("\t\tEnter Right Choice......\n");
	}
	goto pcoach;
	}
	return c;
    
}

void seat(int p)
{
	int q;
    char a[40];
	pseat:
	printf("\t                              -:SEAT MATRIX:-                                   \n");
    printf("\t(U)           (M)                          (L)              (L)              (U)\n\n");
    printf("\t01:-empty     02:-empty                    03:-empty        04:-empty        05:-empty\n\n");
    printf("\t06:-empty     07:-empty                    08:-empty        09:-empty        10:-empty\n");
    printf("\t11:-empty     12:-empty                    13:-empty        14:-empty        15:-empty\n\n");
    printf("\t16:-empty     17:-empty                    18:-empty        19:-empty        20:-empty\n");
    printf("\t21:-empty     22:-empty                    23:-empty        24:-empty        25:-empty\n\n");
    printf("\t26:-empty     27:-empty                    28:-empty        29:-empty        30:-empty\n");
    printf("\t31:-empty     32:-empty                    33:-empty        34:-empty        35:-empty \n\n");
    printf("\t36:-empty     37:-empty                    38:-empty        39:-empty        40:-empty\n");
    printf("\t41:-empty     42:-empty                    43:-empty        44:-empty        45:-empty\n\n");
    printf("\t46:-empty     47:-empty                    48:-empty        49:-empty        50:-empty\n");
	printf("\tEnter Seat Numbers:\n");
	for (q=0;q<p; q++)
		{
			scanf("%d",&a[q]);
		}
        

}
void payment(int x)
{
    int k,y,pass[4];
        char arr[20];
        ppayment:
        printf("\t\tEnter the payment method......\n");
        printf("\t\t1. Online ....\n");
        printf("\t\t2. Cash .......\n");
        scanf("%d", &k);
        switch(k)
        {
            case 1:
            {
                ponline:
                printf("enter paying way\n");
                printf("\t\t1. Paytm ....\n");
                printf("\t\t2. Google Pay ....\n");
                printf("\t\t3. Netbanking ....\n");
                scanf("%d",&y);
                switch(y)
                {
                    case 1:
                    {
                        printf("enter your paytm upi id\n");
                        scanf("%s",arr);
                        printf("enter the password\n");
                        scanf("%d",pass);
                        printf("thank you your bill is paid");
                          
                    }break;
                    case 2:
                    {
                        printf("enter your mobile no.\n");
                        scanf("%s",arr);
                        printf("enter the password\n");
                        scanf("%d",pass);
                        printf("thank you your bill is paid");

                    }break;
                    case 3:
                    {
                        printf("enter your moblie no.\n");
                        scanf("%s",arr);
                        printf("enter the password\n");
                        scanf("%d",pass);
                        printf("thank you your bill is paid");
                    }break;
                    default:
                    {
                        printf("enter the correct choice\n");
                        
                    }break;
                    goto ponline;
                }

            
            }break;
            case 2:
            {
                printf("thank you");
                
            }break;
            default:
            {
                printf("enter the correct choice");
            }
            goto ppayment;
        }
}
