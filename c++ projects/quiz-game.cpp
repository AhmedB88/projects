#include <iostream>



int main (){

    std::string questions []= { "1. Waht year was c++ created?:",
                                "2. who invented c++?: ",
                                "3. What is the predecessor of c++?: ",
                                "4. Is the Earth falt?: "};

    std::string options [][4] =  {{"A. 1969 ", "B. 1975 ", "C. 1985 ", "D. 1989 "},
                                {"A. Guido van Rossum ", "B. Bjarne Stroustrup ", "C. John Cina ", "D. Mark Zuckerburg "},
                                {"A. C ", "B. C+ ", "C. C-- ", "D. B++ "},
                                {"A. yes ", "B. No ", "C. Sometmes ", "D. What is Earth "}};
                                
    char answers [] = {'C', 'B', 'A', 'B'}; 
    char guess;
    int score = 0;
    int sizeQuestions = sizeof(questions)/sizeof(questions[0]);
    int sizeOptions = sizeof(options)/sizeof(options[0]);
    int sizeAnswers = sizeof(answers)/sizeof(answers[0]);
    
    for (int i = 0; i < sizeQuestions; i++)
    {
        std::cout <<  questions [i] << '\n';
        for (int j = 0; j < sizeOptions; j++)
        {
          std::cout << options [i][j] << '\n';
        }

    std::cin >> guess;
    guess = toupper(guess);
    
        if (guess == answers[i])
        {
            std::cout << "CORRECT! \n";
            score++;
        }
        

    }
    
    std::cout << score;

};
