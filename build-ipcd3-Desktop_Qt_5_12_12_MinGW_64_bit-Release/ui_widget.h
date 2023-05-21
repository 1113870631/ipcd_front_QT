/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *frame_all;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_list;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_now;
    QListWidget *listWidget_now;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_before;
    QListWidget *listWidget_before;
    QFrame *frame_bton;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_lint;
    QPushButton *pushButton_diff;
    QPushButton *pushButton_del;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(818, 618);
        frame_all = new QFrame(Widget);
        frame_all->setObjectName(QString::fromUtf8("frame_all"));
        frame_all->setGeometry(QRect(9, 9, 800, 600));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_all->sizePolicy().hasHeightForWidth());
        frame_all->setSizePolicy(sizePolicy);
        frame_all->setMinimumSize(QSize(800, 600));
        frame_all->setMaximumSize(QSize(800, 600));
        frame_all->setBaseSize(QSize(800, 600));
        frame_all->setFrameShape(QFrame::StyledPanel);
        frame_all->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_all);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_list = new QFrame(frame_all);
        frame_list->setObjectName(QString::fromUtf8("frame_list"));
        frame_list->setFrameShape(QFrame::StyledPanel);
        frame_list->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_list);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame_list);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(10);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frame_list);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(1000, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setLineWidth(2);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        frame_4 = new QFrame(frame_list);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_now = new QLabel(frame_5);
        label_now->setObjectName(QString::fromUtf8("label_now"));

        verticalLayout_3->addWidget(label_now);

        listWidget_now = new QListWidget(frame_5);
        listWidget_now->setObjectName(QString::fromUtf8("listWidget_now"));

        verticalLayout_3->addWidget(listWidget_now);


        horizontalLayout_2->addWidget(frame_5);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_before = new QLabel(frame_6);
        label_before->setObjectName(QString::fromUtf8("label_before"));

        verticalLayout_4->addWidget(label_before);

        listWidget_before = new QListWidget(frame_6);
        listWidget_before->setObjectName(QString::fromUtf8("listWidget_before"));

        verticalLayout_4->addWidget(listWidget_before);


        horizontalLayout_2->addWidget(frame_6);


        verticalLayout_2->addWidget(frame_4);


        horizontalLayout->addWidget(frame_list);

        frame_bton = new QFrame(frame_all);
        frame_bton->setObjectName(QString::fromUtf8("frame_bton"));
        frame_bton->setFrameShape(QFrame::StyledPanel);
        frame_bton->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_bton);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_lint = new QPushButton(frame_bton);
        pushButton_lint->setObjectName(QString::fromUtf8("pushButton_lint"));
        pushButton_lint->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_lint);

        pushButton_diff = new QPushButton(frame_bton);
        pushButton_diff->setObjectName(QString::fromUtf8("pushButton_diff"));
        pushButton_diff->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_diff);

        pushButton_del = new QPushButton(frame_bton);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_del);

        pushButton_add = new QPushButton(frame_bton);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_add);

        pushButton_remove = new QPushButton(frame_bton);
        pushButton_remove->setObjectName(QString::fromUtf8("pushButton_remove"));
        pushButton_remove->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_remove);

        pushButton_7 = new QPushButton(frame_bton);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_7);

        pushButton_5 = new QPushButton(frame_bton);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(frame_bton);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(pushButton_8);


        horizontalLayout->addWidget(frame_bton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", " \345\275\223\345\211\215\351\200\211\346\213\251\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        label_now->setText(QApplication::translate("Widget", "now", nullptr));
        label_before->setText(QApplication::translate("Widget", "before", nullptr));
        pushButton_lint->setText(QApplication::translate("Widget", "lint", nullptr));
        pushButton_diff->setText(QApplication::translate("Widget", "diff", nullptr));
        pushButton_del->setText(QApplication::translate("Widget", "del", nullptr));
        pushButton_add->setText(QApplication::translate("Widget", "add", nullptr));
        pushButton_remove->setText(QApplication::translate("Widget", "remove", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
