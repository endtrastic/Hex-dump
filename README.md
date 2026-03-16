# Using C to create a copy of the hd 

### *Disclaimer! I didn't come up with this.*
### *Credit: Video by [Daniel Hirsch]([https://www.youtube.com/watch?v=kMRXd43qMPQ](https://www.youtube.com/watch?v=mukG1kVJ1eY&t=2419s)) on YouTube that walks you through the whole thing.*

## Quick Setup
### 1. Clone the repository
```bash
git@github.com:endtrastic/Hex-dump.git
```
### 2. Navigate to the project directory
```bash
cd hexdumps
```
### 3. Compile the code
```bash
gcc -Wall -Wextra -g -o myhexd myhexd.c
```
### 4. Test the complied file
```bash
cat myhexd.c | ./myhexd
```
> `hd myhexd.c` is the built in way to hexdump in linux
