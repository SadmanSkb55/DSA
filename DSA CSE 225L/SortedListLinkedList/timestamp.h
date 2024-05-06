
class timestamp{

public:
    timestamp();
    timestamp(int ss,int mm,int hh);
    void print();
    int getseconds();
    int getMinutes();
    int getHours();

private:
    int ss,mm,hh;

};
