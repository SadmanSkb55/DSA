#include <iostream>
#include"timestamp.h"

using namespace std;

timestamp::timestamp(){
    ss=mm=hh=0;
}
timestamp::timestamp(int ss,int mm,int hh){
    this->ss=ss;
    this->mm=mm;
    this->hh=hh;
}
void timestamp::print(){
    cout<< ss << ":" << mm <<":"<<hh<<endl;
}
int timestamp::getseconds(){
    return ss;
}
int timestamp:: getMinutes(){
    return mm;
}
int timestamp:: getHours(){
    return hh;
}
