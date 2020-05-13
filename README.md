# How to contribute to Pulse?

## Click on the image to get a video tutorial.

[![Pulse Contributing](https://img.youtube.com/vi/tG_y5o9qkNk/0.jpg)](https://youtu.be/tG_y5o9qkNk)

# Standards for Contributors

1) Name of file should start with Q (upper-case) followed by the question number and then pulse file extension. Eg:- Q134.pls

2) Name of branch should start with q (lower-case) followed by - and the question numbers if they are random. Eg:- q-1-67-29-134. If the questions are in sequence like 1, 2, 3, 4, 5 then branch name should be q (lower-case) followed by - , then the first question number, another -, and finally the last question number. Eg:- q-1-5. If some are in sequence and others are random like 1, 2, 3, 67, 100 then the random questions should be listed separated by -. Eg:- p-1-3-67-100.

3) Every file should contain an Author Token (~) that stores the name of the person who wrote the code.

4) Commit messages should contain the numbers of questions separated by comma (,). Even if the questions are continuous still all of them should be listed in the commit message. The commit message should not contain anything other than the question numbers. Eg:- “1, 2, 3, 4, 5” or “1, 2, 3, 67, 100”.

5) Questions should be moved to complete only after your PR (Pull Request) is merged into test-pulse branch.

6) PR should be made to test-pulse branch and no other branch.

# Syntax

<details>
  <summary><b>Operators</b></summary>

  ### Arithmetic operators

  1) Addition operator (+):-

  ```console
  1 + 2
  ```
  <b>Result = 3</b>

  2) Subtraction operator (-):-

  ```console
  1 - 2
  ```
  <b>Result = -1</b>

  3) Multiplication operator (*):-

  ```console
  1 * 2
  ```
  <b>Result = 2</b>

  4) Division operator (/):-

  ```console
  1 / 2
  ```
  <b>Result = 0.5</b>

  5) Modulo operator (%):-

  ```console
  1 % 2
  ```
  <b>Result = 1</b>

  6) Power operator (^):-

  ```console
  2 ^ 3
  ```
  <b>Result = 8</b>

  ### Relational operator

  1) Less than (<):-

  ```console
  1 < 2
  ```
  <b>Result = true</b>

  2) Greater than (>):-

  ```console
  1 > 2
  ```
  <b>Result = false</b>

  3) Equal to (==):-
  ```console
  1 == 2
  ```
  <b>Result = false</b>

  4) Less than equal to (<=):-
  ```console
  1 <= 2
  ```
  <b>Result = true</b>

  5) Greater than equal to (>=):-
  ```console
  1 >= 2
  ```
  <b>Result = false</b>

  6) Not equal to (!=):-
  ```console
  1 != 2
  ```
  <b>Result = true</b>

  ### Assignment operator

  ```console
  a = 1
  ```
  <b>Note: Further details about assignment can be found in the variables section.</b>

  ### Logical operator

  1) Not operator (!):-
  ```console
  !true
  ```
  <b>Result = false</b>

  2) And operator (and):-
  ```console
  (1 < 2) and (3 > 4)
  ```
  <b>Result = false</b>

  3) Or operator (or):-
  ```console
  (1 < 2) or (3 > 4)
  ```
  <b>Result = true</b>

</details>

<hr />

<details>
  <summary><b>Variables</b></summary>

  ### Declaring a variable

  ```console
  var a
  ```
  <b>Note: Here a is name of variable.</b>

  ### Initializing a variable

  ```console
  var a = 2
  ```
  <b>Note: Here a is name of variable and it gets a value of 2.</b>

  ### Assigning value to a variable

  ```console
  a = 3
  ```
  <b>Note: Here a is name of variable, we also assume here that a is declared earler in the code.</b>
</details>

<hr />

<details>
  <summary><b>Strings</b></summary>

  ### Initializing a string variable

  ```console
  var a = "Hello"
  ```
  <b>Note: Strings should be enclosed within double quotes (" ") in pulse, single quotes (' ') are not supported yet.</b>

  ### String operations

  1) String equality:-

  ```console
  "hello" == "hello"
  ```
  <b>Result = true</b>

  2) String concatenation:-
  ```console
  "hello" + " world"
  ```
  <b>Result = hello world</b>

  3) String multiplication:-
  ```console
  "hello" * 2
  ```
  <b>Result = hellohello</b>
  <br><br>
  <b>Note: The order of the operands is trivial, 2 * "hello" and "hello" * 2 will produce same results.</b>

  4) String indexing:-
  ```console
  var a = "hello"
  var b = a % 1
  print(b)
  ```
  <b>Result = e</b>
  <br><br>
  <b>Note: Negative indexing like python is not allowed, indexes start at 0 and go to the length of string - 1.</b>

  5) Check string end:-
  ```
  console
  var a = "hello"
  var i = 0
  while((a % i) != "~"):
      i = i + 1
  print(i)
  ```
  <b>Result = 5</b>
  <br><br>
  <b>Note: ~ is the string ending character, using that the string end can be found.</b>

</details>

<hr />

<details>
  <summary><b>Print statement</b></summary>

  ### Syntax of print statement

  ```console
  print("Hello World")
  ```

  <b>Result = Hello World</b>

  ### Syntax of print statement not ending with "\n"

  ```console
  print("Hello", "+")
  print("World")
  ```

  <b>Result = Hello+World</b>

</details>

<hr />

<details>
  <summary><b>Input function</b></summary>

  ### Syntax of input function

  ```console
  var a = input("Enter something: ")
  ```

  <b>Enter something: Hello World</b>

  ### Syntax of input function for integer input

  ```console
  var a = input("Enter an integer: ", "i")
  ```

  <b>Result = Enter an integer: 12</b>

  ### Syntax of input function for double value input

  ```console
  var a = input("Enter a double value: ", "f")
  ```

  <b>Result = Enter a double value: 3.14159</b>

  ### Syntax of input function for string input

  ```console
  var a = input("Enter a string: ", "s")
  ```

  <b>Result = Enter a string: Hello World</b>

  <b>Note: The default type of input function takes (first example in this section) takes string input by default.</b>

</details>

<hr />

<details>
  <summary><b>Author Information</b></summary>

  ### Adding author name

  ```console
  ~ Iron Man
  print("Hello World")
  ```

  <b>Note: '~' is called the author token in pulse.</b>

  ### Checking author name

  ```console
  user@programmer:~$ pulse hello.pls author

  **File**: hello.pls

  Author
  ======
  Iron Man
  ```
</details>

<hr />

<details>
  <summary><b>Check Version</b></summary>

  ### Check pulse version

  ```console
  user@programmer:~$ pulse version

  Pulse version
  =============
  v0.0.1

  ```

</details>

<hr />

<details>
  <summary><b>Conditional statements</b></summary>

  ### If statement

  ```console
  if(1 < 2):
    print("1 is less than 2")
    print("Inside if")
  ```
  <b>Result:<br>
    1 is less than 2 <br>
    Inside if
  </b>
  <br><br>
  <b>Note: In pulse, for creating blocks indentation is used (like Python). A block begins with : and every line that is indented (one tab to the right) of the immediately above block is part of that block. To put a statement outside of a block, it should be unindented (one tab backwards, indentation becomes equal to the immediate upper block).</b>

  ### If-else statement

  ```console
  if(1 > 2):
    print("1 is greater than 2")
  else:
    print("1 is lesser than 2")
  ```
  <b>Result: 1 is lesser than 2</b>


  ### Nested if-else statement

  ```console
  if(1 > 2):
    print("1 is greater than 2")
  else:
    if(1 < 2):
      print("1 is lesser than 2")
    else:
      print("There is some error")
  ```
  <b>Result: 1 is lesser than 2</b>
</details>

<hr />

<details>
  <summary><b>Looping statements</b></summary>

  ### While statement

  ```console
  var i = 0
  while(i < 10):
     print(i)
     i = i + 1
  ```
  <b>Result:<br>
  0 <br>
  1 <br>
  2 <br>
  3 <br>
  4 <br>
  5 <br>
  6 <br>
  7 <br>
  8 <br>
  9 <br>
  </b>

</details>
