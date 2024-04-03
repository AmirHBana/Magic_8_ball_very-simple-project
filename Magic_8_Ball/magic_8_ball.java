 import java.util.Scanner;
import java.util.Arrays;
import java.util.Random;

public class Magic8Ball {
    private static final String[] answers = {
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

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ask the magic 8 ball a yes or no question: ");
        String question = scanner.nextLine();

        if (!question.isEmpty()) {
            Random random = new Random();
            int randomIndex = random.nextInt(answers.length);
            System.out.println("The answer is: " + answers[randomIndex]);
        } else {
            System.out.println("Please ask a question.");
        }
    }
}
