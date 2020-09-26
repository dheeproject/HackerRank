*****************************************Problem Description**************************************************
Task
You are given two classes, Person and Student, where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

A Student class constructor, which has 4 parameters:
A string, firstname.
A string, lastname.
An integer, id.
An integer array (or vector) of test scores, scores.
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:
Grading.png

Input Format

The locked stub code in your editor calls your Student class constructor and passes it the necessary arguments. It also calls the calculate method (which takes no arguments).

You are not responsible for reading the following input from stdin:
The first line contains firstname, lastname and id respectively. The second line contains the number of test scores. The third line of space-separated integers describes .

Output Format

This is handled by the locked stub code in your editor. Your output will be correct if your Student class constructor and calculate() method are properly implemented.
*********************************************Solution*******************************************************************
#include<string.h>
class Student :  public Person{
	private:
		vector<int> testScores;
        string firstName;
        string lastname;
        int id;
        int siz;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here

         
       Student(string f,string l,int d, vector<int> scores):Person(f,l,d)
       {
         this->testScores=scores;
        siz=testScores.size();
       }
char calculate()
{int sum=0;
int avg=0;
for(int i=0;i<siz;i++)
{
sum+=testScores[i];
}
avg=sum/siz;
if(avg>=90&&avg<=100)
return 'O';
else if(avg>=80&&avg<90)
return 'E';
else if(avg>=70&&avg<80)
return 'A';
else if(avg>=55&&avg<70)
return 'P';
else if(avg>=40&&avg<55)
return 'D';
else
return 'T';
}
};
