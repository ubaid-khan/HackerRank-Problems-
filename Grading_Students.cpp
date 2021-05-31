#include<iostream>
#include<vector>
using namespace std;
vector<int> gradingStudents(vector<int> grades) {
    for(int i = 1; i <= grades.size(); i++){
        int temp = grades[i - 1];
        //finding nearest multiple of 5 of grade/marks
        while(temp % 5 != 0){
            temp += 1;
        }
        //check if difference is less than 3 and marks are greater than or equal to 38
        if(temp - grades[i - 1] < 3 && grades[i - 1] >= 38){
            grades[i - 1] = temp; // rounding the grade to next multiple of 5
        }
    }
    return grades;
}
int main(void){
    vector<int> grades(5);
    cout<<"Enter the number of students followed by grades of each student:"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>grades[i];
    }
    grades = gradingStudents(grades);
    for(int i = 0; i < 5; i++)
    {
        cout<<grades[i]<<" ";
    }
}
