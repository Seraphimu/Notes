### Github的项目结构

- `watch`：观察已经关注的项目变化；
- `star`：赞；
- `fork`：分支，可以拷贝到自己的仓库；
- `about`：简要的介绍；
- `topic`：项目应用的相关技术；
- `code`：下载和克隆源代码；
- `readme`：比较详细的项目介绍。

### Github查找关键字

`in:name`：按名称查找。

举例：查找名称中带有`SpringBoot`的项目

```bash
in:name SpringBoot
```

`in:description`：按照`about`描述查找。

例：查找介绍中带有“游戏”的项目

```bash
in:description 游戏
```

`in:readme`：按照 `readme` 查找。

例：查找 `readme` 中带有”补丁“的项目

```bash
in:readme 补丁
```

`stars:>` 用来按照热度搜索（注意：不要打空格）

搜索热度大于4000`star`的项目

```bash
stars:>4000
```

`pushed:`：最新的更新时间。

查找2024-06-22之后更新的项目

```markdown
pushed:>2024-06-22
```

`language:`：按照语言搜索

```bash
in:readme "补丁" language:c++ pushed:>2024-01-01 
```

`forks:>`：按照分支数搜索

```bash
in:readme "补丁" language:c++ pushed:>2024-01-01 forks:>114
```

`size:>`：按照大小搜索（单位：k）

```bash
in:readme "补丁" language:c++ pushed:>2024-01-01 forks:>114 size:>10000
```

`user:`：按作者探索

```bash
user:Notsfsssf
```