#include "timeStamp.h"
#include <iostream>


using namespace std;

timeStamp::timeStamp()
{
    hour=0;
    minute=0;
    second=0;
}

timeStamp::timeStamp(int h,int m,int s)
{
    this->hour=h;
    this->minute=m;
    this->second=s;
}

bool timeStamp::operator>(timeStamp t)
{
    int a,b;
    a=(this->hour*60*60)+(this->minute*60)+(this->second);
    b=(t.hour*60*60)+(t.minute*60)+(t.second);

    return (a>b);
}

bool timeStamp::operator<=(timeStamp t)
{
     int a,b;
    a=(this->hour*60*60)+(this->minute*60)+(this->second);
    b=(t.hour*60*60)+(t.minute*60)+(t.second);

    return (a<=b);
}

bool timeStamp::operator!=(timeStamp t)

{
    return(this->hour!=t.hour || this->minute!=t.minute ||this->second!=t.second );
}

void timeStamp::print()
{
    cout<<hour<<" "<<minute<<" "<<second<<endl;
}
