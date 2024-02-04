#ifndef SALESWIDGET_H
#define SALESWIDGET_H

#include <QWidget>

namespace Ui {
class SalesWidget;
}

class SalesWidget : public QWidget {
    Q_OBJECT

public:
    explicit SalesWidget(QWidget *parent = nullptr);
    ~SalesWidget();

private:
    Ui::SalesWidget *ui;
};

#endif // SALESWIDGET_H
