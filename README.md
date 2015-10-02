பெயர்/Name: R. SundaraRaman   
வகுப்பு/Std.: XI 'A'

These are the first programs I wrote when I was first learning programming, around 15 years of age. 

These are typed up from my notebooks of the time, where I had painstakingly copied down every line of code from the computers (which turned out a good idea, because the training center's computers crashed and lost all the code!). 

They are typed as they are in the notebooks, with no changes whatsoever, ever when they contain bad programming practices (which they certainly do). This is meant as a historical record, not as a "how to program" guide. 

These were written assuming a Borland Turbo C environment, so the way I'm testing them on Linux right now is:   
```
$ compile() {
> grep -vE 'conio.h|clrscr|getch' $1 | gcc -Wall -x c - && ./a.out
> }
$ compile <programname>.c
```
Some programs make extensive use of `graphics.h`, and as such can't be tested by me (since I don't have a Turbo C environment with me). Please let me know if you were able to get them to run/encountered compiler errors/had fun with them!   
(The testing is just for my own curiosity, the programs go here whether or not they succcessfully compile.)

The order in which the programs are written in the notebook (which might be helpful to see if/how I progressed with time) is below:

1. [prime.c](prime.c)
2. 
