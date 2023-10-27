#include<iostream>
using namespace std;
int main()
{
    int StudentMarksInput;
    cout<<"Enter the Student Marks : ";
    cin>>StudentMarksInput;
    if(StudentMarksInput>=81 and StudentMarksInput<=100){
        cout<<"Very Good marks : "<<StudentMarksInput;
    }
    else if(StudentMarksInput>=61 and StudentMarksInput<=80){
        cout<<"Good marks : "<<StudentMarksInput;

    }else if(StudentMarksInput>=41 && StudentMarksInput <=60){
        cout<<"Average : "<<StudentMarksInput;

    }else{
        cout<<"Fail : "<<StudentMarksInput;

    }

    return 0;
}