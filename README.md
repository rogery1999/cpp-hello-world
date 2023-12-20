# Initial C++ program

## Descriptions

First program written in c++

## CMAKE

To build the project follow the next steps

Delete the ./build folder if exists

```bash
rm -rf ./build
```

### For Debug

1. Generate the build files

```bash
cmake -B ./build -S . -DCMAKE_BUILD_TYPE=Debug
```

2. Generate the executable

```bash
cmake --build ./build
```

### For Release

1. Generate the build files

```bash
cmake -B ./build -S . -DCMAKE_BUILD_TYPE=Release
```

2. Generate the executable

```bash
cmake --build ./build
```
