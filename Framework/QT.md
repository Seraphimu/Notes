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


### 常用

在标签上显示图片

方法一

```cpp
QImage img;
img.load(<path for picture>);
ui->label->setPixmap(QPixmap::fromImage(img));
```

方法二

```cpp
QPixmap pix(<path for picture>);
ui->label->setPixmap(pix);
```

#### QTimer定时器

启动定时器

```cpp
//代表1秒
#define TIMEOUT 1 * 1000
QTimer * timer;
//TIMEOUT是一个以毫秒为单位的时间
timer->start(TIMEOUT);
```

关闭定时器

```cpp
timer->stop();
```

#### QObject定时器

`QWidget` 类继承于QObject类，所以可以直接使用 `this` 指针来调用QObject中的部分方法

startTimer函数大致原型
```cpp
typedef int TimerId;
TimerId startTimer(TIMEOUT);    //定时时间为参数，定时器编号为返回值
```

使用方法

```cpp
int myTimerId = this->startTimer(TIMEOUT);
```

`killTimer` 函数使用

```cpp
this->killTimer(myTimerId);
```

使用 `timerEvent` 函数来调用事件，每隔一段时间调用一次该函数

```cpp
//重写timeEvent函数，该函数是个父类中的虚函数，继承需要重写
virtual void timerEvent(QTimerEvent * event);
```

使用方法

```cpp
timerEvent(QTimerEvent * event) {
    //如果myTimerId == event->timerId，则执行id为myTimerId的定时顺路要执行的操作
    if (event->timerId != myTimerId) {
        return;
    }
}
```

#### connect 函数

```cpp
connect(信号发出者, 信号类型, 处理者, 处理方法);
```
如

```cpp
connect(timer, &QTimer::timeout, this, &Widget::timerSlot);
```