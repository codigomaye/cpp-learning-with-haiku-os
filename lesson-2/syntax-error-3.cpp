int Main(void)
{
    return 1;
}

// Syntax error: `_start` function not included (not included `__gxx_personality_v0` like in book)
// The error is in the Linter (ld). The program compiled well, it couldn't find the required function.
// All undefined reference to is a linker error
// The book explains that undefined reference linker error is because of 2 cases:
// 
// 1. You forgot to link ina library that you used
// 2. Source code file was accidentally left out when the program whas built