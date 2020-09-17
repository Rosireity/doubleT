#ifndef	_POW_H
#define	_POW_H
#endif


/***********次方***********/
int pow(a,b)
{
    int a,b,c,i;
    c=a;
    if(b==0)
    {
        return 1;
        }
    for(i=0;i<b;i++)
    {
        
        c=c*a;
        }
     return c;
}


