#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>
#include "../headers/databasemanager.h"

namespace Ui {
class UserWidget;
}

class UserWidget : public QWidget {
    Q_OBJECT

public:
    explicit UserWidget(QWidget *parent = nullptr);
    ~UserWidget();

private slots:
    void onButtonSubmitClicked();
    void createTable();

private:
    Ui::UserWidget *ui;
    DatabaseManager dbManager;

    void loadUsers();
};

#endif // USERWIDGET_H
