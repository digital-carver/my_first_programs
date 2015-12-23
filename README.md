பெயர்/Name: R. SundaraRaman<br>
வகுப்பு/Std.: XI 'A'

These are the first programs that I wrote when I was learning programming, around 15 years of age.

These are typed up from my notebooks of the time, where I had painstakingly copied down every line of code from the computers (which turned out a good idea, because the training center's computers crashed and lost all the code!).

They are typed as they are in the notebooks, with no changes whatsoever, ever when they contain bad programming practices (which they certainly do). This is meant as a historical record, not as a "how to program" guide.

These were written assuming a Borland Turbo C environment. The simpler ones can be tested on Linux with:
```
$ compile() {
 grep -vE 'conio.h|clrscr|getch' $1 | gcc -Wall -x c - && ./a.out
 }
$ compile <programname>.c
```
Later programs make extensive use of `graphics.h` and `conio.h` features, and as such can't be tested by me (since I don't have a Turbo C environment with me). Please let me know if you were able to get them to run/encountered compiler errors/had fun with them!<br>
(The testing, by the way, is just for my own curiosity. The programs go here whether or not they succcessfully compile.)

The order in which the programs are written in the notebook (which might be helpful to see if/how I progressed with time) is below. The descriptions on the links are (in most cases) from comments at the top of the programs in the notebook.

1. [Finds whether a given no. is a prime number](prime.c)
2. [Gives sum of N nos](sum_n.c)
3. [Finds even and odd no.s](even_odd.c)
4. [Finds & displays the prime no.s among the no.s given ](primer.c)
5. [Converts a decimal no. to its binary equivalent](dec_to_bin.c)
6. Prints the prime no.s within a given no.
7. [Add matrices](add_matrices.c)
8. [Number dropping](number_drop.c)
9. String reversal
10. Multiplication table
11. Gives roots of quadratic equation
12. [`*`
      `* *`
      `* * *`](print_stars.c)
13. [`1`
      `2 2`
      `3 3 3`](print_122333.c)

14. [`1`
      `1 2`
      `1 2 3`](print_112123.c)
      
15. [`1`
      `2 3`
      `4 5 6`](print_123456.c)
16. [`3 2 1`
      `3 2`
      `3`](print_321323.c)
17. [`3 3 3`
      `2 2`
      `1`](print_333221.c)
18. `6 5 4`
    `3 2`
    `1`
19. `1 2 3`
    `1 2`
    `1`
20. `1`
    `0 1`
    `1 0 1`
21. `1 0 1`
    `0 1`
    `1`
22. Fibonacci series
23. Number Reverser
24. Factorial without \*
25. Finds whether prime or not
26. Counts even and odd no.s
27. Ascending ordere
28. Transpose
29. Sort in no.
30. Bill
31. Bin2dec
32. Colsort
33. Rowsort
34. Play the game Crorpaty.c
35. Dec2bin
36. sundar.h
37. Dropper
38. obyofact.c
39. nbynfact.c
40. leapyear - finds if leap - gives no. of days
41. leapyrs.c
42. Magicsqr.c
43. oldmaze.c
44. Multmtrx.c
45. NPOWNNF (1<sup>1</sup>/1! + 2<sup>2</sup>/2! + ...)
46. Runtime
47. strtouch.c
48. strmover.c
49. sinecos.c
50. strasc.c
51. strdesc.c
52. strpalin.c
53. Maze.c
54. Day.c
