#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Should i go to the college : " << endl;
    cout << "a. Yes" << endl
         << "b. No" << endl
         << "c. lets think about it, Man" << endl;

    cout << "So what do you think, Shubham : ";

    char ans_1;
    cin >> ans_1;

    if (ans_1 == 'a')
    {
        cout << "Jaa yaar, kya hi boloon, lagta hai sudhar gaya tu" << endl;
    }
    else if (ans_1 == 'b')
    {
        cout << "Achha beta kyun nahi jana college mere bhai ko aaj ?" << endl;
        string ans_2;
        while (ans_2.length() == 0)
        {
            getline(cin, ans_2);
        }
        string reason = "bhai raat main neend nahi hui";
        if (ans_2 == reason)
        {
            cout << "chal yaar phir thik hai, mat jaa soo jaa" << endl;
        }
        else
        {
            cout << "koi bahana nahi chalega, chup chap college jaa" << endl;
        }
    }
    else
    {
        cout << "okkk, bata kya hua ? kuch serious matter lag raha hai" << endl;
        bool is_true;
        do
        {
            is_true = false;
            string reasons[8] = {
                "bhai ki ladai ho gayi kal hostel main",

                "assignments complete nahi hain",

                "copy complete nahi hai",

                "college main dam hai nahi",

                "professor dhang ka padhate hain nahi",

                "Placement vaha se howat naa",

                "attendence ke toh pehle hi lage hue hain",

                "koi hamse dosti karta nahi"};
            string ans_3;
            while (ans_3.length() == 0)
            {
                getline(cin, ans_3);
            }
            if (reasons[0] == ans_3)
            {
                cout << "bhai bata kon lada tere se, collge ki aisi taisi pehle yeh matter sort hoga" << endl;
                cout << "per pehle yeh bata ladai seniors se toh nahi hai ?" << endl;
                string ans_4;
                cin >> ans_4;
                if (ans_4 == "yes")
                {
                    cout << "rehen de bhai, tu to college jaa chup chap padhai kar" << endl;
                }
                else
                {
                    cout << "chal mu phod ke aayenge saale ka" << endl;
                }
            }
            else if (reasons[1] == ans_3 || reasons[2] == ans_3 || reasons[6] == ans_3 || reasons[4] == ans_3)
            {
                cout << "Phir toh mat hi jaa toh baccha rahega" << endl;
            }
            else if (reasons[3] == ans_3 || reasons[5] == ans_3)
            {
                cout << "bhai abb ye sab talks koi kaam ki nahi hai , placements ho ya naa ho , college main dam ho yaa na ho , per abb toh yahi padhna hai, toh jao college" << endl;
            }
            else if (reasons[7] == ans_3)
            {
                cout << "bhai iske liye toh college jana hi sabse jarurri hai saale" << endl;
            }
            else
            {
                cout << "sahi reason bata naa saale" << endl;
                is_true = true;
            }
        } while (is_true);
    }
    cout << endl
         << endl
         << "Made by Shubham Tiwari" << endl;

    return 0;
}
