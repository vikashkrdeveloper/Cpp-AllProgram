#include<iostream>
using namespace std;
int main(){
    int PointXInput;
    int PointYInput;
    cout<<"Enter the point X axis : ";
    cin>>PointXInput;
    cout<<"Enter the point Y axis : ";
    cin>>PointYInput;

    if(PointXInput>0 and PointYInput>0){
       cout<<"Your point lie is first quadrant ( "<<PointXInput <<" , "<<PointYInput<<" )";
    }
    else if(PointXInput<0 and PointYInput>0){
       cout<<"Your point lie is Second quadrant ( "<<PointXInput <<" , "<<PointYInput<<" )";

    }
    else if(PointXInput<0 and PointYInput<0){
       cout<<"Your point lie is Third quadrant ( "<<PointXInput <<" , "<<PointYInput<<" )";

    }
    else if(PointXInput>0 and PointYInput<0){
       cout<<"Your point lie is Fourth quadrant ( "<<PointXInput <<" , "<<PointYInput<<" )";

    }

    return 0;
}