# libft
#### My implementation of some of the Standard C Library functions including some additional ones.


### What's in it?
As you can see from the Project instructions, there are 4 sections:

Libc Functions: Some of the standard C functions
Additional functions: Functions I believe will be useful later.
Documented here.
Libc functions	Additional functions
memset			ft_memalloc
bzero			ft_memdel
memcpy			ft_strnew
memccpy			ft_strdel
memmove			ft_strclr
memchr			ft_striter
memcmp			ft_striteri
strlen			ft_strmap
strdup			ft_strmapi
strcpy			ft_strequ
strncpy			ft_strnequ
strcat			ft_strsub
strlcat			ft_strjoin
strchr			ft_strtrim
strrchr			ft_strsplit
strstr			ft_itoa	
strnstr			ft_putchar
strcmp			ft_putstr
strncmp			ft_putendl
atoi			ft_putnbr
isalpha			ft_putchar_fd
isdigit			ft_putstr_fd
isalnum			ft_putendl_fd
isascii			ft_putnbr_fd
isprint			ft_isupper
toupper			ft_islower
tolower


### How does it work?
The goal is to create a library called libft.a from the source files so I can later use that library from other projects.

To create that library, after downloading/cloning this project, cd into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/marsakov/libft.git
	cd libft
	make

You should see a libft.a file and some object files (.o).
Now to clean up (removing the .o files and the .c files from the root), call *make clean*


### How do I use the library?
I added an example file called example.c, it's using the function ft_putstr to print "DON'T PANIC" to the screen.

If you try to compile it with gcc using *gcc example.c* you will get an undefined symbol error for ft_putstr.

You have to tell the file where your library resides and which library it is using:

	gcc example.c -L. -lft -o example

-L takes the path to your library. . in this case
-l takes the name of your library. This is the set of characters that come after lib in your library name.

That's it. Now run it using ./example
