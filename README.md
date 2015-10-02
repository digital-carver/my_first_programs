பெயர்/Name: R. SundaraRaman<br>
வகுப்பு/Std.: XI 'A'

These are the first programs I wrote when I was first learning programming, around 15 years of age.<br>

These are typed up from my notebooks of the time, where I had painstakingly copied down every line of code from the computers (which turned out a good idea, because the training center's computers crashed and lost all the code!).<br>

They are typed as they are in the notebooks, with no changes whatsoever, ever when they contain bad programming practices (which they certainly do). This is meant as a historical record, not as a "how to program" guide.<br>

These were written assuming a Borland Turbo C environment. The simpler ones can be tested on Linux with:<br>
```
$ compile() {
> grep -vE 'conio.h|clrscr|getch' $1 | gcc -Wall -x c - && ./a.out
> }
$ compile <programname>.c
```
Later programs make extensive use of `graphics.h` and `conio.h` features, and as such can't be tested by me (since I don't have a Turbo C environment with me). Please let me know if you were able to get them to run/encountered compiler errors/had fun with them!<br>
(The testing is just for my own curiosity, the programs go here whether or not they succcessfully compile.)

The order in which the programs are written in the notebook (which might be helpful to see if/how I progressed with time) is below:

1. [Finds whether a given no. is a prime number](prime.c)
2. [Gives sum of N nos](sum_n.c)
3. [Finds even and odd no.s](even_odd.c)
4. [Finds & displays the prime no.s among the no.s given ](primer.c)
5. Converts a decimal no. to its binary equivalent
6. Prints the prime no.s within a given no.
7. Add matrices
