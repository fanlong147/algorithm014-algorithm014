学习笔记
1. 深度优先遍历
1.1 利用递归特性优先下探到最底层，随后借用操作系统栈的特性，逐步回退，也可以自己使用栈数据结构模拟这一特性，则可转换为循环
1.2 模板
//C/C++
//递归写法：
map<int, int> visited;

void dfs(Node* root) {
  // terminator
  if (!root) return ;

  if (visited.count(root->val)) {
    // already visited
    return ;
  }

  visited[root->val] = 1;

  // process current node here. 
  // ...
  for (int i = 0; i < root->children.size(); ++i) {
    dfs(root->children[i]);
  }
  return ;
}

2. 广度优先搜索
2.1 队列数据结构的有效应用，通过先进先出的特性朱行遍历，使用map记录已访问过的元素
2.2 模板
// C/C++
void bfs(Node* root) {
  map<int, int> visited;
  if(!root) return ;

  queue<Node*> queueNode;
  queueNode.push(root);

  while (!queueNode.empty()) {
    Node* node = queueNode.top();
    queueNode.pop();
    if (visited.count(node->val)) continue;
    visited[node->val] = 1;

    for (int i = 0; i < node->children.size(); ++i) {
        queueNode.push(node->children[i]);
    }
  }

  return ;
}

3. 贪心算法
通过子问题最优解递推出整个问题的最优解(必须首先能证明出子问题最优-->总问题最优),一般可以转换为动态规划(尚未学到)

4. 二分查找
4.1 针对有序序列，从两侧逐步递推，每次查找可缩小一半的范围
4.2 模板
C/C++

int binarySearch(const vector<int>& nums, int target) {
	int left = 0, right = (int)nums.size()-1;
	
	while (left <= right) {
		int mid = left + (right - left)/ 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] < target) left = mid + 1;
		else right = mid - 1;
	}
	
	return -1;
}


