#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};
bool cmp(date d1, date d2){
    if(d1.year!=d2.year){
        return d1.year<d2.year;
    }else{
        if(d1.month!=d2.month){
            return d1.month<d2.month;
        }else{
            return d1.day<d2.day;
        }
    }
}
int main(){
    int day;
    int month;
    int year;
    vector<date> v;
    while(cin>>day){
        if(day==0) break;
        cin>>month;
        cin>>year;
        date dd;
        dd.day=day;
        dd.month=month;
        dd.year=year;
        v.push_back(dd);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        printf("%02d ", v[i].day);
        printf("%02d ", v[i].month);
        printf("%04d\n", v[i].year);
    }
    return 0;
}