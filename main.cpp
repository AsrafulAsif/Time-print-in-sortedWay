#include "SortedType.cpp"
#include "timeStamp.h"
#include <iostream>

using namespace std;

int main()
{

        timeStamp t1(1,2,3);
        timeStamp t2(1,2,6);
        timeStamp t3(7,8,9);
        timeStamp t4(10,11,12);
        timeStamp t5(1,2,15);



        SortedType<timeStamp> time;
        time.InsertItem(t1);
        time.InsertItem(t2);
        time.InsertItem(t3);
        time.InsertItem(t4);
        time.InsertItem(t5);
        cout<<"There are the sorted Time List:"<<endl;
        timeStamp tem1;
        for( int j=0;j<time.LengthIs();j++)
    {
        time.GetNextItem(tem1);
        tem1.print();
    }

    timeStamp d(1,2,3);
    time.DeleteItem(d);
    time.ResetList();
    cout<<endl<<"After deleting Time :"<<endl;
      for( int j=0;j<time.LengthIs();j++)
    {
        time.GetNextItem(tem1);
        tem1.print();
    }

    return 0;
}
