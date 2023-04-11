# GET_NEXT_LINE

This is my implementation of the get_next_line project for the Cursus 42 program. The get_next_line function reads a file descriptor (fd) line by line, returning each line as a string.

<img width="967" alt="image" src="https://user-images.githubusercontent.com/113030191/226334897-ded14777-5f50-4f31-8ba6-aa710450b1d1.png">

## Mandatory Part

<p align="center">
<img width="618" alt="image" src="https://user-images.githubusercontent.com/113030191/226335154-e0cd6a11-3206-46e6-bbf6-38fb0cbb2228.png">
</p>

## Project Description

The get_next_line function takes in a file descriptor (fd) and a pointer to a character string. It reads from the file descriptor until a newline character is encountered, at which point it returns the line as a string. The newline character is not included in the returned string.

If the end of the file is reached before a newline character is encountered, the rest of the file is still returned as a string.

The get_next_line function can be called repeatedly until the entire file has been read.

## Usage

To use the get_next_line function in a program, it includes the get_next_line.h header file and can be linked with the libft library, in this case, I use a get_next_line_utils.c file to collect the necessary functions from it.

### Links to my other projects at 42:

- **[Main Page](../../../Clocon)**
- **[libft](../../../libft-42)**
- **[ft_printf](../../../ft_printf-42)**
- **[pipex](../../../pipex-42)**
- **[push_swap](../../../push_swap-42)**
- **[so_long](../../../so_long-42)**
