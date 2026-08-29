# TODO.md

## Project

**DynamicArray** — a generic C++ dynamic-array project inspired by `std::vector`.

The project is intentionally being built in stages to learn Data Structures and
C++ memory-management concepts.

---

## Current State

- [x] Project concept established.
- [x] `DynamicArray` selected as the class name.
- [x] Template-based design planned.
- [x] Dynamic storage concept started.
- [x] Rule of Three studied.
- [x] Exception handling studied at a conceptual level.
- [x] AI-agent workflow rules established.
- [ ] Finish the first compile-ready version.
- [ ] Add automatic resizing.
- [ ] Add robust element access.
- [ ] Add complete copy semantics.
- [ ] Add tests.
- [ ] Document complexity and design decisions.

---

## Core Implementation

### Construction and storage

- [ ] Validate constructor size.
- [ ] Decide initial capacity policy.
- [ ] Allocate storage for `T`.
- [ ] Handle allocation failure appropriately.

### Basic operations

- [ ] `setValues()`
- [ ] `getSize()`
- [ ] `getCapacity()`
- [ ] `pushBack(const T& value)`
- [ ] `popBack()`
- [ ] `peek()`
- [ ] `display()`

### Element access

- [ ] `operator[](size_t index)`
- [ ] Bounds checking
- [ ] `const` overload of `operator[]`

### Resizing

- [ ] Design a reusable `resize()` / reallocation routine.
- [ ] Define a capacity growth strategy.
- [ ] Preserve existing elements during growth.
- [ ] Verify size/capacity invariants.

---

## Copy and Object Lifetime

- [ ] Review destructor.
- [ ] Complete copy constructor.
- [ ] Complete copy assignment operator.
- [ ] Verify deep-copy behavior.
- [ ] Test self-assignment.
- [ ] Confirm Rule of Three behavior.

### Later — after Rule of Three is understood

- [ ] Study move constructor.
- [ ] Study move assignment operator.
- [ ] Upgrade to Rule of Five where appropriate.
- [ ] Compare copy vs. move behavior.

---

## Templates / Generic Programming

- [ ] Confirm `DynamicArray<T>` works with `int`.
- [ ] Test with `double`.
- [ ] Test with `std::string`.
- [ ] Test with a simple user-defined type.
- [ ] Review assumptions about what operations `T` must support.

---

## Exception Handling

- [ ] Use `std::invalid_argument` for invalid constructor arguments where appropriate.
- [ ] Use `std::out_of_range` for invalid indexes.
- [ ] Understand propagation from `throw` to caller.
- [ ] Catch exceptions at the appropriate level.
- [ ] Review allocation failure handling with `std::bad_alloc`.
- [ ] Avoid swallowing exceptions without a good reason.

---

## Data Structures Concepts to Document

- [ ] Explain `size` vs. `capacity`.
- [ ] Explain contiguous dynamic storage.
- [ ] Explain why resizing requires reallocation.
- [ ] Explain element copying/moving during growth.
- [ ] Explain amortized complexity of `pushBack`.
- [ ] Explain why random access is O(1).
- [ ] Explain why insertion/removal in the middle is O(n).
- [ ] Document the chosen growth factor and why.

---

## Future Features

These should be added only after the core implementation is stable:

- [ ] `front()`
- [ ] `back()`
- [ ] `empty()`
- [ ] `clear()`
- [ ] `reserve()`
- [ ] `resize()`
- [ ] `insert()`
- [ ] `erase()`
- [ ] `begin()` / `end()`
- [ ] range-based iteration
- [ ] comparison operators if useful

Do not attempt to reproduce the complete `std::vector` API as part of the initial
learning phase.

---

## Learning Rule

For each unfinished item:

1. Understand the underlying C++ / Data Structures concept.
2. Attempt the implementation independently.
3. Use an AI agent for review, debugging, and targeted assistance.
4. Only ask the agent to implement code after the design is understood.

The goal is understanding, not maximum automation.
