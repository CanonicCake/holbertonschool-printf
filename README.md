Printf project
Authors:
Nathan Ellis
Pilar Thornbrugh

Files:
_printfchar.c
_printf.c

Printf was a challage start to finish, leading us down to reresearch seitch case functions, and how to translate that to if statemnets. Ultimatly it was more simplified than we thought, where arguments and variadic functions where a more intregal part of the problem. There was too much code being called too, whuch required a multidimenstional array to set extra functions like c, s, d and i in while not being a line by line code. While compiling the function under gcc \*.c (and all of the -Wall -Wextra -Werror -std=gnu89 -Wnu-format) it takes all of our files under .c to grab eery function under this compilation. So if printf.c refrences printchar.c, it will call the function described after it has finsihed running, while printf.c doesn't know exactly what printchar is, it will see later that it exists and can give understanding to the computer language.

Going back to variadic functions, we've based it around the unlimited possibilities due to not knowing how large the argument passed in would wind up becoming. So we set up a variadic list to start that would pass functions between argunments depedning on what was being asked of the function, hence a string or a character.

When working to push the characters and printf functions, we ran into a merge conflict that, while not taking very long, had us realizing we should have pulled and merged and then pushed. Fixing it required a pull, a reset, a merge, a push on a different side, and then another pull before being able to push once more. Now uptodate we can continue working on integers and decimals.

One point durring the proccess we had to set all the code down just to flow chat everything and see what we wanted the code to actually do. Even afterwards when we were trying to debug we had another flow chart seeing what was actually going on in the code which lead us to see that the functions where not being called to the multidimentional array that was looping back throught the code. Having it set to a while loop then itterating back through over and over again until is sees the proper character sign, to the print out what is being called too.

The whole code will go through checks to see if the string is a non-special character based % in order to print out any string of characters that are passed through the argunment, stopping right before the '\0' character, which will allow additional input at a later date.
