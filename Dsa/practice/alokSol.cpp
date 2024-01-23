#include <iostream>
using namespace std;
double alokSeries(int x, int n){
    int upNum = 1, y;
    long double e;
    double i_fact = 1  ,series = 0, upTerm;
    for(int i =1; i<=n; i++){
        i_fact = i_fact * i;    
        y = x * i;  //new power of e^ix
        e = 1 + y/1.000 + (y*y)/2.000 + (y*y*y)/6.000 + (y*y*y*y)/24.000 + (y*y*y*y*y)/120.000 + (y*y*y*y*y*y)/720.000 + (y*y*y*y*y*y*y)/5040.000 + (y*y*y*y*y*y*y*y)/40320.000 + (y*y*y*y*y*y*y*y*y)/362880.000 + (y*y*y*y*y*y*y*y*y*y)/3628800.000;
        upTerm = 1 + e;
        series = series + (upTerm/i_fact);
        // cout<<fixed<<setprecision(8)<<"e:"<<e<<endl;
        // cout<<i<<"upTerm"<<upTerm<<endl;
        // cout<<i<<"seriesTerm"<<series<<endl;
    }
    return series;
int main(){
}
    int x, n;
    cout<<"x:";
    cin>>x;
    cout<<"n:";
    cin>>n;
    cout<<alokSeries(x , n)<<endl;
}