
#### Configure Git

Let Git know who am I. This is important for version control systems, as each Git commit uses this information.

```bash
git config --global user.name "your_username"
git config --global user.email "your_email"
```

Use global to set the usename and email for every repository on you computer.

If you want to set the username/mail for just cureent repo, you can remove `global`.


#### Initialize Git

```bash
git init
```

Once I have navigated to the correct folder, I can initialize Git on that folder.

Git creates a hidden folder to keep track of changes.