# Multi_text_finder
## A program that searches for words in a text file and displays sentences in which they are located.

---

## To start working with a project you need:

Place the source file in the root folder of the project:

![image](https://user-images.githubusercontent.com/81817789/113759994-68eb5b80-971e-11eb-86e1-61d3556ffd2b.png)

This is necessary in order to enter text, among which the program will search for the desired words.

## On the next step you need to write or insert some text into the file. For instance:

![image](https://user-images.githubusercontent.com/81817789/113760985-9684d480-971f-11eb-8726-d8470d5a1473.png)

## Console output for searching words: internet, money, history

![image](https://user-images.githubusercontent.com/81817789/113761754-7efa1b80-9720-11eb-9a35-cd9a534efc9b.png)

# Program development algorithm:

You need to write a function that takes 2 parameters, the first of type istream, the second - vector <string >, the result of the function should be map <string, MyClass>, containing a string (string) and an object of its own type, containing the following fields:
  - the number of occurrences of string in istream;
  - vector <string>, which stores all lines with the occurrence of the desired string.
 
 map <string, MyClass> func (istream, vector <string>) - signature of the function to be implemented.
  
