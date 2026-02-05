#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

// unweighted graph
class Graph
{
public:
  unordered_map<int, list<int>> adjList;
  void addEdge(int u, int v, bool direction)
  {
    // direction -> 0 -> undirected edge
    // direction -> 1 -> directed edge
    if (direction == 1)
    {
      // u -> v edge
      adjList[u].push_back(v);
    }
    else
    {
      // direction == 1
      // u -> v edge && v -> u edge
      adjList[u].push_back(v);
      adjList[v].push_back(u);
    }
    cout << "Printing adj list" << endl;
    printAdjList();
    cout << endl;
  }
  void printAdjList()
  {
    for (auto i : adjList)
    {
      cout << i.first << "-> {";
      for (auto neighbour : i.second)
      {
        cout << neighbour << ", ";
      }
      cout << "}" << endl;
    }
  }

  bool checkCyclicUndirectedBFS(int src)
  {
    queue<int> q;
    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;
    // initial state
    q.push(src);
    visited[src] = true;
    parent[src] = -1;

    while (!q.empty())
    {
      int frontNode = q.front();
      q.pop();

      for (auto nbr : adjList[frontNode])
      {
        if (!visited[nbr])
        {
          q.push(nbr);
          visited[nbr] = true;
          parent[nbr] = frontNode;
        }
        else if (visited[nbr] = true && nbr != parent[frontNode])
        { // if nbr visited -> then check if nbr parent is parent or not -> if not -> then cycle present
          // cycle present
          return true;
        }
      }
    }

    // cycle not present
    return false;
  }
};

// weighted graph
// class Graph
// {
// public:
//   unordered_map<int, list<pair<int, int>>> adjList;

//   void addEdge(int u, int v, int wt, bool direction)
//   {
//     // direction -> 0 -> undirected graph
//     // direction -> 1 -> directed graph

//     if (direction == 1)
//     {
//       // u -> v
//       // adjList[u].push_back(make_pair(v, wt));
//       adjList[u].push_back({v, wt}); // both make_pair and {} are valid
//     }
//     else
//     {
//       // direction == 0
//       // u -> v
//       // v -> u
//       adjList[u].push_back({v, wt});
//       adjList[v].push_back({u, wt});
//     }
//     cout << "Printing adj list" << endl;
//     printAdjList();
//     cout << endl;
//   }

//   void printAdjList()
//   {
//     for (auto i : adjList)
//     {
//       cout << i.first << " -> {";

//       for (auto j : i.second) // u can use pair<int, int> in place of auto
//       {
//         cout << " {" << j.first << ", " << j.second << "}, ";
//       }
//       cout << "}" << endl;
//     }
//   }
// };

// // weighted graph -> more generic by makeing template so while creation u can specify which type of node data is.
// template <typename T>
// class Graph
// {
// public:
//   unordered_map<T, list<pair<T, int>>> adjList;

//   void addEdge(T u, T v, int wt, bool direction)
//   {
//     // direction -> 0 -> undirected graph
//     // direction -> 1 -> directed graph

//     if (direction == 1)
//     {
//       // u -> v
//       // adjList[u].push_back(make_pair(v, wt));
//       adjList[u].push_back({v, wt}); // both make_pair and {} are valid
//     }
//     else
//     {
//       // direction == 0
//       // u -> v
//       // v -> u
//       adjList[u].push_back({v, wt});
//       adjList[v].push_back({u, wt});
//     }
//     cout << "Printing adj list" << endl;
//     printAdjList();
//     cout << endl;
//   }

//   void printAdjList()
//   {
//     for (auto i : adjList)
//     {
//       cout << i.first << " -> {";

//       for (auto j : i.second) // u can use pair<int, int> in place of auto -> pair<T, int>
//       {
//         cout << " {" << j.first << ", " << j.second << "}, ";
//       }
//       cout << "}" << endl;
//     }
//   }

//   void bfsTraversal(T src, unordered_map<T, bool> &visited)
//   {
//     // create adjList, already created, data member mein hai
//     // visited
//     // unordered_map<T, bool> visited;
//     // queue
//     queue<T> q;

//     // initial state
//     // src node, add it to queue
//     q.push(src);
//     visited[src] = true;

//     while (!q.empty())
//     {
//       T frontNode = q.front();
//       cout << frontNode << " ";
//       q.pop();

//       // go to nbr (neighbour)
//       for (auto nbr : adjList[frontNode])
//       {
//         T nbrData = nbr.first;
//         // check if it marked visited or not
//         if (!visited[nbrData])
//         {
//           q.push(nbrData);
//           visited[nbrData] = true;
//         }
//       }
//     }
//   }

//   void dfs(T src, unordered_map<T, bool> &visited)
//   {
//     visited[src] = true;
//     cout << src << " ";

//     for (auto nbr : adjList[src])
//     {
//       T nbrData = nbr.first;
//       if (!visited[nbrData])
//       {
//         dfs(nbrData, visited);
//       }
//     }
//   }
// };

int main()
{
  // unweighted graph
  // Graph g;
  // g.addEdge(0, 1, 1);
  // g.addEdge(1, 2, 1);
  // g.addEdge(1, 3, 1);
  // g.addEdge(2, 3, 1);

  // g.addEdge(0, 1, 0);
  // g.addEdge(1, 2, 0);
  // g.addEdge(1, 3, 0);
  // g.addEdge(2, 3, 0);

  // weighted graph
  // Graph g;
  // g.addEdge(0, 1, 1, 0);
  // g.addEdge(1, 2, 1, 0);
  // g.addEdge(1, 3, 1, 0);
  // g.addEdge(2, 3, 1, 0);

  // g.addEdge(0, 1, 4, 1);
  // g.addEdge(1, 2, 5, 1);
  // g.addEdge(1, 3, 2, 1);
  // g.addEdge(2, 3, 1, 1);

  // weighted graph with passing template that node consist of int data
  // Graph<int> g;
  // // g.addEdge(0, 1, 1, 0);
  // // g.addEdge(1, 2, 1, 0);
  // // g.addEdge(1, 3, 1, 0);
  // // g.addEdge(2, 3, 1, 0);

  // g.addEdge(0, 1, 4, 1);
  // g.addEdge(1, 2, 5, 1);
  // g.addEdge(1, 3, 2, 1);
  // g.addEdge(2, 3, 1, 1);

  // for connected graph - works
  // Graph<char> gh;

  // gh.addEdge('a', 'b', 4, 1);
  // gh.addEdge('b', 'c', 5, 1);
  // gh.addEdge('b', 'd', 2, 1);
  // gh.addEdge('d', 'c', 1, 1);

  // gh.bfsTraversal('a');

  // // for disconnected graph - works
  // Graph<char> gh;
  // unordered_map<char, bool> visited;

  // gh.addEdge('a', 'b', 4, 0);
  // gh.addEdge('b', 'c', 5, 0);

  // gh.addEdge('d', 'e', 2, 0);

  // gh.addEdge('f', 'f', 0, 0); // f is not connected to any one 💀

  // // ✅💖 most important, all test cases par kar denga
  // for (char node = 'a'; node <= 'f'; node++)
  // {
  //   if (!visited[node])
  //   {
  //     gh.bfsTraversal(node, visited);
  //   }
  // }

  // //  dfs - for connected graph
  // Graph<char> gh;
  // unordered_map<char, bool> visited;

  // gh.addEdge('a', 'b', 4, 0);
  // gh.addEdge('a', 'c', 5, 0);
  // gh.addEdge('c', 'd', 2, 0);
  // gh.addEdge('c', 'e', 0, 0); // f is not connected to any one 💀
  // gh.addEdge('d', 'e', 0, 0);
  // gh.addEdge('e', 'f', 0, 0);

  // gh.dfs('a', visited);

  // //  dfs - for disconnected graph
  // Graph<char> gh;
  // unordered_map<char, bool> visited;

  // gh.addEdge('a', 'b', 4, 0);
  // gh.addEdge('c', 'd', 2, 0);
  // gh.addEdge('c', 'e', 0, 0); // f is not connected to any one 💀
  // gh.addEdge('d', 'e', 0, 0);
  // gh.addEdge('f', 'f', 0, 0);

  // // gh.dfs('a', visited); // ❌
  // int cntOfDisconnectedGraph = 0;
  // for (char node = 'a'; node <= 'f'; node++)
  // {
  //   if (!visited[node])
  //   {
  //     gh.dfs(node, visited);
  //     cntOfDisconnectedGraph++;
  //   }
  // }
  // cout << endl;
  // cout << cntOfDisconnectedGraph << endl;

  Graph g;
  g.addEdge(0, 1, 0);
  g.addEdge(1, 2, 0);
  g.addEdge(1, 3, 0);
  g.addEdge(2, 4, 0);
  // g.addEdge(3, 4, 0);
  g.addEdge(2, 5, 0);
  int src = 0;
  bool isCyclic = g.checkCyclicUndirectedBFS(src);
  if (isCyclic)
  {
    cout << "Cycle present" << endl;
  }
  else
  {
    cout << "Cycle not present" << endl;
  }

  return 0;
}