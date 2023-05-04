#include <stdio.h>
    #include <conio.h>
    #include <process.h>
     
    void main()
    {

	char szBuff [] = "Newland123";
   
    FILE *nRet = popen("/dev/usb/lp0", "w");
	
	if(nRet==NULL) 
		{ 
		printf(" print string not run "); 
		} 

	fprintf(nRet, "Printer printing string: %s",szBuff);

	pclose(nRet);
	
	}
