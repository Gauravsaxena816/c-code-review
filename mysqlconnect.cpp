#include<iostream>
#include<cstring>
#include<cstdio>
#include <winsock.h>
#include <mysql.h>

int main()
{
     MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn=mysql_init(NULL);
    if(!mysql_real_connect(conn,"localhost","admin","admin","car",0,NULL,0)){
        cout<<"\nError connect to database:"<<mysql_error(conn)<<endl;
        return 1;
    }
    string query="INSERT INTO car(name,Visual_Cost,Performance_Cost,Parts_Cost,Total_Sum) values('"+name+"','"+to_string(c->p())+"','"+to_string(c->p1())+"','"+to_string(c->p2())+"','"+to_string((x.single())*num)+"')";
    if(mysql_query(conn,query.c_str())){
        cout<<"\nError inserting values:"<<mysql_error(conn)<<endl;
        return 1;
    }
    mysql_close(conn);

}