#include <stdio.h> 
    #include <conio.h> 
    #include <process.h> 
     
    void main() 
    { 
    int i,j,r,c; 
    char name[10],command[20]; 
    FILE *nRet; 
    //clrscr(); 
    printf("Enter any file-name:"); 
    scanf("%s",name); 
    nRet=fopen(name,"w"); 
    if(nRet==NULL) 
    { 
    printf("NAPI_PrnStart not run"); 
    } 
    printf(" row(height) and col(with) : "); 
    scanf("%d%d",&r,&c); 
    fprintf(nRet,"User entered Height(ROW)=%d and Width(COL)=%d\n\n",r,c); 
    for(i=1;i<=r;i++) 
    { 
    for(j=1;j<=c;j++) 
    { 
    if(j==1 && i==1) 
    { 
    fprintf(nRet,"+"); 
    } 
    else if(j==c && i==1) 
    { 
    fprintf(nRet,"+"); 
    } 
    else if(j==1 && i==r) 
    { 
    fprintf(nRet,"+"); 
    } 
    else if(j==c && i==r) 
    { 
    fprintf(nRet,"+"); 
    } 
    else if(i>1 && i<r) 
    { 
        if(j>1 && j<c) 
               {fprintf(nRet," ");  } 
        else  
            {fprintf(nRet,"|");  } 
    } 
     
    else 
    fprintf(nRet,"-"); 
    } 
    fprintf(nRet,"\n"); 
    } 
    fclose(nRet); 
    printf("Output saved to file: %s",name); 
    printf("\nPress any key to open and print the file..."); 
    sprintf(command,"start %s",name);  
    system(command); 
    sprintf(command,"NOTEPAD /p %s",name); 
    system(command); 
    getch(); 
    } 
	
