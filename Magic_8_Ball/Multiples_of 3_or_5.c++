 #include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

const std::string answers[] = {
    "It is certain.",
    "It is decidedly so.",
    "Without a doubt.",
    "Yes - definitely.",
    "You may rely on it.",
    "As I see it, yes.",
    "Most likely.",
    "Outlook good.",
    "Yes.",
    "Signs point to yes.",
    "Reply hazy, try again.",
    "Ask again later.",
    "Better not tell you now.",
    "Cannot predict now.",
    "Concentrate and ask again.",
    "Don't count on it.",
    "My reply is no.",
    "My sources say no.",
    "Outlook not so good.",
    "Very doubtful."
};

const int num_answers = sizeof(answers) / sizeof(answers[0]);

void magic_8_ball() {
    std::string question;
    std::cout << "Ask the magic 8 ball a yes or no question: ";
    std::getline(std::cin, question);

    if (!question.empty()) {
        srand(time(NULL));
        int random_index = rand() % num_answers;
        std::cout << "The answer is: " << answers[random_index] << std::endl;
    } else {
        std::cout << "Please ask a question." << std::endl;
    }
}

int main() {
    magic_8_ball();
    return 0;
}
