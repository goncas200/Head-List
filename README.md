# Custom Template Linked List in C++

A lightweight, generic, and memory-safe **Singly Linked List** implemented in C++ using templates. This project demonstrates foundational data structure concepts, explicit pointer references (`t*&`), dynamic memory management, and safe resource cleanup.

## Features

- **Generic Implementation**: Works with any data type (`int`, `float`, custom structs, etc.) using C++ templates.
- **Efficient Insertion**: Head-insertion algorithm (`add`) with $O(1)$ time complexity.
- **Memory Safe**: Prevents memory leaks by ensuring proper destruction and clearing dangling pointers (`nullptr` resetting).

## Code Structure

- `llist<t>`: The core node structure containing the node value and a pointer to the next node.
- `add(value, head)`: Inserts a new value at the beginning of the list using reference-to-pointer semantics.
- `close_list(head)`: Safely deallocates all nodes from the Heap memory and resets the head pointer to `nullptr`.

## How to Build and Run

This project uses **CMake** for building. Follow these steps to compile and run the project:

### Prerequisites
Make sure you have `cmake` and a C++ compiler (like `g++` or `clang`) installed on your system.

### Compilation

```bash
# 1. Create a build directory
mkdir build && cd build

# 2. Configure the project
cmake ..

# 3. Build the executable
cmake --build .
```

### Running the Project

After a successful build, run the generated executable:

```bash
./co
```

## Example Usage

```cpp
#include <iostream>
// ... (your llist structure definition)

int main() {
    llist<int>* head = nullptr;

    // Adding elements (inserts at the front)
    add(10, head);
    add(20, head);
    add(30, head);

    // Safely free memory and reset head to nullptr
    close_list(head); 

    return 0;
}
```

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](LICENSE) file for details.

