#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Person{	// Given
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification)	{
			this->firstName= firstName;
			this->lastName= lastName;
			this->id= identification;
			// cout<<"Person constructor"<<endl;
		}
		void printPerson(){
			cout<< "Name: " <<lastName<< ", " <<firstName<< "\nID: "<<id<<"\n";
		}
};

class Student :	public Person 	{
	private: 
		vector<int> testScores;
	public:
		// Constructor
		Student(string 	firstName, string 	lastName, int 	identification, vector<int> v)
		:Person(		firstName, 		 	lastName, 		identification)
		{
			this->testScores=v;
			// cout<<"Student constructor"<<endl;
		}
		// Calculate
		char calculate();
};

char Student::calculate()
{
	int total_result=0;
	for(auto x:testScores)
		total_result+=x;

	double score= (double) total_result/testScores.size();
	// cout<<score;
	if 		(score < 40)
		return 'T';
	else if (score < 55)
		return('D');
	else if (score < 70)
		return('P');
	else if (score < 80)
		return('A');
	else if (score < 90)
		return('E');
	// else if (score<=100)	// Compile warning
	else
		return('O');
}

int main() {	// Given
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}