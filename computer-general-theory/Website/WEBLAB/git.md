
# 基于code的git应用
[git](https://git-scm.com/)
## git 原理

## 终端git命令行
### 基础篇(解决'学习记录'问题)
0. 初始化本地仓库 git init
1. 展示git的状态 git status
2. 查看远程仓库 git remote;git remote -v(查看更多细节)
3. 添加内容到缓存区 git add <filename>
> 常用: git add .
>       git add *.cpp
4. 克隆本地仓库 git clone https/ssh;
5. 提交到本地的仓库 git commit -m ""
> 建议使用 "约定式提交";或者"区域:内容"
6. 推送到远程仓库 git push origin main(main可以改为任何想要推送的分支) 
7. 配置身份 git config user.name "";git config user.email ""
> 常用: git config --global user.name "";git config --global user.email ""
8. 远程连接仓库或者服务器 git remote add origin <server>
9. 查看不同:git diff
10. 查看提交历史:git log
11. 拉取远程仓库的内容:git pull
12. 下载远程仓库的内容但不下载:git fetch
13. 内置的图形日志查看器:git log --oneline --graph --all
> 常用:git log --graph
14. 图形化工具:gitk --all
15. 重置本地代码且匹配代码的最后提交版本:git reset --hard


### 基础常见问题
1. Small project area/game_Spoof shutdown games/game.c 解决方案: **调整 core.autocrlf 设置** git config --global core.autocrlf input
> 这个警告信息表明Git检测到文件`Small project area/game_Spoof shutdown games/game.c`使用了Windows风格的换行符（CRLF, Carriage Return Line Feed），而Git默认会将其转换为Unix风格的换行符（LF, Line Feed）。这种情况通常发生在跨平台开发中，当文件在不同操作系统之间传递时，Git会根据配置自动调整换行符格式。

### 提高篇(解决'独立开发'问题)
1. 切换分支 git checkout 分支名
2. 合并分支 git merge 分支
3. 取消合并(尚未完成) git merge --abort
4. 取消合并(已经完成) (软重置-保留更改但取消合并提交)git reset --soft HEAD~1;(硬重置-恢复到最后一次提交的状态)git reset  --hard HEAD~1
5. 创建分支并切换到该分 git checkout -b 分支名;git switch -c 分支名
6. 查看全部分支 git branch
7. 删除分支 git branch -d 分支名
> 强制删除一个未合并的分支:git branch -D 分支名
#### [约定式提交](https://www.conventionalcommits.org/zh-hans/v1.0.0/#%e7%ba%a6%e5%ae%9a%e5%bc%8f%e6%8f%90%e4%ba%a4%e8%a7%84%e8%8c%83)
0. 提交说明结构:
>    \<type\>[optional scope]: \<description\>
>    [optional body]
>    [optional footer(s)]
1. 修改一个bug:fix:xxxx
2. 新增功能:feat:xxx
3. 修改项目的构建系统(版本,依赖库,外部接口):build:xxx
4. 修改非业务性代码进行修改(构建流程,工具配置):chore:xxx
5. 修改持续集成流程(Travis,Jenkins等工作流程):ci:xxx
6. 修改文档: docs:xxx
7. 修改代码样式(缩进,空格,空行):style:xxx
8. 重构代码但不修改逻辑(代码结构,变量名,函数名):refactor:xxx
9. 优化性能:perf:xxx
10. 修改测试用例: test:xxx
11. 破坏性API更改: BREAKING CHANGE:xxx或者<类型>(范围)!

#### 特殊文件
1. .gitignore(被忽略的文件)(hz:后缀)
> *.\[hz1hz2\]: 忽略.hz1hz2的Q文件
> *~:忽略以~结尾的文件
> /xxx/: 忽略顶级目录下 xxx 目录
> xxx/: 忽略任意位置的xxx的目录
> xxx : 忽略任意位置的xxx的目录或目录
> !xx.后缀: 不忽略

## git 在vscode的文件上显示的图标
1. U-untracked 未跟踪的
2. M-modify 更改的
3. D-delete
4. A-added 新文件新添加到缓存区

## vsc上的源代码管理区
1. 更改(changes)
2. 暂存的更改(staged changes)-暂存区
3. 文件的某些部分被删除:原文件会显示红色,并且使用箭头指向新文件的空白处
4. 文件的某些部分被增加:新文件会显示绿色,并且原文件的阴影处指向新文件

## 小插件:git graph;git history