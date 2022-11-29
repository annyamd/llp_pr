#include <stddef.h>
#include <malloc.h>

enum tableColumnType {
    UNSIGNED_INT,
    UNSIGNED_FLOAT,
    STRING, 
    BOOLEAN
};

struct tableColumn {

};

struct tableSchema {

};

struct tableSchema *initTableSchema() {

}

void expandTableSchema(struct tableSchema *schema, char *colName, enum tableColumnType colType) {
 
}
