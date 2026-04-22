#include <stdio.h>

enum month {January = 1, February, March, April, May, June, July, 
                August, September, October, November, December};

const char *monthName(enum month m) //const char * is the return type, monthName is the function name, enum month m is the parameter
//a string literal is stored in memory, and the function returns the address of its first character.
{
    switch(m){
        case January:   return "January-1";
        case February:  return "February-2";
        case March:     return "March-3";
        case April:     return "April-4";
        case May:       return "May-5";
        case June:      return "June-6";
        case July:      return "July-7";
        case August:    return "August-8";
        case September: return "September-9";
        case October:   return "October-10";
        case November:  return "November-11";
        case December:  return "December-12";
        default:        return "Bad month"; //must have a default case
    }
}

int main(void)
{
    enum month aMonth = October;
    printf("%s\n", monthName(aMonth));
    return 0;
}