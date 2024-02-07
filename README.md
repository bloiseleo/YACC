# Yet another C Calculator

The basic C calculator that all kind of programmers have already done in college or just for fun. Also, it was an opportunity to learn more about Makefiles, since I have no previous experiencie with it until this project.

## Learnings

- Makefiles: Configuration files in which *make GNU utility* uses as input in order to automate tasks related to compiling software. I've seen its use in many C and C++ projects. If you want to learn more about it, I personally recommend the [official documentation](https://www.gnu.org/software/make/manual/html_node/index.html) to learn more about it and about the GNU project itself.
 
- Realloc Tricks: When we perform *memory reallocation* with **realloc**, the pointer may change. Therefore, we need to reassign it to the the pointer reallocated.

- STDOUT is line buffered by default.

## Roadmap

- [x] Accepts user input from terminal.
- [x] Create menu of operators to choose.
- [x] Parse (integers and floats) Number inputs correctly.
- [x] Perform basic Math Operations correctly.
- [x] Display result in terminal.

## How to Build this Project?

If you want, you can build it from source with these steps:

- Clone this project
- Install Make GNU Utility following the documentation metioned above.
- Run `make`.
- The binary built will be placed in `dist/main.out`