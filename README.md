# Competitive Programming Template

Simple setup for competitive programming.

## Usage

`Ctrl+Alt+N` to run the current file

`F5` to debug the current file

## Extensions

Required extensions for vscode:
- [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
- [clangd](https://marketplace.visualstudio.com/items?itemName=llvm-vs-code-extensions.vscode-clangd)

Additional extensions for vscode:
- [CodeLLDB](https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb)
- [CodeSnap](https://marketplace.visualstudio.com/items?itemName=adpyke.codesnap)

## Customizations

```cpp
#ifndef TO_FILE
// #define TO_FILE
#define IN_FILE "input.txt"
#define OUT_FILE "output.txt"
#endif
// #undef TO_FILE
#define FAST_IO
#define ONE_TEST
```

By default input and output are handled through the `input.txt` and `output.txt` files. To use the terminal, uncomment `#undef TO_FILE`.

Uncomment `#define TO_FILE` for problems that require input and output via files. Specify the required files using `#define IN_FILE` and `#define OUT_FILE`. In vscode input and output will still be handled through the `input.txt` and `output.txt` files.

`#define FAST_IO` enables faster operations for input and output.

Comment out `#define ONE_TEST` for problems with multiple tests.
