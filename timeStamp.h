#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class timeStamp
{
    public:
        timeStamp();
        timeStamp(int,int,int);
        bool operator>(timeStamp);
        bool operator<=(timeStamp);
        bool operator!=(timeStamp);
        void print();


    private:
        int hour;
        int minute;
        int second;
};

#endif // TIMESTAMP_H
