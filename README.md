# Exercises

This is a repository of small exercises I do on different courses.

## space.c (Code Academy):
Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.c program that helps him keep track of his target weight by: It should ask him what his earth weight is. Ask him to enter a number for the planet he wants to fight on. It should then compute his weight on the destination planet.

Here is the table of conversion:

| Number | Planet | Relative Gravity |
| :----: | :----- | :--------------: |
| 1	| Mercury | 0.38 |
| 2	| Venus | 0.91 |
| 3	| Mars | 0.38 |
| 4	| Jupiter | 2.34 |
| 5	| Saturn | 1.06 |
| 6	| Uranus | 0.92 |
| 7	| Neptune | 1.19 |

## Dates and Switches (Code Academy):
This is a classic coding project that utilizes `switch` statement logic to convert a given date into a familiar style displaying the month, day, and year all written out.

It may be complicated to wrap your head around at first, but after considering some cases, it may not be so tricky after all.

Want to give it a go?

Write a program that takes any user input in the format `mm/dd/yyyy` and prints it out in the style “January 1st, 2021.” (derived in English from whatever input is given).

## Anagram Finder (Code Academy):
In this project, we will write a program to determine whether two strings are anagrams or not.

String `y` is an anagram of string `x` if `y` is a rearrangement of string `x`. This implies that y and x have the same letters with the same amount of each letter. Example: “code” and “deco” are anagrams!

The constraints of this project are: Each string will contain only characters that are from the first four letters of the English alphabet (‘a’, ‘b’, ‘c’, ‘d’) and spaces. All letters are in lowercase.

We will do this by creating two arrays of length four: one for each string that represents the count of each character. These arrays will serve as counters. In each array, the number at position zero corresponds to the count of the letter ‘a’, the number at position one will correspond to the count of the letter ’b’ and this pattern will continue for the remaining letters. We do not count the number of spaces. For example, “a bc d” would be an anagram of “ab cd”.

We will then loop through both strings and update their respective counters.

We will then compare the two counters to see if the two strings are anagrams and if they are, we will print “Anagram!”. If they are not, we will print “Not Anagram!”

## String Copier (Code Academy)
In the lesson on strings, you learned about the `strcpy()` function that is used to copy one string into another string. Recall that `strcpy()` requires two strings: one source string and one destination string. It will copy the contents of the source string into the destination string.

In this project, you will increase your understanding of this function by implementing its functionality. You will see how `strcpy()` works “under the hood.”

In your code, you will implement the `strcpy()` functionality inside the `copy()` function. You will do this by using your knowledge about pointers.

Recall that a string is an array of type `char`. Also, recall that an array can be traversed using a pointer. A pointer to an array (or string) initially points to the first element (or character) in the array (string).

Inside the `copy()` function, the `char` pointer `src` is pointing to the address of the first character in the source string, and the `dst` pointer is pointing to the first character of the destination string.
