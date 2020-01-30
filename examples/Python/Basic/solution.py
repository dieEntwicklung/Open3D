from open3d import io

if __name__ == "__main__":

    mesh = io.read_triangle_mesh("../../TestData/test_mesh.ply")
    connected_components = mesh.identically_colored_connected_components()
    f = open("result.txt", "w+")
    for item in connected_components:
        f.writelines(' '.join(str(e) for e in item)+'\n')







