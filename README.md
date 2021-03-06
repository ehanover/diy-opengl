# DIY-OpenGL

My exploration of 3D rendering, without using OpenGL or any other 3D graphics libraries. 

```
sudo apt install cmake libsdl2-2.0-0 libsdl2-dev

git clone https://github.com/ehanover/diy-opengl.git
cd diy-opengl
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Release ..
make && cmake --install . --prefix ".."
./infinite-runner
```

<br>

**Features I've implemented:** custom matrix and vector classes, object transformations, projection+perspective projections, camera movement, triangle rasterization, normal creation, backface+frustum culling, STL importing, ambient+diffuse lighting, z-buffering

**Features I want to implement:** FPS upper bounding, texturing, specular lighting (Phong), support for multiple lights, object coloring, multithreading (is this doable?), general optimization

**Current problems:** shaders should belong to objects, unclear standard for individually coloring vertices

<br>

Resources I've used
* Graphics overview: https://en.wikipedia.org/wiki/Graphics_pipeline
* Coordinate systems: https://learnopengl.com/Getting-started/Coordinate-Systems
* Projection and perspective, transformations: http://codeofthedamned.com/index.php/3d-projection-and-matrix-transforms
* Transformations of normals: https://www.scratchapixel.com/lessons/3d-basic-rendering/transforming-objects-using-matrices
* Rasterization and interpolation: https://www.scratchapixel.com/lessons/3d-basic-rendering/rasterization-practical-implementation/rasterization-stage
* Fragment interpolation for coloring: https://paroj.github.io/gltut/Illumination/Tut10%20Fragment%20Lighting.html
* Lighting concepts: https://learnopengl.com/Lighting/Basic-Lighting
* STL files: http://www.jgxsoft.com/examples/STL%20Reader/STL%20Reader.html
