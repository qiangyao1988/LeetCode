# BFS
class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        adjacency_list = [[] for _ in range(n)]
        
        for a, b in edges:
            adjacency_list[a].append(b)
            adjacency_list[b].append(a)
        
        stack = [source]
        seen = set()
        
        while stack:
            # Get the current node.
            node = stack.pop()
            
            # Check if we have reached the target node.
            if node == destination:
                return True
            
            # Check if we've already visited this node.
            if node in seen:
                continue
            seen.add(node)
            
            # Add all neighbors to the stack.
            for neighbor in adjacency_list[node]:
                stack.append(neighbor)
        
        # Our stack is empty and we did not reach the end node.
        return False