#### SELECT

The `SELECT `statement is used to select data from a database.

Syntax:

```sql
SELECT COLUMN1, COLUMN2, COLUMN3... FROM <TalbeName>;
```

The `SELECT DISTINCT` statement is used to return only distinct (different) values.
Syntax:

```sql
SELECT DISTINCT COLUMN1, COLUMN2... FROM <TableName>;
```

By using the DISTINCT keyword in a function called COUNT, we can return the number of different values.

Syntax:

```sql
SELECT COUNT(DISTINCT COLUMN1, COLUMN2...) FROM <TableName>;
```

The `WHERE` clause is used to filter records.

It is used to extract only those records that fulfill a specified condition.

Syntax:

```sql
SELECT COLUMN1, COLUMN2... FROM <TableName> WHERE <Condition>;
```

Example:

```sql
SELECT * FROM Customers WHERE CustomerId = 1;
```

can use other operators than the = operator to filter the search.

```SQL
SELECT * FROM Customers WHERE CustomerId > 10;
```





#### Create Stament

The `CREATE TABLE` statement is used to create a new table in a database.

Syntax:

```sql
-- Syntax
CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    column3 datatype,
   ....
);
```