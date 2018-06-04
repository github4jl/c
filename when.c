/* when.c
* 2016/09/10 built
* shows date, time mm/dd/yyyy hh:mm:ss
*/
#include <time.h>
#include <stdio.h>

int main(void)
{
    time_t rawtime;
    time_t unixtime;
    struct tm * timeinfo;
/* print formatted */
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf("%02d/%02d/%4d %02d:%02d:%02d\n",timeinfo->tm_mon + 1,timeinfo->tm_mday, timeinfo->tm_year + 1900, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
/* print unix-like */
    unixtime = time(NULL);
    printf(ctime(&unixtime));
    return(0);
}
