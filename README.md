# Libft - sjang@student.42.us.org
Recreation of some of the the Standard C Library functions and some other useful ones.

### TOC
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)
* [Example usage](#example-usage)

### What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		| ft_digitcount.c 
bzero		| ft_memdel		| ft_lstdelone	| ft_fibonacci.c 
memcpy		| ft_strnew		| ft_lstdel		| ft_isonly_digit.c 
memccpy		| ft_strdel		| ft_lstadd		| ft_iterative_power.c 
memmove		| ft_strclr		| ft_lstiter	| ft_list_push_back.c
memchr		| ft_striter	| ft_lstmap		| ft_lstcount.c
memcmp		| ft_striteri	|				| ft_lstnthdata.c
strlen		| ft_strmap		|				| ft_realloc.c
strdup		| ft_strmapi	|				| get_next_line.c
strcpy		| ft_strequ		|				| stack.c
strncpy		| ft_strnequ	|				| stack2.c
strcat		| ft_strsub		|
strlcat		| ft_strjoin	|
strchr		| ft_strtrim	|
strrchr		| ft_strsplit	|
strstr		| ft_itoa		|
strnstr		| ft_putchar	|
strcmp		| ft_putstr		|
strncmp		| ft_putendl	|
atoi		| ft_putnbr		|
isalpha		| ft_putchar_fd	|
isdigit		| ft_putstr_fd	|
isalnum		| ft_putendl_fd	|
isascii		| ft_putnbr_fd	|
isprint		|
toupper		|
tolower		|


Notes:

- All the files and functions are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for the sake of this Github repo, I put them into 'src' forder.

### How does it work?

The goal is to create a library called libft.a from the source files so I can use later that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, and call **make**:

	git clone https://github.com/sjang42/42Project_Libft.git
	cd 42Project_Libft
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files), call **make clean**

### How do I use the library?

You have to tell the file where your library resides and which library it is using:

`gcc -L./ -lft example.c`

-L takes the path to your library. `./` in this case<br>
-l takes the name of your library. This is the set of characters that come after `lib` in your library name.

That's it. Now run it using `./a.out`

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/sjang42/42Project_GetNextLine)

Enjoy.

[1]: https://github.com/sjang42/42Project_Libft/blob/master/libft.en.pdf "Libft PDF"
[2]: http://42.us.org "42 USA"
