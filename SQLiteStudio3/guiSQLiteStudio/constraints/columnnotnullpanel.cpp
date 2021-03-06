#include "columnnotnullpanel.h"
#include "parser/ast/sqlitecreatetable.h"

ColumnNotNullPanel::ColumnNotNullPanel(QWidget *parent) :
    ColumnUniqueAndNotNullPanel(parent)
{
}

void ColumnNotNullPanel::storeType()
{
    SqliteCreateTable::Column::Constraint* constr = dynamic_cast<SqliteCreateTable::Column::Constraint*>(constraint.data());
    constr->type = SqliteCreateTable::Column::Constraint::NOT_NULL;
}
