#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h> 


enum ECOM_States{ECOM_ItemOne} Ecom_State;
 void Start_Game()
{
    unsigned char item;
    unsigned char y;
    unsigned char n;
  switch (Ecom_State)
  {
    case ECOM_ItemOne:
    printf("Item 1 selected.\n");
    printf("Name of the Item is JAVA BOOK.\n");
    printf("PRICE: $52 \n");
    printf("Would you like to place an order? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! Your order has been placed! \n", item );
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMONE_States{ECOM_ItemOneStatus} Ecom_ONEState;
  void Check_StatusOne()
  {
    printf( "Your Food will be delievred in 10 seconds: \n");
    printf ("10 \n");
       sleep(1);
       printf ("9 \n");
       sleep(1);
       printf ("8 \n");  
       sleep (1);
       printf ("7 \n");
       sleep(1);
       printf ("6 \n");
       sleep(1);
       printf ("5 \n");  
       sleep (1);
       printf ("4 \n");
       sleep(1);
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");  
       sleep (1);
       printf("1 \n");
       printf("delievred \n");

  }

enum ECOMTWO_States{ECOM_ItemTWO} ECOM_TWOState;
 void ITEM_TWO()
{
    unsigned char item;
    unsigned char y;
    unsigned char n;
   switch (Ecom_State)
  {
    case ECOM_ItemOne:
    printf("Item 1 selected.\n");
    printf("Name of the Item is C++ BOOK.\n");
    printf("PRICE: $75 \n");
    printf("Would you like to place an order? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! Your order has been placed! \n", item );
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMTWOSTATUS_States{ECOM_ItemTwoStatus} Ecom_TWOSTATUSState;
  void Check_StatusTwo()
  {
    printf( "Your Food will be delievred in 10 seconds: \n");
    printf ("10 \n");
       sleep(1);
       printf ("9 \n");
       sleep(1);
       printf ("8 \n");  
       sleep (1);
       printf ("7 \n");
       sleep(1);
       printf ("6 \n");
       sleep(1);
       printf ("5 \n");  
       sleep (1);
       printf ("4 \n");
       sleep(1);
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");  
       sleep (1);
       printf("1 \n");
       printf("delievred \n");

  }

  enum ECOMTHREE_States{ECOM_ItemTHREE} ECOM_THREEState;
 void ITEM_THREE()
{
    unsigned char item;
    unsigned char y;
    unsigned char n;
   switch (Ecom_State)
  {
    case ECOM_ItemOne:
    printf("Item 1 selected.\n");
    printf("Name of the Item is C BOOK.\n");
    printf("PRICE: $45 \n");
    printf("Would you like to place an order? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! Your order has been placed! \n", item );
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMTHREESTATUS_States{ECOM_ItemThreeStatus} ECOM_THREESTATUSState;
  void Check_StatusThree()
  {
    printf( "Your Food will be delievred in 10 seconds: \n");
    printf ("10 \n");
       sleep(1);
       printf ("9 \n");
       sleep(1);
       printf ("8 \n");  
       sleep (1);
       printf ("7 \n");
       sleep(1);
       printf ("6 \n");
       sleep(1);
       printf ("5 \n");  
       sleep (1);
       printf ("4 \n");
       sleep(1);
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");  
       sleep (1);
       printf("1 \n");
       printf("delievred \n");

  }

enum ECOMONERETURN_States{Ecom_ItemOneReturn} ECOM_ONERETURNState;
void Return_one()
{
    unsigned char item;
    unsigned char y;
    unsigned char n;
   switch (Ecom_State)
  {
    case ECOM_ItemOne:
    printf("You are Returning Item 1. \n");
    printf("Would you like to return this item? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! Return will start soon! \n", item );
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMTWORETURN_States{Ecom_ItemTwoReturn} ECOM_TWORETURNState;
void Return_two()
{
    unsigned char item;
    unsigned char y;
    unsigned char n;
   switch (Ecom_State)
  {
    case ECOM_ItemOne:
    printf("You are Returning Item 2. \n");
    printf("Would you like to return this item? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! Return will start soon! \n", item );
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMTHREERETURN_States{Ecom_ItemThreeReturn} ECOM_THREERETURNState;
void Return_Three()
{
    unsigned char item;
    unsigned char y;
    unsigned char n;
   switch (Ecom_State)
  {
    case ECOM_ItemOne:
    printf("You are Returning Item 1. \n");
    printf("Would you like to return this item? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! Return will start soon! \n", item );
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMONETIP_States{ECOM_ItemOneTip} ECOM_ONETIPState;
 void ITEM_ONETIP()
 {
    unsigned char item;
    unsigned char y;
    unsigned char n;
    unsigned int t;
   switch (Ecom_State)
  {
    case ECOM_ItemOneTip:
    printf("Do you want to send a tip to driver? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! How much tip would you like to send? \n", item );
      scanf("%d", &t);
      printf("Your Tip of %d has been added\n", t);
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}
 
 
  
//enum ECOMONERETURN_States {Ecom_ItemOneReturn} //ECOM_ONERETURNState;
//void Return_One()
//{
  //unsigned char item;
    //unsigned char y;
    //unsigned char n;
   //switch (Ecom_State)
  //{

  
//}
enum ECOMTWOTIP_States{ECOM_ItemTwoTip} ECOM_TWOTIPState;
 void ITEM_TWOTIP()
 {
    unsigned char item;
    unsigned char y;
    unsigned char n;
    unsigned int t;
   switch (Ecom_State)
  {
    case ECOM_ItemOneTip:
    printf("Do you want to send a tip to driver? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! How much tip would you like to send? \n", item );
      scanf("%d", &t);
      printf("Your Tip of %d has been added\n", t);
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMTHREETIP_States{ECOM_ItemThreeTip} ECOM_THREETIPState;
 void ITEM_THREETIP()
 {
    unsigned char item;
    unsigned char y;
    unsigned char n;
    unsigned int t;
   switch (Ecom_State)
  {
    case ECOM_ItemOneTip:
    printf("Do you want to send a tip to driver? Type Y OR N \n" );
    scanf("%s",&item);
    if ( item == 'y')
    {
      
      printf("%c it is! How much tip would you like to send? \n", item );
      scanf("%d", &t);
      printf("Your Tip of %d has been added\n", t);
      
    }
    
    else if ( item == 'n') 
    {
       printf( "Okay! Back to Main Menu in \n" );  
       printf ("3 \n");
       sleep(1);
       printf ("2 \n");
       sleep(1);
       printf ("1 \n");        
    }
      break;
    
  }
}

enum ECOMONERATE_States{ECOM_OneRate} ECOM_ONERATEState;
void Rate_One()
{ 
  unsigned int r;
  printf("How was the food? please rate from 1 being bad and 5 being excellent!\n");
  scanf("%d", &r);
  printf("You have rated %d \n", r); 
  printf("Thank you!\n");
}

enum ECOMTWORATE_States{ECOM_TwoRate} ECOM_TWORATEState;
void Rate_Two()
{ 
  unsigned int r;
  printf("How was the food? please rate from 1 being bad and 5 being excellent!\n");
  scanf("%d", &r);
  printf("You have rated %d \n", r); 
  printf("Thank you!\n");
}

enum ECOMTHREERATE_States{ECOM_THREERate} ECOM_THREERATEState;
void Rate_Three()
{ 
  unsigned int r;
  printf("How was the food? please rate from 1 being bad and 5 being excellent!\n");
  scanf("%d", &r);
  printf("You have rated %d \n", r); 
  printf("Thank you!\n");
}


int main()
{
    int i; 
    
    printf("Welcome to the main MENU.\n");
    printf("You will have three items to choose from.\n");
    printf(" Press: 1 = ORDER ITEM 1 \n");
    printf(" Press: 2 = CHECK STATUS FOR ITEM 1\n");
    printf(" Press: 3 = ORDER ITEM 2 \n");
    printf(" Press: 4 = CHECK STATUS FOR ITEM 2\n");
    printf(" Press: 5 = ORDER ITEM 3 \n");
    printf(" Press: 6 = CHECK STATUS FOR ITEM 3\n");
    printf(" Press: 7 RETURN ITEM ONE \n");
    printf (" Press: 8 RETURN ITEM TWO \n");
    printf(" Press: 9 RETURN ITEM THREE \n");
    printf(" Press: 10 ADD TIP TO ITEM 1 DRIVER \n");
    printf(" Press: 11 ADD TIP TO ITEM 2 DRIVER \n");
    printf(" Press: 12 ADD TIP TO ITEM 3 DRIVER \n");
    printf(" Press: 13 RATE ITEM 1\n");
    printf(" Press: 14 RATE ITEM 1\n");
    printf(" Press: 15 RATE ITEM 1\n");

    scanf("%d", &i);
    printf( "You entred %d \n", i);
    if ( i == 1) 
    {
      Start_Game();

    } else if ( i == 2) 
    {
      Check_StatusOne();

    } else if ( i == 3)
    {
      ITEM_TWO();

    } else if ( i == 4)
    {
      Check_StatusTwo();

    } else if ( i == 5)
    {
      ITEM_THREE();

    } else if ( i == 6)
    {
      Check_StatusThree();

    } else if ( i == 7)
    {   
       Return_one();

    } else if ( i == 8)
    {
      Return_two();
    } else if ( i == 9)
    {
      Return_Three();
    } else if ( i == 10)
    {
      ITEM_ONETIP();
    } else if ( i == 11)
    {
      ITEM_TWOTIP();
    } else if ( i == 12)
    {
      ITEM_THREETIP();

    } else if ( i == 13)
    {
      Rate_One();
    } else if ( i == 14)
    {
      Rate_Two();
    } else if ( i == 15)
    {
      Rate_Three();
    }

    
	return 0;
}


