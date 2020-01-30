#include <iostream>
#include <fstream>
#include <memory>
#include "Open3D/Open3D.h"

using namespace std;
using namespace open3d;

int main(int argc, char *argv[]) {

    vector<vector<int>> res;

    utility::SetVerbosityLevel(utility::VerbosityLevel::Debug);
    if (argc < 2) {
        utility::LogInfo("Open3D {}\n", OPEN3D_VERSION);
        utility::LogInfo("\n");
        utility::LogInfo("Usage:\n");
        utility::LogInfo("    > solution [filename]\n");
        // CI will execute this file without input files, return 0 to pass
        return 0;
    }


    auto mesh_ptr = std::make_shared<geometry::TriangleMesh>();

    if (io::ReadTriangleMesh(argv[1], *mesh_ptr)) {
        utility::LogInfo("Successfully read {}\n", argv[1]);
    } else {
        utility::LogWarning("Failed to read {}\n\n", argv[1]);
        return 1;
    }

    res = mesh_ptr->IdenticallyColoredConnectedComponents();

    ofstream of("result.txt");
    ostream_iterator<int> oit(of," ");
    for(const auto& v:res){
        copy(begin(v),end(v),oit);
        of<<endl;
    }

    utility::LogInfo("End of the test.\n");
    return 0;
}