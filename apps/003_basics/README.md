# Basics

## Commentaries

```cpp
// single line commentary

/*
multi
line
commentary
*/

std::cout<<"Hello world"/*<<std::endl inline commentary */;
```

## Doxygen Documentation

[Doxygen](https://www.doxygen.nl/)

Tool able to generate documentation in multiple formats.

For head start you can
```bash
$ doxygen -g # generate init config file
$ doxygen # will create documentation
```

For test start may need to set to 'YES' options `EXTRACT_ALL` and `RECURSIVE`.

### Integration with cmake

* https://www.codeintrinsic.com/integrate-doxygen-with-cmake/
* https://habr.com/ru/articles/133512/


### Extra

Probably make sence to mv doxygen output and config to separate directory. Use `OUTPUT_DIRECTORY` parameter.

Links to read:
* https://www.codeintrinsic.com/doxygen-with-c-cpp-guide/
* https://habr.com/ru/articles/252101/
* https://leimao.github.io/blog/CPP-Documentation-Using-Doxygen/
* https://eax.me/doxygen/


## Header (`.h`) files

Contains headers of code methods. Also able to contain variables and methods itself

## Preprocessor directives

Commands to preprocessor to execute before compiling. Starts with `#`

Read for examples and more:

* https://www.geeksforgeeks.org/cpp-preprocessors-and-directives/
* https://www.instms.com/cpp/preprocessor-directives


### include

Search content of requested file/library and 'copy' it to current file

Use `<>` to load system level libraries `""` to load local libraries

### pragma

Provide compiler specific instructions.

For example `once` used to prevent multiple including
