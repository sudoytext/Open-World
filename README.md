
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
sudo pacman -Syu          # Update your system
sudo pacman -S glfw-x11    # Install GLFW
sudo pacman -S glu         # Install OpenGL utilities (GLU)
sudo pacman -S glew        # Install GLEW (OpenGL Extension Wrangler)
```

If **GLAD** is not available via `pacman`, you can manually install it by following the steps below.

### **Installing GLAD (Manual Installation)**

1. Clone the GLAD repository:

   ```bash
   git clone https://github.com/Dav1dde/glad.git
   cd glad
   ```

2. Generate the loader using CMake:

   ```bash
   cmake .
   make
   sudo make install
   ```

### **Building the Project**

1. **Clone this repository**:

   ```bash
   git clone https://github.com/yourusername/3d-rgb-letters.git
   cd 3d-rgb-letters
   ```

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
   ./3D_Letters
   ```

### **Running the Program**
After following the steps above, the program should open a window with the 3D letters "ytext" displayed. The letters will rotate and change colors smoothly in real-time.

---

## **Project Structure**

```text
3d-rgb-letters/
│
├── CMakeLists.txt        # Build configuration file
├── main.cpp              # C++ source code for rendering
└── README.md             # Project documentation
```

---

## **License**

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

### **Acknowledgments**
- **OpenGL**: A powerful graphics API used for rendering the 3D objects.
- **GLFW**: A library to handle window creation and user input.
- **GLAD**: An OpenGL loader for managing OpenGL functions.

---
