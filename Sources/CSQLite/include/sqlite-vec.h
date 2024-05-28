#ifndef SQLITE_VEC_H
#define SQLITE_VEC_H

#include "sqlite3ext.h"

#define SQLITE_VEC_VERSION "v0.8c418f934908b41ed840386fbf0412e076dc0664"
#define SQLITE_VEC_DATE "28-05-2024"
#define SQLITE_VEC_SOURCE "github.com/asg017/sqlite-vec"

#ifdef __cplusplus
extern "C" {
#endif

int sqlite3_vec_init(sqlite3 *db, char **pzErrMsg,
                     const sqlite3_api_routines *pApi);
int sqlite3_vec_fs_read_init(sqlite3 *db, char **pzErrMsg,
                             const sqlite3_api_routines *pApi);

#ifdef __cplusplus
} /* end of the 'extern "C"' block */
#endif

#endif /* ifndef SQLITE_VEC_H */
