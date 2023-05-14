#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ipcd_front.h"
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    IPCD_MANGER_FRONT *ipcd_man_front;
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_pushButton_lint_clicked();
    void on_list_item_clicked(QListWidgetItem *item);

    void on_pushButton_diff_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_remove_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
