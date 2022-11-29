#include <stddef.h>
#include <malloc.h>

enum tableColumnType {
    UNSIGNED_INT,
    UNSIGNED_FLOAT,
    STRING, 
    BOOLEAN
};

struct tableColumn {
    char *name;
    enum tableColumnType type;
    struct tableColumn **next;
};

struct tableSchema {
    struct tableColumn *columns;
    int columnsCount;
    int recordsCount;
};

struct tableSchema *initTableSchema() {
    struct tableSchema *schema = malloc(sizeof(struct tableSchema));
    schema->columnsCount = 0;
    schema->recordsCount = 0;
    schema->columns = NULL;
    return schema;
}

void expandTableSchema(struct tableSchema *schema, char *colName, enum tableColumnType colType) {
    struct tableColumn *col = malloc;
    col->name = colName;
    col->type = colType;
    schema->columnsCount++;
    schema->columns = NULL;
}
