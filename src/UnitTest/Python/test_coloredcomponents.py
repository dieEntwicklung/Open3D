import open3d as o3d
import numpy as np


colors = np.array([
    [1.0, 0.0, 0.0],
    [1.0, 0.0, 0.0],
    [0.0, 0.0, 1.0],
    [0.0, 0.0, 1.0],
    [0.0, 1.0, 0.0],
    [1.0, 0.0, 0.0],
    [1.0, 0.0, 0.0]
])

adj = [{1, 2, 3}, {0, 3, 4}, {0, 3, 5}, {0, 1, 2, 4, 5, 6},
       {1, 3, 6}, {2, 3, 6}, {3, 4, 5}]

def test_connected_colored_components():




