#### 配置信息

配置用户名

```bash
git config --global user.name "Seraphimu"
```

配置用户邮箱

```bash
git config --global user.email "Serahuimu@outlook.com"
```

#### 生成 `ssh` 密钥

```bash
ssh-keygen -t rsa -C "Serahuimu@outlook.com"
```

说明：

`-t` 指明密钥类型

`-C` 指明邮箱

此时会提醒设置 `passphase` ，不设置直接回车也可以。

向 `github` 添加公钥，私钥保留在本地。

测试添加是否成功

```bash
ssh -T git@github.com
```

#### 常用命令

初始化仓库。生成一个 `.git` 目录。

```bash
git init
```

绑定远端仓库

```bash
git remote add origin https://github.com/Seraphimu/Test.git #绑定仓库
```

添加内容

```bash
git add .
```

向本地提交

```bash
git commit -m "提交信息"
```

向远端（`github`）提交

```bash
git push -u origin master
```

