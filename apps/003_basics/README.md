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

