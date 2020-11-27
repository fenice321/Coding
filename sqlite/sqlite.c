#include <stdio.h>
#include "sqlite3.h"

//读多少行,就执行多少回调
#if 0
argc 3
argv**
    char*caocao
    char*weiguo
    char*100000

azColName
    char*name
    char*address
    char*salary
#endif

#if 0
argc 3
argv**
    char*suquan
    char*wuguo
    char*20000

azColName
    char*name
    char*address
    char*salary
#endif
static int callback(void* NotUsed, int argc, char** argv, char** azColName)
{
//    printf("argc = %d\n", argc);

//    int i;
//    for (int i = 0; i < argc; i++)
//    {
//        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
//    }
//    printf("\n");

    static int flag = 1;
    if (flag)
    {
        for (int i = 0; i < argc; i++)
        {
            printf("%s\t", azColName[i]);
        }
        flag  = 0;
    }
    putchar(10);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\t", argv[i]);
    }
    return 0;
}

int main(int argc, char* argv[])
{
    sqlite3* db;
    char* zERRMsg = 0;
    int rc;

    rc = sqlite3_open("mydb", &db);
    if (rc)
    {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return(1);
    }
//    rc = sqlite3_exec(db, argv[2], callback, 0, &zERRMsg);
//    if (rc != SQLITE_OK)
//    {
//        fprintf(stderr, "SQL error: %s\n", zERRMsg);
//        sqlite3_free(zERRMsg);
//    }

    char* sql;
//建表:
//    sql = "create table salary(name text, address text, salary REAL)";
//    rc = sqlite3_exec(db, sql, NULL, 0, &zERRMsg);
//    if (rc != SQLITE_OK)
//    {
//        fprintf(stderr, "SQL error: %s\n", zERRMsg);
//        sqlite3_free(zERRMsg);
//    }

#if 0
    //插入数据
    sql = "insert into salary values(\"caocao\", \"weiguo\", 10000)";
    rc = sqlite3_exec(db, sql, NULL, 0, &zERRMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zERRMsg);
        sqlite3_free(zERRMsg);
    }

    sql = "insert into salary values(\"sunquan\", \"wuguo\", 10000)";
    rc = sqlite3_exec(db, sql, NULL, 0, &zERRMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zERRMsg);
        sqlite3_free(zERRMsg);
    }

    sql = "insert into salary values(\"liubei\", \"shuguo\", 20000)";
    rc = sqlite3_exec(db, sql, NULL, 0, &zERRMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zERRMsg);
        sqlite3_free(zERRMsg);
    }
//修改数据
    float salary;
    printf("请输入刘备的工资:");
    scanf("%f", &salary);
    char sq[1024];
    sprintf(sq, "update salary set salary = %f where name = \"liubei\"", salary);
    rc = sqlite3_exec(db, sq, NULL, 0, &zERRMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zERRMsg);
        sqlite3_free(zERRMsg);
    }
//删除数据
    sql = "delete from salary where name = \"liubei\"";
    rc = sqlite3_exec(db, sql, NULL, 0, &zERRMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zERRMsg);
        sqlite3_free(zERRMsg);
    }

    sql = "select * from salary";
    rc = sqlite3_exec(db, sql, callback, NULL, &zERRMsg);
    if (rc != SQLITE_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zERRMsg);
        sqlite3_free(zERRMsg);
    }
#endif
    sql = "select * from salary";

    char** table = NULL;

    int row;
    int column;
    rc = sqlite3_get_table(db, sql, &table, &row, &column, &zERRMsg);

    for (int i = 0; i < column; i++)
    {
        printf("%s\t", table[i]);
    }
    putchar(10);
    for (int i = column; i < (row + 1)* column; i++)
    {
        printf("%s\t", table[i]);
        if (!((i + 1) % column))
            putchar(10);
    }
    sqlite3_free_table(table);
    sqlite3_close(db);
    return 0;
}
