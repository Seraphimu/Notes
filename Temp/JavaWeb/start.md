下载
配置环境变量
配置路径
配置镜像：
文件：`maven/conf/setting.xml`
```xml
    <mirror>
      <id>aliyunmaven</id>
      <mirrorOf>*</mirrorOf>
      <name>阿里云公共仓库</name>
      <url>https://maven.aliyun.com/repository/public</url>
    </mirror>
```

创建java项目：

```powershell
java: java create...
maven
webapp
```

配置依赖：

文件: `demo/pom.xml`

```xml
    <dependency> 
      <groupId>javax.servlet</groupId> 
      <artifactId>javax.servlet-api</artifactId> 
      <version>4.0.1</version> 
      <scope>provided</scope>
    </dependency>
    
    <dependency> 
      <groupId>javax.servlet.jsp</groupId> 
      <artifactId>jsp-api</artifactId> 
      <version>2.2</version> 
      <scope>provided</scope>
    </dependency>
```

创建java文件夹。

执行：

```powershell
maven excuted
package
```


新建TOMCAT, 选择其路径。

添加文件，执行。