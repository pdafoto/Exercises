# Exercises

This is a repository of small exercises I do on different courses.

## Codecademy
### [Grocery Store](https://github.com/pdafoto/Exercises/blob/main/Program.c):
#### Part 1:
Grocery stores have lots of information to keep track of: inventory, customers, prices, sales, employees, shipping, receiving, and on and on. We are going to start building a small part of that here.

For now, we are going to focus on one specific product in a grocery store: apples. We will put together basic information about them and display the information in the end. You will be using the skills you learned about variables in C to do this work. Let’s get started!
#### Part 2:
We will start you with our solution to the previous project for our apple information for a grocery store. Our version might be slightly different than what you had. You might also notice a few changes that were not part of the previous project but we will be using these as part of this project. We will get to each of the changes in the appropriate tasks.

We will be adding more information, applying sales, modifying the review score and more.
### [Little Mac](https://github.com/pdafoto/Exercises/blob/main/space.c):
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

### [Dates and Switches](https://github.com/pdafoto/Exercises/blob/main/date.c):
This is a classic coding project that utilizes `switch` statement logic to convert a given date into a familiar style displaying the month, day, and year all written out.

It may be complicated to wrap your head around at first, but after considering some cases, it may not be so tricky after all.

Want to give it a go?

Write a program that takes any user input in the format `mm/dd/yyyy` and prints it out in the style “January 1st, 2021.” (derived in English from whatever input is given).

### [Fizz Buzz](https://github.com/pdafoto/Exercises/blob/main/fizzbuzz.c):
Fizz Buzz is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!

Though this challenge will appear very simplistic to those with some coding experience, it is designed to weed out 99.5% of programming job candidates who cannot creatively use their coding knowledge to solve simple problems.

Want to give it a shot?

Write a fizzbuzz.c program that outputs numbers from 1 to 100.

But for multiples of 3, print `Fizz` instead of the number and for the multiples of 5, print `Buzz`. For numbers which are multiples of both 3 and 5, print `FizzBuzz`.

### [Anagram Finder](https://github.com/pdafoto/Exercises/blob/main/anagrams.c):
In this project, we will write a program to determine whether two strings are anagrams or not.

String `y` is an anagram of string `x` if `y` is a rearrangement of string `x`. This implies that y and x have the same letters with the same amount of each letter. Example: “code” and “deco” are anagrams!

The constraints of this project are: Each string will contain only characters that are from the first four letters of the English alphabet (‘a’, ‘b’, ‘c’, ‘d’) and spaces. All letters are in lowercase.

We will do this by creating two arrays of length four: one for each string that represents the count of each character. These arrays will serve as counters. In each array, the number at position zero corresponds to the count of the letter ‘a’, the number at position one will correspond to the count of the letter ’b’ and this pattern will continue for the remaining letters. We do not count the number of spaces. For example, “a bc d” would be an anagram of “ab cd”.

We will then loop through both strings and update their respective counters.

We will then compare the two counters to see if the two strings are anagrams and if they are, we will print “Anagram!”. If they are not, we will print “Not Anagram!”

### [String Copier](https://github.com/pdafoto/Exercises/blob/main/stringCopy.c):
In the lesson on strings, you learned about the `strcpy()` function that is used to copy one string into another string. Recall that `strcpy()` requires two strings: one source string and one destination string. It will copy the contents of the source string into the destination string.

In this project, you will increase your understanding of this function by implementing its functionality. You will see how `strcpy()` works “under the hood.”

In your code, you will implement the `strcpy()` functionality inside the `copy()` function. You will do this by using your knowledge about pointers.

Recall that a string is an array of type `char`. Also, recall that an array can be traversed using a pointer. A pointer to an array (or string) initially points to the first element (or character) in the array (string).

Inside the `copy()` function, the `char` pointer `src` is pointing to the address of the first character in the source string, and the `dst` pointer is pointing to the first character of the destination string.

### [Mini-Calendar](https://github.com/pdafoto/Exercises/blob/main/mini_calendar.c):
Have you ever wondered how an online calendar system works? How does it magically figure out the day of the week for any given date? Or, how can it simply jump to a random date 100 days from today? Well, fear not fellow C programmer! In this project, you will learn to make your own mini-calendar with some cool functionalities! The functions that you create will be able to answer simple questions like:
- Is the given year a leap year?
- What is the new date 500 days from today?

We will be following the Gregorian Calendar which is the most commonly used calendar format.

### [Race Simulator](https://github.com/pdafoto/Exercises/blob/main/race.c):
On your mark, get set, GO! Using structures and the rest of your C knowledge we’ll be creating a race simulator.

First we’ll define our complex data types using structures. Then we’ll create some fun print functions to help update our audience. Finally, we’ll implement functions to help with the racing logic and start our race!
