# Solution description
### Algorithm description
After calculation an underlaying graph, if needed, iterative BFS was employed for extraction identically colored connected components.
Corresponding member function was added into TriangleMesh class, named IdenticallyColoredConnectedComponents()  
which doesn't take any arguments and returns a table typed as `std::vector<std::vector<int>>`, where inner arrays are arrays
of identically colored connected components which is consisted from numbers of vertices.
### How to build
1. Download source code from the repository: ` git clone --recursive  https://github.com/dieEntwicklung/Open3D `
2. Follow instructions on http://www.open3d.org/docs/release/compilation.html for your OS.
### How to launch examples
1. For launching C++ example (solution) go to your **Build** path, then to `bin/example/` and launch
`./solution` with a single argument which contains path to `test_mesh.ply` which is by default in `Open3D/examples/TestData/`  . Example( `./solution ../../../examples/TestData/test_mesh.ply`)
The program creates `result.txt` file with connected components in the same folder where the program is.
2. For launching Python example go to `Open3D/examples/Basic/` and launch `python solution.py` with no argumets, 
because the path was hardcoded as relative path to `TestData`. The program creates `result.txt` file with connected components 
in the same folder where the `solution.py` is.
### Unit Tests
1. Unit test was added to `Open3D/src/UnitTest/Geometry/TriangleMesh.cpp` for the new member function IdenticallyColoredConnectedComponents(), which checks the algorithm 
using the simple mesh from the task description.
