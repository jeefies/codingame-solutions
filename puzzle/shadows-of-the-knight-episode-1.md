# Shadows of the knight episode 1
**URL** : [https://www.codingame.com/ide/puzzle/shadows-of-the-knight-episode-1](https://www.codingame.com/ide/puzzle/shadows-of-the-knight-episode-1)  
**SolutionFile**: [shadows-of-the-knight-episode-1.c](./shadows-of-the-knight-episode-1.c)  
***中文文档见后，由网易翻译提供***

# Game Detail
## The Gaol
You will look for the hostages on a given building by jumping from one window to another using your grapnel gun. Your goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately, you have a limited number of jumps before the bombs go off...  
## Rules
Before each jump, the heat-signature device will provide you with the direction of the bombs based on your current position:  
> U (Up)  
> UR (Up-Right)  
> R (Right)  
> DR (Down-Right)   
> D (Down)  
> DL (Down-Left)  
> L (Left)   
> UL (Up-Left)  
Your mission is to program the device so that it indicates the location of the next window you should jump to in order to reach the bombs' room as soon as possible.  
Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).  
## Note
For some tests, the bombs' location may change from one execution to the other: the goal is to help you find the best algorithm in all cases.  
The tests provided are similar to the validation tests used to compute the final score but remain differen  
## Game Input/Output
The program must first read the initialization data from standard input. Then, within an infinite loop, read the device data from the standard input and provide to the standard output the next movement instruction.  
- - -
### Initialization input
Line 1 : 2 integers W H. The (W, H) couple represents the width and height of the building as a number of windows.  
Line 2 : 1 integer N, which represents the number of jumps you can make before the bombs go off.  
Line 3 : 2 integers, representing your starting position (x, y).  
- - -
### Input for one game turn
The direction indicating where the bomb is.  
- - -
### Output for one game turn
A single line with 2 integers X Y separated by a space character. (X, Y) represents the location of the next window you should jump to. X represents the index along the horizontal axis, Y represents the index along the vertical axis. (0,0) is located in the top-left corner of the building.  
- - -
### Constraints
> 1 ≤ W ≤ 10000  
> 1 ≤ H ≤ 10000   
> 2 ≤ N ≤ 100  
> 0 ≤ X, X0 < W   
> 0 ≤ Y, Y0 < H  
> Response time per turn ≤ 150ms  
> Response time per turn ≤ 150ms  
## Example (from origin)
<img src="https://github.com/jeefies/codingame-solutions/raw/master/puzzle/Shadows-of-the-Knight-Episode-1-example.png" />

# Solution
I use bisection method (resource from baike.baidu.com), or dichotomy (translated by Google)  
In [www.codingame.com](www.codingame.com), it maybe is called [binary search](https://www.codingame.com/learn/binary-search), also known as half-interval search or logarithmic search (from codingame page, it says it's from wikipedia...).

# 游戏内容
## 目标
你将使用霰弹枪从一扇窗户跳到另一扇窗户去寻找特定建筑上的人质。你的目标是跳到人质所在的窗口去拆除炸弹。不幸的是，在炸弹爆炸前你的跳跃次数是有限的……
## 规则
每次跳跃之前，热信号装置会根据你当前的位置提供炸弹的方向：
> U (上)  
> UR (右上)  
> R (右)  
> DR (右下)   
> D (下)  
> DL (左下)  
> L (左)   
> UL (坐上)  
你的任务是对该装置进行编程，以便它指示你应该跳转到的下一个窗口的位置，以便尽快到达炸弹的房间。
建筑被表示为一个矩形的窗口数组，建筑左上角的窗口位于索引(0,0)处。
## 注意事项
在某些测试中，炸弹的位置可能会在不同的执行中发生变化:目标是帮助您找到所有情况下的最佳算法。
提供的测试类似于用于计算最终分数的验证测试，但仍然不同。
## 游戏输入
程序必须首先从标准输入读取初始化数据。然后，在一个无限循环中，从标准输入读取设备数据，并向标准输出提供下一个移动指令。
### 初始化输入
第一行：2个整数W H。(W, H)对代表建筑的宽度和高度，以这些窗户为单位。
第二行：1个整数N，代表炸弹爆炸前你可以跳跃的次数。
第三行：两个整数(x, y)，表示起始位置。
### 一个游戏回合的输入
指示炸弹所在的方向的字符串。
### 一个游戏回合的输出
由两个整数X Y用空格隔开的一行。(X, Y)表示您应该跳转到的下一个窗口的位置。X表示横轴上的指标，Y表示纵轴上的指标。(0,0)位于建筑物的左上角。
### 限制
> 1 ≤ W ≤ 10000  
> 1 ≤ H ≤ 10000   
> 2 ≤ N ≤ 100  
> 0 ≤ X, X0 < W  
> 0 ≤ Y, Y0 < H  
> Response time per turn ≤ 150ms  
> Response time per turn ≤ 150ms  
## 示范
<img src="https://gitee.com/jeefy/codingame-solutions/raw/master/puzzle/Shadows-of-the-Knight-Episode-1-example.png" />

# 解决方法
二分法，我无需多言
