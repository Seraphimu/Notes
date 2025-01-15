## QT安装

QT依赖（Debian下）：

```bash
sudo apt install libxcb-cursor0 libxcb-cursor-dev
```

QT下载速度慢解决方案
1. 下载在线安装工具：https://mirrors.tuna.tsinghua.edu.cn/qt/official_releases/online_installers/
2. 使用`--mirror`参数设置镜像源： https://mirrors.ustc.edu.cn/qtproject

示例：

```bash
./installer --mirror https://mirrors.ustc.edu.cn/qtproject
```

## QT使用

原因：

1. 理解面向对象开发，巩固C++基础
2. 图形界面，比控制台好看些

学习内容：
1. 按钮、控件
2. 信号与槽
3. 文件
4. 网络
5. 数据库
6. 手册

应用：
1. 嵌入式
2. 桌面应用

### QT编译过程

1. 写
2. 生成工程文件 `qmake -project`
3. 生成makefile `qmake`
4. make

### 项目一：Windows下的运行框

用vim编写，手动使用QT的工具来编译运行。