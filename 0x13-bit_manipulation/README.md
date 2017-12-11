# 0x14-file_io

## Introduction to File I/O
### 0-read_textfile.c
* Function that reads a text file and prints it to `POSIX` standard output
* Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
  * `filename`: name of file to create
  * `letters`: number of letters to print
* Return: number of letters read and printed, 0 if fail

### 1-create_file.c
* Function that creates a file
* Prototype: `int create_file(const char *filename, char *text_content);`
  * `filename`: name of file to create
  * `text_content`: string to write to file (terminated by NULL)
* Return: 1 on success, -1 on failure

### 2-append_text_to_file.c
* Function that appends text to end of a file
* Prototype: `int append_text_to_file(const char *filename, char *text_content);`
  * `filename`: name of file to append to
  * `text_content`: string to append to file (terminated by NULL)
* Return: 1 on success, -1 on failure

### 3-cp.c
* Program that copies the content of one file into another file
* Usage: `./cp file_source file_destination`

### 100-elf_header.c
* Program that displays the information contained in an `ELF` header file
* Usage: `./elf_header elf_file`
