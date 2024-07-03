

```c++
class Player {
public:
    int x, y;
    int speed;
    
    void move() {
        x = x * speed;
        y = y * speed;
    }
};
```


default `private`

The attributes and methods in a class default type is private, I should add a public key-word, if I wan to access it outside.（忘了加三回啊，三回！！）

