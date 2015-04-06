//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

// main function
int main()
{
    
    // declare pointer in c
    char *letter; // 'letter' is name of pointer. it points to memory addr of char variable
    
    char c = 'k';
    
    letter = &c; // 'letter' points to the address of 'c'
    
    // 'c' is always the same as the value accessible via the pointer
    // access value obtained by de-referencing the pointer
    // use the '*letter' to retrieve as well (syntactically same but different to declare)
    printf("%c is always the same as %c\n", c, *letter);
    
    // if change value stored at 'c', 'letter' will also change as it tracks that value
    c = 'q';
    printf("%c is always the same as %c\n", c, *letter);
    
    // array of chars
    char eldridge[] = "eldridge";
    letter = &eldridge[3]; // 'letter' points to address of item 3 within array
    printf("%c is in %s\n", *letter, eldridge); // outputs 'r is in eldridge'
    
    // autoincrement the point (exotic)
    ++letter; // shift point to next item in the array
    printf("%c is in %s\n", *letter, eldridge); // outputs 'i is in eldridge'
    
    return 0;
}



