学习笔记
1.递归
1.1 递归模板（具体场景中可能有的步骤有重合和顺序的调整，但整体模板是如此）
#terminate
#process the logic in current level
#drill down
#reverse the current state if needed

1.2 典型题目是括号生成，根据该题目，每层可以选择添加左括号或者右括号，进一步衍生出每层可以添加xxx或不添加xxx，例如leetcode的题目“组合”
1.3 当前能做到碰到一些题目能条件反射的想到使用递归，例如链表倒叙排列等一类需要先处理最底层，逐步回到上层的题目，以及二叉树的相关题目

2.分治
2.1 模板/回溯(本质上还是递归，因此递归的理解和掌握至关重要)
#recursion terminate
#prepare data
#conquer subprocess
#process and generate the final result
#reverse the current level states


3.总结
递归相关的题目还是要多练，做到条件反射，写的越多，越敏感(亲身感受)
同时，理解递归的时候，多想着使用栈模拟(递归本质也是栈操作)，例如二叉树的前中后序遍历，能更好的理解递归原理