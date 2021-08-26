# Libft - My C Standard Library
My implementation of some of the Standard C Library functions including some additional useful functions.

### What is libft?
Libft is an individual project at [42](42sp.org.br) that requires us to re-create some [C standard library](https://www.tutorialspoint.com/c_standard_library/index.htm) functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

### Badge
<img src="libftm.png" width="150" height="150"/>

#### Objectives
- Unix logic

#### Skills
- Algorithms & AI
- Imperative programming
- Rigor

#### My grade
<img src="score.png" width="150" height="150"/>


## Getting started
**Follow the steps below**
```bash
# Clone the project and access the folder
git clone https://github.com/wwwwelton/libft && cd libft/

# Run Make so you can build the library
make

# Run Make with bonus if you want chained lists manipulation functions
make bonus

# Compile your main with the library, example:
clang main.c libft.a

# Execute your program
./a.out

# Clean output objects with
make fclean

# Well done!
```

## Libft / C Standard Library table reference
Each functions has the prefix "ft_" which means forty two.

<table>
    <thead>
        <tr>
            <th colspan=3><h4>C Library <a href="https://www.tutorialspoint.com/c_standard_library/ctype_h.htm">&lt;ctype.h&gt;</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_isalnum.c>ft_isalnum</a></td>
            <td>Checks whether the passed character is alphanumeric.</td>
        </tr>
        <tr>
            <td><a href=ft_isalpha.c>ft_isalpha</a></td>
            <td>Checks whether the passed character is alphabetic.</td>
        </tr>
        <tr>
            <td><a href=ft_isascii.c>ft_isascii</a></td>
            <td>Checks whether the passed character is ASCII.</td>
        </tr>
        <tr>
            <td><a href=ft_isdigit.c>ft_isdigit</a></td>
            <td>Checks whether the passed character is decimal digit.</td>
        </tr>
        <tr>
            <td><a href=ft_isprint.c>ft_isprint</a></td>
            <td>Checks whether the passed character is printable.</td>
        </tr>
        <tr>
            <td><a href=ft_tolower.c>ft_tolower</a></td>
            <td>Converts uppercase letters to lowercase.</td>
        </tr>
        <tr>
            <td><a href=ft_toupper.c>ft_toupper</a></td>
            <td>Converts lowercase letters to uppercase.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>C Library <a href="https://www.tutorialspoint.com/c_standard_library/string_h.htm">&lt;string.h&gt;</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_bzero.c>ft_bzero</a></td>
            <td>Erases the data in the n bytes of the memory block. (Write zeroes)</td>
        </tr>
        <tr>
            <td><a href=ft_memchr.c>ft_memchr</a></td>
            <td>Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_memcmp.c>ft_memcmp</a></td>
            <td>Compares the first n bytes of str1 and str2.</td>
        </tr>
        <tr>
            <td><a href=ft_memcpy.c>ft_memcpy</a></td>
            <td>Copies n characters from src to dest.</td>
        </tr>
        <tr>
            <td><a href=ft_memmove.c>ft_memmove</a></td>
            <td>Copies n characters from src to dest. (Non destructive manner)</td>
        </tr>
        <tr>
            <td><a href=ft_memset.c>ft_memset</a></td>
            <td>Copies the character c (an unsigned char) to the first n characters of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_strchr.c>ft_strchr</a></td>
            <td>Searches for the first occurrence of the character c (an unsigned char) in the string.</td>
        </tr>
        <tr>
            <td><a href=ft_strlcat.c>ft_strlcat</a></td>
            <td>Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters.</td>
        </tr>
        <tr>
            <td><a href=ft_strlcpy.c>ft_strlcpy</a></td>
            <td>Copies up to dstsize - 1 characters from the string src to dst.</td>
        </tr>
        <tr>
            <td><a href=ft_strlen.c>ft_strlen</a></td>
            <td>Computes the length of the string but not including the terminating null character.</td>
        </tr>
        <tr>
            <td><a href=ft_strncmp.c>ft_strncmp</a></td>
            <td>Compares at most the first n bytes of str1 and str2.</td>
        </tr>
        <tr>
            <td><a href=ft_strnstr.c>ft_strnstr</a></td>
            <td>Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.</td>
        </tr>
        <tr>
            <td><a href=ft_strrchr.c>ft_strrchr</a></td>
            <td>Searches for the last occurrence of the character c (an unsigned char) in the string.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>C Library <a href="https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm">&lt;stdlib.h&gt;</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_atoi.c>ft_atoi</a></td>
            <td>Converts the string to an integer (type int).</td>
        </tr>
        <tr>
            <td><a href=ft_calloc.c>ft_calloc</a></td>
            <td>Allocates the requested memory initialized to zero bytes.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Non-stantard C Library</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_itoa.c>ft_itoa</a></td>
            <td>Converts the int to a string (type char *).</td>
        </tr>
        <tr>
            <td><a href=ft_putchar_fd.c>ft_putchar_fd</a></td>
            <td>Outputs the character 'c' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a href=ft_putendl_fd.c>ft_putendl_fd</a></td>
            <td>Outputs the string 's' to the given file descriptor, followed by a newline.</td>
        </tr>
        <tr>
            <td><a href=ft_putnbr_fd.c>ft_putnbr_fd</a></td>
            <td>Outputs the integer 'n' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a href=ft_putstr_fd.c>ft_putstr_fd</a></td>
            <td>Outputs the string 's' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a href=ft_strdup.c>ft_strdup</a></td>
            <td>Returns a pointer to a null-terminated byte string, which is a duplicate of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_striteri.c>ft_striteri</a></td>
            <td>Applies a function to each character of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_strjoin.c>ft_strjoin</a></td>
            <td>Returns a new string, which is the result of the concatenation of 's1' and 's2'.</td>
        </tr>
        <tr>
            <td><a href=ft_strmapi.c>ft_strmapi</a></td>
            <td>Applies a function to each character of the string 's' to create a new string.</td>
        </tr>
        <tr>
            <td><a href=ft_strtrim.c>ft_strtrim</a></td>
            <td>Returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_substr.c>ft_substr</a></td>
            <td>Returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Chained lists manipulation</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_lstadd_back.c>ft_lstadd_back</a></td>
            <td>Adds the element at the end of the list.</td>
        </tr>
        <tr>
            <td><a href=ft_lstadd_front.c>ft_lstadd_front</a></td>
            <td>Adds the element at the beginning of the list.</td>
        </tr>
        <tr>
            <td><a href=ft_lstclear.c>ft_lstclear</a></td>
            <td>Deletes and frees the given element and every successor of that element, using a given function and free.</td>
        </tr>
        <tr>
            <td><a href=ft_lstdelone.c>ft_lstdelone</a></td>
            <td>Takes as a parameter an element and frees the memory of the element’s content using a function given as a parameter and free the element.</td>
        </tr>
        <tr>
            <td><a href=ft_lstiter.c>ft_lstiter</a></td>
            <td>Iterates the list and applies a function to the content of each element.</td>
        </tr>
        <tr>
            <td><a href=ft_lstlast.c>ft_lstlast</a></td>
            <td>Returns the last element of the list.</td>
        </tr>
        <tr>
            <td><a href=ft_lstmap.c>ft_lstmap</a></td>
            <td>Iterates the list and applies a function to the content of each element. Creates a new list resulting of the successive applications of the function. A 'del' function is used to delete the content of an element if needed.</td>
        </tr>
        <tr>
            <td><a href=ft_lstnew.c>ft_lstnew</a></td>
            <td>Returns a new element.</td>
        </tr>
        <tr>
            <td><a href=ft_lstsize.c>ft_lstsize</a></td>
            <td>Counts the number of elements in a list.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Personal functions</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_char_tostr.c>ft_char_tostr</a></td>
            <td>Converts an unsigned char to a string.</td>
        </tr>
        <tr>
            <td><a href=ft_free_ptr.c>ft_free_ptr</a></td>
            <td>Deallocates a pointer memory address and sets to NULL.</td>
        </tr>
        <tr>
            <td><a href=ft_str_replace.c>ft_str_replace</a></td>
            <td>Searches for the first occurrence of the string old_word in the string str and replaces with the string new_word.</td>
        </tr>
        <tr>
            <td><a href=ft_str_toupper.c>ft_str_toupper</a></td>
            <td>Converts lowercase letters of the string to uppercase.</td>
        </tr>
        <tr>
            <td><a href=ft_uitoa_base.c>ft_uitoa_base</a></td>
            <td>Returns a string representing the unsigned integer in the base received as an argument.</td>
        </tr>
    </tbody>
</table>

## Updating

The project is updated regularly with new functions that could be useful for other projects.

## 📝 License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](license) file for details.

---

Made by Welton Leite 👋 [See my linkedin](https://www.linkedin.com/in/welton-leite-b3492985/)
