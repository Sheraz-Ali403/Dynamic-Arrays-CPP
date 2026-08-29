# DynamicArray

A custom generic dynamic-array container written in C++ and inspired by the
core ideas behind `std::vector`.

The project is being developed from scratch as a Data Structures and C++
learning project, with an emphasis on understanding how dynamic storage,
resizing, copying, templates, and exception handling work internally.

## Learning Objectives

This project is intended to provide practical experience with:

- Dynamic memory allocation and deallocation
- Pointers and references
- Arrays and contiguous storage
- Templates / generic programming
- Constructors and destructors
- Rule of Three and later Rule of Five
- Deep copying and assignment
- Operator overloading
- Exception handling
- Bounds checking
- `size` vs. `capacity`
- Dynamic resizing
- Time and space complexity
- Basic testing and debugging

## Planned Interface

The target design is a generic class:

```cpp
template <typename T>
class DynamicArray;
```

Example usage:

```cpp
DynamicArray<int> numbers;
DynamicArray<double> values;
DynamicArray<std::string> names;
```

The exact interface will evolve as the implementation is developed.

## Project Philosophy

This is intentionally **not** a reimplementation of every feature in the
standard library.

The objective is to understand the data structure and the C++ mechanisms that
make a vector-like container possible.

The implementation is therefore built incrementally:

```text
Dynamic storage
      ↓
Basic insertion/access
      ↓
Automatic resizing
      ↓
Copy semantics
      ↓
Templates
      ↓
Exception safety
      ↓
Testing
      ↓
Advanced features
```

## Suggested Repository Structure

```text
DynamicArray/
├── AGENTS.md
├── README.md
├── TODO.md
├── DynamicArray.h
├── main.cpp
└── tests/
```

For a template class, keeping the implementation in the header is a suitable
and simple organization for this learning project because template definitions
generally need to be visible when the compiler instantiates `DynamicArray<T>`.

## Example Operations

The intended container will eventually support operations such as:

```cpp
pushBack(value);
popBack();
operator[](index);
getSize();
getCapacity();
```

with additional functionality added gradually.

## Complexity Goals

Once the implementation is stable, the README will document the actual
complexity of each operation.

Typical vector-like targets are:

| Operation | Target |
|---|---:|
| Random access | O(1) |
| `pushBack` | Amortized O(1) |
| Resize/reallocation | O(n) |
| Middle insertion | O(n) |
| Middle deletion | O(n) |

These are design goals and should only be documented as final behavior after the
implementation has been verified.

## AI-Assisted Development

AI coding agents are used as learning assistants, not as autonomous authors.

The repository's `AGENTS.md` defines the rules agents must follow.

Recommended workflow:

```text
Ask for analysis
      ↓
Understand the explanation
      ↓
Implement yourself
      ↓
Ask the agent to review
      ↓
Approve targeted changes when needed
      ↓
Build / test
      ↓
Review the diff
```

Agents should not silently rewrite unfinished work.

## Status

Work in progress.

See [`TODO.md`](TODO.md) for the current learning and implementation checklist.

## License

This is a personal educational project. Add a license later if the repository
will be distributed or reused publicly.
