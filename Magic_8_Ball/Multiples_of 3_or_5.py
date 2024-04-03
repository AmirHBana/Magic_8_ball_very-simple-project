import random
import tkinter as tk
from tkinter import messagebox

answers = ["It is certain", "It is decidedly so", "Without a doubt", "Yes definitely", "You may rely on it", "As I see it, yes", "Most likely", "Outlook good", "Yes", "Signs point to yes", "Reply hazy try again", "Ask again later", "Better not tell you now", "Cannot predict now", "Concentrate and ask again", "Don't count on it", "My reply is no", "My sources say no", "Outlook not so good", "Very doubtful"]

def get_answer():
    question = entry.get()
    if question:
        answer = random.choice(answers)
        messagebox.showinfo("Magic 8 Ball", answer) # Show the answer in a message box
    else:
        messagebox.showwarning("Warning", "Please enter a question.")

# Create a GUI window
root = tk.Tk()
root.title("Magic 8 Ball")

# Create label and entry widget for the question
label = tk.Label(root, text="Ask the magic 8 ball a yes or no question:")
label.pack()

entry = tk.Entry(root)
entry.pack()

# Create a button to get the answer
button = tk.Button(root, text="Get Answer", command=get_answer)
button.pack()

# Run the GUI window
root.mainloop()


