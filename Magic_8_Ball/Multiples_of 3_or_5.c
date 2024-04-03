#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* answers[] = {
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
    char question[100];
    printf("Ask the magic 8 ball a yes or no question: ");
    fgets(question, sizeof(question), stdin);

    if (question[0] != '\0') {
        srand(time(NULL));
        int random_index = rand() % num_answers;
        printf("The answer is: %s", answers[random_index]);
    } else {
        printf("Please ask a question.");
    }
}

int main() {
    magic_8_ball();
    return 0;
}
