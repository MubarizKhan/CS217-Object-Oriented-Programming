#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int numofquestions = 20;
const int NUMBER_OF_STUDENTS = 50;

void readFile(ifstream& inFile);
void markTest(char studentAnswers[][numofquestions], string studentIDs[], char correctAnswers[]);
char assignGrade(int score);


int main()
{

    string studentIDs[NUMBER_OF_STUDENTS];
    char correctAnswers[numofquestions +1];
    char studentAnswers[NUMBER_OF_STUDENTS][numofquestions];
    ifstream inFile;

    readFile(inFile);

    // Read the correct answers first
    inFile.getline(correctAnswers, '/n');

    // Read each students ID and answers
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        inFile >> studentIDs[i]; // Grab the student IDs
        inFile.get(); // Discard the space between the student ID and the answers
        for (int j = 0; j < numofquestions; j++)
            studentAnswers[i][j] = inFile.get(); // Grab the students answers
    }

    markTest(studentAnswers, studentIDs, correctAnswers);

    return 0;
}

void markTest(char studentAnswers[][numofquestions], string studentIDs[], char correctAnswers[]) {
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
        cout << "Student ID: " << studentIDs[i] << endl;
        int score = 0;
        cout << "Answers: ";
        for (int j = 0; j < numofquestions; j++) {
            cout << studentAnswers[i][j];
            if (studentAnswers[i][j] == correctAnswers[j])
                score += 2; // Correct answer
            else if (studentAnswers[i][j] != correctAnswers[j] && studentAnswers[i][j] != ' ')
                score -= 1; // Incorrect answer but not a blank
        }
        if (score < 0)
            score = 0; // Don't allow for minus scores

        cout << endl;
        char grade = assignGrade(score);
        cout << "Grade: " << grade << endl << endl;
    }
}

char assignGrade(int score) {
    double percentScore = static_cast<double>(score) / (numofquestions*2);
    cout << "Score: " << percentScore*100 << "%" << endl;
    if (percentScore >= 0.9)
        return 'A';
    else if (percentScore >= 0.8)
        return 'B';
    else if (percentScore >= 0.7)
        return 'C';
    else if (percentScore >= 0.6)
        return 'D';
    else
        return 'F';
}

void readFile(ifstream& inFile) {
    inFile.open("tf.txt");
    if (!inFile){
        cout << "There was an error opening the input file" << endl;
        exit(1);
    }

}
		
