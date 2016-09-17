#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <iostream>
#include <sstream>

static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
  // fprintf(stderr, "%s: ", (const char*)data);
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main(int argc, char* argv[])
{
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   //char *sql;
   const char* data = "Callback function called";

   /* Open database */
   rc = sqlite3_open("neighbourhood.db", &db);
   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }

   std::cout << "Please enter region, ex: Cornwall" << std::endl;
   char region[20];
   std::cin >> region;

   std::cout << "Please enter year from 2010 - 2014" << std::endl;
   char year[20];
   std::cin >> year;

   std::stringstream sql;
   sql.str("");

   sql << "SELECT DISCRIPTION, VALUE FROM TEST WHERE NAME = '" << region << "' AND YEAR = '" << year << "'";

    /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.str().c_str(), callback, (void*)data, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Operation done successfully\n");
   }
   sqlite3_close(db);
   return 0;
}
