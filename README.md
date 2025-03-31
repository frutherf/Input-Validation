# Input-Validation, written by Francesca Rutherford

### Background Information
In this project, I wrote a C++ file that validates user input for a variety of types and considers some edge cases in a user-friendly, non-vulgar manner.

This project was completed for the Advanced Programming course at the University of Vermont during the Spring 2025 semester. 

### Project Description
The **user** is prompted for a variety of inputs:

| Type of input | Definition                                                        |
|---------------|-------------------------------------------------------------------|
| Character | A string of length 1                                              |
| Word | A string with no whitespace                                       |
| Sentence | A string that is read in until the user hits enter/newline        |
| Integer | A valid integer value with nothing else on the same line of input |
| Floating-Point Number | A valid floating-point number (which can be an integer, it isn't required to have a decimal part) and nothing else on the same line of input |

##### What would be considered an invalid input?
- No input (empty space or immediately hitting the return button)
- An input of a type different than what was specified by the prompt (e.g., a word when the prompt requested a character)
##### What happens when the user's input is invalid?
- The user is re-prompted with a message of invalidity and is requested again to provide a valid input. 
  - Each type has its own re-prompt message.
##### Other Features
- Each input type request/prompt utilizes its own function for organizational purposes (e.g., get_char_from_user, get_word_from_user, etc.)

## Sample Output 
#### Authored by Lisa Dion
The user input is in bold font.
<pre>
Enter a single character: <b>no</b>
Invalid input. Enter a single character: <b>NO</b>
Invalid input. Enter a single character: <b>but why?</b>
Invalid input. Enter a single character: <b>Ok here it is: a</b>
Invalid input. Enter a single character: <b>12345</b>
Invalid input. Enter a single character:
No input. Enter a single character: <b>1n2m3</b>
Invalid input. Enter a single character: <b>k</b>
You entered the character k
Enter a single word: <b>Here's a sentence instead</b>
Invalid input. Enter a single word:
No input. Enter a single word: <b>Ok wow</b>
Invalid input. Enter a single word: <b>butterfly</b>
You entered the word butterfly
Enter a sentence:
No input. Enter a sentence:
No input. Enter a sentence:
No input. Enter a sentence:
No input. Enter a sentence: <b>Peekaboo!</b>
You entered the sentence: Peekaboo!
Enter a number: <b>ok</b>
Invalid input. Enter a number: <b>five</b>
Invalid input. Enter a number:
No input. Enter a number: <b>123 abc</b>
Invalid input. Enter a number: <b>abc 123</b>
Invalid input. Enter a number: <b>1 1</b>
Invalid input. Enter a number: <b>-4bc</b>
Invalid input. Enter a number: <b>-4</b>
You entered the number -4
Enter a floating-point number: <b>nope</b>
Invalid input. Enter a number:
No input. Enter a number: <b>123 abc</b>
Invalid input. Enter a number: <b>3.1415926535something</b>
Invalid input. Enter a number: <b>525,600 minutes</b>
Invalid input. Enter a number: <b>10 4</b>
Invalid input. Enter a number: <b>7.8</b>
You entered the floating-point number 7.8
</pre>

### Sources
- The first section of main.cpp was authored by the professor of the course, Lisa Dion, a senior lecturer in the department of computer science at UVM.
- https://www.mathbits.com/MathBits/CompSci/Files/End.htm -- where Lisa got information on eof()