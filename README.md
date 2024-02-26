# My Ngram

## Introduction
My Ngram is a program that counts how many times a certain character has occured in a given string or strings. It's a simple implementation of the n-gram concept used where it's needed.

## Installation
To install the program, you need to compile it using the provided Makefile. Here are the steps:

1. Clone the repository.
2. Navigate to the directory containing the source code.
3. Run `make all` or just `make`.

This will generate the `my_ngram` executable.

## Usage
You can use the program as follows:

bash:
./my_ngram text [text2, text3]

And this will display one per line, each character and the number of times it appears. The order is based on ASCII Table or in other words in alphanumerical order.

## Examples
Here is an example of how to use the program:
```bash
$>./my_ngram "aaabb" "abc"
a:4
b:3
c:1
$>

8 spaces :-)
````
## License
This project is not licensed under anything MIT like license stuff.
