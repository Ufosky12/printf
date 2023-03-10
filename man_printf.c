 
 ​                                **(_printf man page) "23 November 2022"** 
  
 ​_NAME_ 
 ​        _printf - Formatted output conversion. 
  
 ​_SYNOPSIS_ 
 ​        #include "main.h" 
 ​        int _printf(const char * format, ...) 
  
 ​_DESCRIPTION_ 
 ​        _printf() Prints to standard output under the control of a .I format 
 ​        string that specifies how subsequent arguments are converted for output. 
 ​        Return value  
 ​                On successful return, these functions return the number of characters printed, excluding the null byte used to end output to strings. 
 ​                If an output error is encountered, a negative value is returned. 
 ​        Format of the format string 
 ​                The format string is composed of 0 or more directives (ordinary characters that are not %), which are copied to the output stream. The format string is also composed of conversion specifications, each of which result in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character % and ends with the conversion specifier. 
 ​                The argument must correspond properly with the conversion specifier. By default, the arguments are used in the order given. 
 ​        The conversion specifier 
 ​                 A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are: 
 ​        'c' 
 ​                The int argument is converted to an unsigned char, then the resulting character is written 
 ​        's' 
 ​                The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to a terminating null byte, but do ot include the terminating null byte. 
 ​        'S' 
 ​                Prints a string. Non printable characters are printed as "\x" followed by their ASCII values in two digit hexadecimal 
 ​        'd', 'i' 
 ​                The int argument is converted to signed decimal notation. 
 ​        'u' 
 ​                The unsigned int argument is converted to unsigned decimal notation 
 ​        'o' 
 ​                The unsigned int argument is converted to unsigned octal notation. 
 ​        'x' 
 ​                The unsigned int argument is converted to unsigned lowercase hexadecimal notation. 
 ​        'X' 
 ​                The unsigned int argument is converted to unsigned uppercase hexadecimal notation. 
 ​        'b' 
 ​                The unsigned int argument is converted to unsigned binary notation. 
 ​        'p' 
 ​                Address is printed in hexadecimal. 
 ​        'r' 
 ​                Prints a string in reverse. 
 ​        'R' 
 ​                Prints a string converted to rot13 
 ​        '%' 
 ​                11;rgb:0000/0000/0000A '%' is written but no argument is converted. The complete version specification is '%%' 
  
 ​_EXAMPLE_ 
 ​        To print the day of the year, where weekday and month are pointers to strings and day and year are integers: 
  
 ​        #include "main.h" 
  
 ​        _printf("%s, %s %d, %d\\n", weekday, month, day, year); 
  
 ​_SEE ALSO_ 
 ​        printf(3) 
  
 ​_BUGS_ 
 ​        Unknown bugs 
  
 ​_AUTHOR_ 
 ​        1. Abdurrazaq Jibril 
 ​        2. Zaharaddeen Sunusi
