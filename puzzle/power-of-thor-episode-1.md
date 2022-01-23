# Power of Thor Episode 1
**URL** : [https://www.codingame.com/ide/puzzle/power-of-thor-episode-1](https://www.codingame.com/ide/puzzle/power-of-thor-episode-1)
**SolutionFile** : [power-of-thor-episode-1.c](./power-of-thor-episode-1.c)
***中文文档见后，由网易翻译提供***

# Game Detail
## The Gaol
Your program must allow Thor to reach the light of power.
## Rules
Thor moves on a map which is 40 wide by 18 high. Note that the coordinates (X and Y) start at the top left! This means the most top left cell has the coordinates "X=0,Y=0" and the most bottom right one has the coordinates "X=39,Y=17".  
Once the program starts you are given:  
> the variable lightX: the X position of the light of power that Thor must reach.  
> the variable lightY: the Y position of the light of power that Thor must reach.  
> the variable initialTX: the starting X position of Thor.  
> the variable initialTY: the starting Y position of Thor.  
At the end of the game turn, you must output the direction in which you want Thor to go among:  
> N (North)
> NE (North-East)  
> E (East)  
> SE (South-East)  
> S (South)  
> SW (South-West)  
> W (West)  
> NW (North-West)  
Each movement makes Thor move by 1 cell in the chosen direction.
## Note
Do not forget to execute the tests from the "Test cases" panel.
Beware: the tests given and the validators used to compute the score are slightly different in order to avoid hard coded solutions.
## Game Input/Output
The program must first read the initialization data from the standard input, then, in an infinite loop, provides on the standard output the instructions to move Thor.  
### Initialization Input
Line 1: 4 integers lightX lightY initialTX initialTY. (lightX, lightY) indicates the position of the light. (initialTX, initialTY) indicates the initial position of Thor.  
### Input for a game round
Line 1: the number of remaining moves for Thor to reach the light of power: remainingTurns. You can ignore this data but you must read it.  
### Output for a game round
A single line providing the move to be made: N NE E SE S SW W ou NW  
### Constraints
0 ≤ lightX < 40  
0 ≤ lightY < 18  
0 ≤ initialTX < 40  
0 ≤ initialTY < 18  
Response time for a game round ≤ 100ms  
## Synopsis
> **The final battle of Ragnarök, the twilight of the gods is approaching. You incarnate Thor who is participating in this final battle against all the forces of evil, led by Loki, Thor's wizard brother.**  
> **Thor was wounded during a previous battle against Fenrir, the wolf-god. During the battle, Loki took advantage of the general confusion and used his magic to annihilate the magical powers of Thor’s hammer, Mjöllnir, by separating it from his soul: the light of power.**  
> **Thor, who now feels very weak, must find and reach the light of power, as fast as possible, since it is the only thing which can restore his and Mjollnir's powers.**  
## Example (from origin)
<img src="https://github.com/jeefies/codingame-solutions/raw/master/puzzle/power-of-thor-episode-1.png"></img>
# Solution
It's hard to say which method exactly I use.  
Maybe it has no name, or has the name I don't know.  
I give two ways to solve the problem, there's very similar, but thought is different.  
At the end of the file, I copied the official solution (Maybe it's much easier than mime...T\_T)

# 游戏内容
## 目标
你的程序必须允许托尔接触到力量之光。
## 规则
雷神在一张40宽18高的地图上移动。注意，坐标(X和Y)从左上角开始!这意味着最左上角的单元格的坐标是“X=0,Y=0”，而最右下角的单元格的坐标是“X=39,Y=17”。  
一旦程序开始，你就会得到如下内容：  
> 变量lightX:雷神必须到达的能量之光的X位置。  
> 变量lightY:雷神必须到达的能量之光的Y轴位置。  
> 变量initialTX:雷神的起始X位置。  
> 变量initialTY:雷神的起始Y位置。  
> 我在代码中将此处四个变量以此改名为lx, ly, ix, iy  
在游戏回合的最后，你必须输出你想让雷神去的方向:  
> N(北)  
> NE(东北)  
> E(东)  
> SE(东南) 
> S(南)  
> SW(西南)  
> W(西)  
> NW(西北)  
## 注意事项
不要忘记从“测试用例”面板执行测试。  
注意:为了避免硬编码解决方案，给出的测试和用于计算分数的验证器略有不同。  
## 游戏输入，输出
### 初始化输入
第1行:4个整数lightX lightY initialTX initialTY。(lightX, lightY)表示灯的位置。(initialTX, initialTY)表示雷神的初始位置
### 一个游戏回合的输入
雷神到达力量之光的剩余步数，或者叫剩余回合。您可以忽略这些数据，但必须读取它。
### 一个游戏回合的输出
提供移动的单线:N NE E SE S SW W NW
### 限制
0 ≤ lightX < 40  
0 ≤ lightY < 18  
0 ≤ initialTX < 40  
0 ≤ initialTY < 18  
游戏回合的响应时间不超过100毫秒
## 提要（游戏背景）
Ragnarök的最后一战，诸神的黄昏即将来临。你化身为雷神，参加了这场由雷神的巫师兄弟洛基率领的与所有邪恶势力的最后战斗。托尔在上一次与狼神芬里尔的战斗中负伤。在战斗中，洛基利用混乱的局面，将雷神之锤(Mjöllnir)与自己的灵魂“力量之光”分开，用自己的魔法消灭了雷神之锤的魔力。托尔现在感到非常虚弱，他必须尽快找到并到达力量之光，因为这是唯一可以恢复的东西。
## 示范
<img src="https://gitee.com/jeefy/codingame-solutions/raw/master/puzzle/power-of-thor-episode-1.png"></img>
# 解决方法
我很难说我到底用了什么方法，或许这个方法没有名字，或许只是我不知道而已。  
源文件中我提供了两种方法，这两种方法十分相似，但是思考的出发点却不太一样。  
在源文件的结尾，我将官方给的方法贴了上去^_^
