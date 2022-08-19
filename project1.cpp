#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

class Question
{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;

    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string, string, string, int, int);
    void askQuestion();
};

void Question::setValues(string q, string a1, string a2, string a3, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << Question_Text;
    cout << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;

    cout << "What is your answer ?" << endl;
    cin >> Guess;

    if (Guess == Correct_Answer)
    {
        cout << "Great! You are correcct." << endl;
        Total = Total + Question_Score;

        cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl;
    }
    else
    {
        cout << "Oh No! You are Wrong." << endl;
        cout << "Score:  0  "
             << "Out of " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
    }
    cout << endl;
}

int main()
{

    string Name1;
    cout << "Name of player 1: " << endl;
    cin >> Name1;

    int age;
    cout << "how old are you??" << endl;
    cin >> age;

    cout << "                          WARNING                  " << endl;
    cout << "            kimds not allowed to play this game                    " << endl;  
    cout << "             apne risk pe khele apke kafi sare raaz khul sakte hain                  " << endl;
  cout << endl;
    cout << "LET'S START WITH THE QUIZ" << endl;
    cout << endl;

    Question q1;
    Question q2;

   

    q1.setValues("what is the only functions all c++ progrms must contains",
                 "start()",
                 "system()",
                 "main()",
                 3,
                 10);

    q2.setValues("which of the following is a correct comment to use?",
                 "*/ Commments */",
                 "/* Comments */",
                 "**Comments**",
                 2,
                 10);

   
    q1.askQuestion();
    q2.askQuestion();
    
    

    cout << " Your total score is " << Total << "out of 50 " << endl;
    cout << endl;

    if (Total >= 30)
    {
        cout << "***** CONGRATULATIONS YOU PASSED THE QUIZ!! *****";
    }
    else
    {
        cout << "*****Better luck next time*****";
    }
    return 0;
}