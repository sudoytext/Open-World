
# **3D RGB Color Letters: "ytext"**

This project demonstrates how to render and animate the letters **"ytext"** in 3D using **OpenGL** and **GLFW**. The letters continuously change their color with smooth RGB transitions, creating a visually captivating experience.

## **Features**
- **3D Rendering**: The letters "y", "t", "e", "x", and "t" are drawn in 3D space using OpenGL.
- **RGB Color Transitions**: The color of the letters transitions smoothly in the RGB color space.
- **Real-Time Animation**: The letters rotate and update their colors in real-time.
- **Written in C++**: Built with C++ using OpenGL, GLFW, and GLAD.

## **Installation**

### **Dependencies**

Before building and running the project, make sure you have the following libraries installed on your system:
- **GLFW**: Window management and input handling.
- **GLEW**: OpenGL Extension Wrangler to manage OpenGL extensions.
- **GLU**: OpenGL utility library.

### **Installing Dependencies on Arch Linux**

To install the required dependencies on **Arch Linux**, use the following commands:

```bash
sudo pacman -Syu
sudo pacman -S glfw-x11
sudo pacman -S glu
sudo pacman -S glew
```

If **GLAD** is not available via `pacman`, you can manually install it by following the steps below.

### **Installing GLAD (Manual Installation)**

1. Clone the GLAD repository:

   ```bash
   git clone https://github.com/sudoytext/Open-World.git
   cd glad
   ```

2. Generate the loader using CMake:

   ```bash
   cmake .
   make
   sudo make install
   ```
1. **Clone the rep**

2. **Create a build directory**:

   ```bash
   mkdir build
   cd build
   ```

3. **Run CMake to configure the project**:

   ```bash
   cmake ..
   ```

4. **Compile the project**:

   ```bash
   make
   ```

5. **Run the program**:

   ```bash
   ./world.cpp
   ```

## **Project Structure**

```text
World/
│
├── CMakeLists.txt        # Build configuration file
├── world.cpp              # C++ source code for rendering
└── README.md             # Project documentation
```
