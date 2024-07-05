# GCC doesn't resolve libraries automatically

When working with `math-example.cpp`, the function gave me an linker error because gcc didn't include math.h  in the linker by default.

It's not that the function sqrt didn't exist. Indeed it existed. That's why the program compiled correctly. However, when linking the program, it didn't found the library, because we didn't explicitely told that we would include it.

## Similar to how portage works

Now I understand more or less how Gentoo's package manager (portage) flags works. You can specify which dependency/library to include/exclude, based on your needs.

# C++ is flexible when inserting headers.

C++ has the hability to include all C headers. All `.h` files are includable.

Although, in order to adhere to C++ standards, there are other recomended alternatives.

* `c` Prefixed Headers: These are C++ equivalent to C Standard Libraries. These function are in the `std` namespace.
    * Example: The `printf` function from `<cstdio>` behave exactly the same as the `printf` function from `<stdio.h>`
* C++ Standard Library.
    * The equivalent of `<stdio.h>` from the C++ Standard Library is `<iostream>`. It includes the same function `printf`, but it's included in the `std` namespace.

## Which headers to choose?
Now, if all are the same, which one should I choose?

It seems that:
* `<stdio.h>`: It's used to work with legacy C codes in C++.
* `<cstdio>`: Use to have a C like I/O functions.
* `<iostream>`: It's more C++ idiomatic and integrates better wih C++ features like object-oriented programming and templates.