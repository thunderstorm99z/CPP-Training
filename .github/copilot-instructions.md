# Copilot Instructions for CPP-Training

## Project Overview
This repository contains C++ training assignments, each in its own file under the `ASSIGNMENT-1/` directory. The codebase is designed for learning and practicing basic C++ programming concepts.

## Directory Structure
- `ASSIGNMENT-1/`
  - `1st.cpp`, `2nd.cpp`, ...: Individual assignment source files
  - `.exe` files: Compiled binaries (output of build process)

## Developer Workflows
- **Build**: Compile `.cpp` files using a C++ compiler (e.g., `g++ 1st.cpp -o 1st.exe`).
- **Run**: Execute the corresponding `.exe` file in the terminal (e.g., `./1st.exe` or `1st.exe` on Windows).
- **Edit**: Each assignment is self-contained; changes to one file do not affect others.

## Coding Patterns & Conventions
- Use `iostream` and `using namespace std;` for input/output.
- Input is typically read using `cin`, output with `cout`.
- Each assignment file contains a single `main()` function.
- Variable naming is simple and descriptive (e.g., `a`, `b`, `c`, `avg`).
- Output messages should clearly state the operation and results, e.g., `The average of A=... plus B=... is C=...`.

## Integration & Dependencies
- No external libraries or frameworks are used; only standard C++.
- No cross-file dependencies; each `.cpp` file is independent.

## Example: Calculating Average
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c, avg;
    cout << "Enter the 3 numbers" << endl;
    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    cout << "The average of A=" << a << " plus B=" << b << " plus C=" << c << " is " << avg << endl;
    return 0;
}
```

## Key Files
- `ASSIGNMENT-1/1st.cpp`: Example of input/output and calculation
- `ASSIGNMENT-1/2nd.cpp`: Use similar patterns for new assignments

## Notes for AI Agents
- Focus on clarity and correctness in input/output.
- Do not introduce external dependencies.
- Keep each assignment file self-contained.
- Use simple, readable C++ code suitable for beginners.

---
If any section is unclear or missing important details, please provide feedback to improve these instructions.
