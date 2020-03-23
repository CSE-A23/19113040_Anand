#include <iostream>
using namespace std;
class time              
{
    private:
    int hr,min,sec;
    char me[5];
    public:
    void get()
    {
        cout<<"Enter the time\n";
        cin>>hr>>min>>sec>>me;
    }
    void calculate(time t1,time t2)
    {
        int h,m,s;
        {
            if(t2.hr>t1.hr)                 
            {
                h=t2.hr-t1.hr;
                m=t2.min-t1.min;
                if(m<0)
                {   
                    --h;                 
                    m=60+m;
                }
                s=t2.sec-t1.sec;
                if(s<0)
                {
                    --m;               
                    s=60+s;
                }
                 if(m<0)
                {   
                    --h;                 
                    m=60+m;
                }
            }
            else                          
            {
                h=t1.hr-t2.hr;
                m=t1.min-t2.min;
                if(m<0)
                {   
                    --h;
                    m=60+m;
                }
                s=t1.sec-t2.sec;
                if(s<0)
                {
                    --m;
                    s=60+s;
                }
                if(m<0)
                {   
                    --h;             
                    m=60+m;
                }
            }
            cout<<"Time difference: "<<h<<":"<<m<<":"<<s;
    }
};
int main()
{
    class time t1,t2;
    t1.get();
    t2.get();
    t1.calculate(t1,t2);
}
