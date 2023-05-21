#include "widget.h"
#include "ui_widget.h"
#include "ipcd_front.h"
#include <QDebug>
#include <QInputDialog>
#include <iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    int i = 0;
    int num = 0;
    void *info_arr;
    void *info_arr_tmp;


    ui->setupUi(this);
    this->setWindowTitle("IPCD_MAN");

    /* 获取后端信息 */
    void * tmp_back_man = NULL;
    this->ipcd_man_front = new IPCD_MANGER_FRONT;
    this->ipcd_man_front->ipcd_man_back = this->ipcd_man_front->back_init();
    tmp_back_man = this->ipcd_man_front->ipcd_man_back;

    /* 链接item 点击信号和槽 */
    QObject::connect(ui->listWidget_now, &QListWidget::itemClicked, this, &Widget::on_list_item_clicked);

    /* 获取所有IPCD info */
    num = this->ipcd_man_front->back_get_each(tmp_back_man, &info_arr);
    info_arr_tmp = info_arr;
    for(i=0; i< num; i++)
    {
       void *node_tmp = *(void **)info_arr_tmp;
       IPCD_INFO *tmp_info =(IPCD_INFO *)this->ipcd_man_front->back_node2info(node_tmp);
       info_arr_tmp =(char*)info_arr_tmp + sizeof(void*);
       /* 设置list */
       QListWidgetItem *tmp_item = new QListWidgetItem(tmp_info->ipcd_name);
       ui->listWidget_now->addItem(tmp_item);
    }

    free(info_arr);
}

Widget::~Widget()
{
    this->ipcd_man_front->back_destroy(this->ipcd_man_front->ipcd_man_back);
    delete ui;
}


void Widget::on_pushButton_lint_clicked()
{

}

void Widget::on_list_item_clicked(QListWidgetItem *item)
{
  ui->label_2->setText(item->text());
  this->ipcd_man_front->curr_ipcd_iteml =item;
  qDebug() << this->ipcd_man_front->curr_ipcd_iteml->text();
};


void Widget::on_pushButton_diff_clicked()
{

}


void Widget::on_pushButton_del_clicked()
{
    char*  ch;
    if(this->ipcd_man_front->curr_ipcd_iteml == NULL)
    return;
    QByteArray ba = this->ipcd_man_front->curr_ipcd_iteml->text().toLatin1(); // must
    ch=ba.data();
    this->ipcd_man_front->back_del(ch,this->ipcd_man_front->ipcd_man_back);
    int row = ui->listWidget_now->currentRow();
    ui->listWidget_now->takeItem(row);
    this->ipcd_man_front->curr_ipcd_iteml = NULL;
}

void Widget::on_pushButton_add_clicked()
{
    QString dlgTitle=QStringLiteral("输入文本对话框");//对话框标题
    QString txtLabel=QStringLiteral("请输入新建问题单名称：");//对话框Label显示内容
    QString defaultInput=QStringLiteral("IPCD_XXXX");//对话框内输入框的默认内容
    QLineEdit::EchoMode echoMode=QLineEdit::Normal;//输入框的文本内容为正常显示
    //QLineEdit::EchoMode echoMode=QLineEdit::Password;//输入框的文本内容为密码方式显示
    bool ok=false;
    QString text=QInputDialog::getText(this,dlgTitle,txtLabel,echoMode,defaultInput,&ok,Qt::MSWindowsFixedSizeDialogHint);
    if(ok && !text.isEmpty())
    {
        char*  ch;
        QByteArray ba = text.toLatin1(); // must
        ch=ba.data();
        if(this->ipcd_man_front->back_add(ch,this->ipcd_man_front->ipcd_man_back) == 0)
        {
            QListWidgetItem *tmp = new QListWidgetItem(text);
            ui->listWidget_now->addItem(tmp);
            qDebug() << text <<endl;
        }
        else
        {
           qDebug() << "back add fail" <<endl;

        }
    }
    else
    {
      qDebug() << "INPUT none" <<endl;
    }
}


void Widget::on_pushButton_remove_clicked()
{
//    char*  ch;
//    if(this->ipcd_man_front->curr_ipcd_iteml == NULL)
//    return;
//    QByteArray ba = this->ipcd_man_front->curr_ipcd_iteml->text().toLatin1(); // must
//    ch=ba.data();
//    this->ipcd_man_front->back_remove(ch);
//    int row = ui->listWidget->currentRow();
//    ui->listWidget->takeItem(row);
//    this->ipcd_man_front->curr_ipcd_iteml = NULL;
}

