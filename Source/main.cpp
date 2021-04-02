// Scavenger Hunt
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> questions;

    questions.push_back("This is question 1");
    questions.push_back("This is question 2");
    questions.push_back("This is question 3");
    questions.push_back("This is question 4");
    questions.push_back("This is question 5");
    questions.push_back("This is question 6");

    // Answers
    vector<string> answers;
    answers.push_back("B1FFG@#6");
    answers.push_back("Answer 2");
    answers.push_back("Answer 3");
    answers.push_back("Answer 4");
    answers.push_back("Answer 4");
    answers.push_back("Answer 5");
    answers.push_back("Answer 6");

    string start1Text = "Hello! You clicked up then enter? That's the challenge mix. Get ready to be outsmarted!";
    cout << start1Text << endl;

    const int MAX_PLAYERS = 13;
    vector<string> userNames;

    string userNameEntry;

    while (userNameEntry != "Q" && userNames.size() < MAX_PLAYERS)
    {
        cout << "Enter player " << userNames.size() + 1 << "'s name for scavenger hunt enter Q to stop and enter H for Help.*\a\a\a\a" << endl;
        getline(cin, userNameEntry);

        if (userNameEntry == "H")
        {
            cout << "Click Enter to Continue on all clues." << endl;
        }
        else if (userNameEntry != "Q" && userNameEntry != "")
        {
            userNames.push_back(userNameEntry);
            userNameEntry = "";
            cout << "Name Saved" << endl;
        }
        else if (userNameEntry != "")
        {
            cout << "A name is required" << endl;
        }
    }

    if (userNameEntry != "Q" && userNames.size() == MAX_PLAYERS)
    {
        cout << "The maximum number of players have been added" << endl;
    }

    cout << "You entered:" << endl;
    for (int i = 0; i < userNames.size(); i++)
    {
        cout << "Player " << i + 1 << ": " << userNames[i] << endl;
    }
    cout << "Tired of signing in players? This is where the fun happens. Click Enter to continue.";
    cin.get();

    for (int i = 0; i < questions.size(); i++)
    {
        bool answerIsGuessed = false;
        string answer = "";

        while (!answerIsGuessed)
        {
            cout << questions[i] << endl;
            cout << "The answer is " << answers[i] << endl;
            cout << "Your guess? ";
            getline(cin, answer);

            answerIsGuessed = answers[i] == answer;

            if (!answerIsGuessed)
            {
                cout << "That is incorrect, please try again.\a\a\a\n"
                     << endl;
            }
        }

        cout << "\nCorrect!!!!!!!!\a\a\a\a\n"
             << endl;
    }

    cout << "Click Enter to continue." << endl;
    cin.get();

    cout << endl;
    return 0;
}
