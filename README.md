# Libft 📚
My custom C library for 42 School projects
42 Network Project | C Programming Fundamentals

# 🌐 Overview
Libft is a custom C library that reimplements standard functions from <string.h>, <ctype.h>, <stdlib.h>, and more, while adding original utility functions. It serves as the foundation for all future 42 projects.

Key Objectives

✔️ Reinforce C programming fundamentals

✔️ Create reusable code for future projects

✔️ Master memory management and pointers

✔️ Adhere to 42's coding standards (Norminette)

# 🎯 Features
1. Standard Function Reimplementations

    <ctype.h>	ft_isalpha, ft_isdigit, ft_toupper, etc.
    
    <string.h>	ft_strlen, ft_strlcpy, ft_strnstr, etc.
    
    <stdlib.h>	ft_atoi, ft_calloc, etc.

3. Additional Utility Functions

    Memory	        ft_memcmp, ft_bzero, etc.
   
    String	        ft_substr, ft_strjoin, ft_split, etc.
   
    Linked Lists	  ft_lstnew, ft_lstadd_back, etc. (Bonus)
   
    Printing	      ft_putchar_fd, ft_putnbr_fd, etc.
   
5. Bonus Features
    Linked list manipulation functions

# ⚙️ Technical Implementation
Key Design Choices
No External Dependencies

Only uses write for output (no printf)

Memory Safety no leaks allowed

All allocations checked (malloc → NULL protection)

Optimized for Readability

Follows 42's Norminette style guide

# ✅ Compliance
42 Norminette: No style errors

Error Handling: All edge cases covered
