/**
 * @file segmantatio_fault.c
 * @author Rohit kumar (you@domain.com)
 * @brief A segmentation fault occurs when a program attempts to access a memory location that it is not allowed to access, or attempts to access a memory location in a way that is not allowed (for example, attempting to write to a read-only location, or to overwrite part of the operating system).
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Segmantation fault -

int main()
{
   char *str;
 
   /* Stored in read only part of data segment */
   str = "GfG";    
 
   /* Problem:  trying to modify read only memory */
   *(str+1) = 'n';
   return 0;
}
