#ifndef MAIN_H
# define MAIN_H

#include <iostream>
#include <sstream>
#include <iomanip>

# define pipe 1
# define line 2

# define GUIDE "Welcome to your 80s PhoneBook! Please choose an option:\n\n\
  1. ADD – Add a new contact.\n\
  2. SEARCH – Search and view an existing contact.\n\
  3. EXIT – Exit the program.\n\n"

# define RANGE "] Choose a number between 1 and 9."
# define ENTRY ">  The contact entry at index ["
# define INVALID " <Please enter a valid option>"
# define SELECT " Select contact index for details: "
# define EMPTY " <No contacts saved in the phonebook>"
# define CHOICE "Enter your choice (ADD, SEARCH, or EXIT): "
# define EXITING "Exiting the PhoneBook. All contacts will be lost. Goodbye!"
# define ISFULL " NB: Phonebook is full. (The oldest contact will be replaced with the new one)"

#endif
