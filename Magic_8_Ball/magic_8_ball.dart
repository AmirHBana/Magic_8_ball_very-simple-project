import 'dart:math';

void main() {
  magic8Ball();
}

const List<String> answers = [
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
];

void magic8Ball() {
  String question;
  print("Ask the magic 8 ball a yes or no question: ");
  question = stdin.readLineSync();

  if (question.isNotEmpty) {
    var random = new Random();
    int randomIndex = random.nextInt(answers.length);
    print("The answer is: ${answers[randomIndex]}");
  } else {
    print("Please ask a question.");
  }
}
