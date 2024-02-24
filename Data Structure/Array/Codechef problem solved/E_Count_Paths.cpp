// C++ program to Count
// Simple Paths in given Tree

#include <bits/stdc++.h>
using namespace std;

// Function to traverse the given tree using DFS
int DFS(int len, int V[], int root, int parent, int f,
		int& ans, unordered_map<int, int>& freq,
		unordered_map<int, vector<int> >& graph)
{
	len++;
	int val = V[root - 1];

	// Frequency map
	freq[val]++;

	int newfreq = max(f, freq[val]);
	int requirefreq = (len + 1) / 2;

	if (newfreq >= requirefreq)
		ans++;
	f = newfreq;

	for (auto it : graph[root]) {
		if (it != parent) {
			DFS(len, V, it, root, f, ans, freq, graph);
		}
	}
	freq[val]--;
}

// Wrapper function to call dfs function
int FindTotalPath(int n, int edges[][2], int V[])
{
	// Adjacency list
	unordered_map<int, vector<int> > graph;
	for (int i = 0; i < n - 1; i++) {
		graph[edges[i][0]].push_back(edges[i][1]);
		graph[edges[i][1]].push_back(edges[i][0]);
	}
	unordered_map<int, int> freq;
	int ans = 0;
	DFS(0, V, 1, -1, 0, ans, freq, graph);
	return ans;
}

// Driver Code
int main()
{
	int N = 3;
	int edges[][2]
		= { { 1, 2 }, { 2, 3 } };
	int V[] = { 1,2,1 };
	// Function Call
	cout << FindTotalPath(N, edges, V) << endl;
}
