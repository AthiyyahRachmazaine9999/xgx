#include <stdio.h>

int main()
{
	int nRet = 0;
    FILE *nRet;

    nRet = popen("lp","w");
    if( nRet==NULL ) 
    {
        fprintf(stderr," NAPI_PrnOpenDev not run `\n");
        return(1);
    }

    fprintf(nRet,"connect to printer\n");

    pclose(nRet);
    return(0);
}