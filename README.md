# opencv-template

## Overview

This project is a template for setting up a basic C++ project using OpenCV. It uses CMake for building, vcpkg for package management.

## Windows Requirements

- **CMake**: Version 3.12 or higher
- **Ninja**: On Windows, it is included with Visual Studio 2022
- **vcpkg**: Have it available using `VCPKG_ROOT` environment variable ([Tutorial for Windows](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-powershell))
- Any C++ compiler with C++20 support

## MAC Requirements

- Install Homebrew (if not installed)

  ```sh
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  ```

- Install CMake and Compiler

  ```sh
  brew install cmake ninja llvm
  ```

## Build and run the project in Visual Studio Code

First, we have to install some required extension.

- CMake Tools (by Microsoft)
- C/C++ (by Microsoft)

### Windows

1. Control + Shift + P -> CMake: CMake: Build
2. Control + Shift + P -> CMake: Run without Debugging

## MAC

1. CMake: Select a Kit
2. CMake: Select a Kit
3. Cmd + Shift + P -> CMake: CMake: Build
4. Cmd + Shift + P -> CMake: CMake: Run without Debugging
