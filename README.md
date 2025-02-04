# Komut

Basic single file C argument parser 

## Usage

- Just include repo root or copy paste file (it has license as comment inside).
- Possibly create a function that deals with arg creation and returns to array of them `arg args[]`.
- Call `komut_init()` from `main` and fill first parameter argc, second argv, third `args` whe created in before and third is a function whats gonna happen when no input given.

For deeper understanding check `examples` folder

## Features Yet to Add

- NONE, UNIX short( `-` ) and long( `--` ), DOS ( `/` )(only on windows) prefix 
- Equal suffix
- Usage message generation
- Returning wanted primitive type
- Suboptions
- Optinal and required options
- Hinting in case of typos
- Case sensitivity