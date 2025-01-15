```
# 安装服务
mysqld -install                                                              
#初始化服务
mysqld --initialize-insecure --user=mysql                                     
#启动服务
net start mysql  
# 关闭服务
net stop mysql                                                          
# 启动服务
net start mysql                                                               
# 登陆
mysql -u root -p 
# 使用mysql数据库
use mysql;
# 修改指定用户的密码
update user set authentication_string=password('root') where user='root' and Host='localhost';
# 刷新权限
flush privileges;
# 退出
quit
# 重启服务
net stop mysql
net start mysql
# 登入（此时打开安全检查）
mysql -u root -p

#删除mysql
sc delect mysql
```

```ini
# my.ini
[client]
port=3306
default-character-set=utf8

[mysqld]
basedir=E:\Protable\mysql-5.7.19-winx64
# 数据目录
datadir=E:\Protable\mysql-5.7.19-winx64\data
port=3306
character_set_server=utf8
# 跳过安全检查
#skip-grant-tables
#没有上面这句，必须输入正确的用户名和密码才能登陆。
```

