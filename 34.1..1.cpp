/*
    Components of graph
    - Nodes: These are the states or vertex. For instance, users in the case of facebook
    - Edges: Links between states of graph. For instance, connection between users.
        - Undirected Edges/Two way edges
        - Directed Edges/One way edges

    Graph Representation
        - Adjacency List
        - Adjacency Matrix


    Adjacency Matrix:
    2D array, where a[i][j] = 1, if there is an edge from i to j else a[i][j] = 0
    
    | 1 0 0 |
    | 0 0 0 |
    | 0 0 1 |

    Adjacency List
    Array of list where each a[i] is a list of nodex x, that are reachable from i.

    Search in Graph
    - Depth First Search
        - Implemented using stack
    - Breadth First Search
        - Implemented using queues


    Different properties of components fo graph
    - Weighted nodes: Values are associated with nodes
    - Weighted Edges: values are associated with edges

*/ 